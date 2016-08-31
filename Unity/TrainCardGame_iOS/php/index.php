<?php

class Main
 {
   private $db;

   function __construct()
   {
        $this->db = new mysqli('localhost', 'sillygw6_admin', 'GtX{%g9DB{M[', 'sillygw6_trains');
        if (mysqli_connect_errno())
        {
            printf("Connect failed: %s\n", mysqli_connect_error());
            exit();
        }
        $this->db->autocommit(FALSE);
   }


   function __destruct()
   {
     if ($this->db)
     {
       mysql_close($this->db);
     }
   }

   // Helper method to get a string description for an HTTP status code
    // From http://www.gen-x-design.com/archives/create-a-rest-api-with-php/
    function getStatusCodeMessage($status)
    {
        // these could be stored in a .ini file and loaded
        // via parse_ini_file()... however, this will suffice
        // for an example
        $codes = Array(
            100 => 'Continue',
            101 => 'Switching Protocols',
            200 => 'OK',
            201 => 'Created',
            202 => 'Accepted',
            203 => 'Non-Authoritative Information',
            204 => 'No Content',
            205 => 'Reset Content',
            206 => 'Partial Content',
            300 => 'Multiple Choices',
            301 => 'Moved Permanently',
            302 => 'Found',
            303 => 'See Other',
            304 => 'Not Modified',
            305 => 'Use Proxy',
            306 => '(Unused)',
            307 => 'Temporary Redirect',
            400 => 'Bad Request',
            401 => 'Unauthorized',
            402 => 'Payment Required',
            403 => 'Forbidden',
            404 => 'Not Found',
            405 => 'Method Not Allowed',
            406 => 'Not Acceptable',
            407 => 'Proxy Authentication Required',
            408 => 'Request Timeout',
            409 => 'Conflict',
            410 => 'Gone',
            411 => 'Length Required',
            412 => 'Precondition Failed',
            413 => 'Request Entity Too Large',
            414 => 'Request-URI Too Long',
            415 => 'Unsupported Media Type',
            416 => 'Requested Range Not Satisfiable',
            417 => 'Expectation Failed',
            500 => 'Internal Server Error',
            501 => 'Not Implemented',
            502 => 'Bad Gateway',
            503 => 'Service Unavailable',
            504 => 'Gateway Timeout',
            505 => 'HTTP Version Not Supported'
        );

        return (isset($codes[$status])) ? $codes[$status] : '';
    }

    // Helper method to send a HTTP response code/message
    function sendResponse($status = 200, $body = '', $content_type = 'text/html')
    {
        $status_header = 'HTTP/1.1 ' . $status . ' ' . $this->getStatusCodeMessage($status);
        header($status_header);
        header('Content-type: ' . $content_type);
        echo $body;
    }

   function test()
   {
        echo " Hello, PHP! ";
        $id = 0;
        $name = "Silly";
        $stmt = $this->db->prepare('SELECT id FROM player_data WHERE id=?');
        $stmt->bind_param("i", $id);
        echo 'getting '.$id;
        $stmt->execute();
        $stmt->bind_result($id1);
        while ($stmt->fetch())
        {
            break;
        }
        if ($id1 == null)
        {
          echo ' no data found for id '.$id1.' inserting ';
          $stmt = $this->db->prepare("INSERT INTO player_data (id, name) VALUES (?, ?)");
          $stmt->bind_param("is", $id, $name);
          $stmt->execute();
          $stmt->close();
        }
        else
        {
          echo ' id exists ';
        }

        $stmt->close();
   }

   function process()
   {
     if (isset($_POST["api"]))
     {
       if ($_POST["api"] == "init")
       {
         $this->init();
       }
       else if ($_POST["api"] == "add_tokens")
       {
         $this->addTokens();
       }
       else
       {
         $this->sendResponse(400, 'Missing API');
       }
     }
     else
     {
       $this->sendResponse(400, 'API not set');
     }
   }

   function addTokens()
   {
     if (isset($_POST["key_id"]) && isset($_POST["key_name"]))
     {
         $id = $_POST["key_id"];
         $name = $_POST["key_name"];
         $delTokens = $_POST["key_add_tokens"];
         $stmt = $this->db->prepare('SELECT id, tokens, xp FROM player_data WHERE id=?');
         $stmt->bind_param("i", $id);
         $stmt->execute();
         $stmt->bind_result($id1, $tokens1, $xp1);
         while ($stmt->fetch())
         {
             break;
         }
         $stmt->close();
         $this->db->query("UPDATE player_data SET tokens=$tokens1+$delTokens WHERE id=$id");
         $this->db->commit();
      }
      else
      {
        $this->sendResponse(400, 'Invalid code');
      }
   }

   function init()
   {
     if (isset($_POST["key_id"]) && isset($_POST["key_name"]))
     {
       $id = $_POST["key_id"];
       $name = $_POST["key_name"];

       $stmt = $this->db->prepare('SELECT id, tokens, xp FROM player_data WHERE id=?');
       $stmt->bind_param("i", $id);
       $stmt->execute();
       $stmt->bind_result($id1, $tokens1, $xp1);
       while ($stmt->fetch())
       {
           break;
       }
       $stmt->close();

       //if id not exists, insert
       if ($id1 == null)
       {
         $stmt = $this->db->prepare("INSERT INTO player_data (id, name) VALUES (?, ?)");
         $stmt->bind_param("is", $id, $name);
         $stmt->execute();
         $stmt->close();

         $id1 = $id;
         $tokens1 = 2000;
         $xp1 = 0;
       }
        $result = array(
           "id" => $id1,
           "tokens" => $tokens1,
           "xp" => $xp1,
         );
         $this->sendResponse(200, json_encode($result));
     }
     else
     {
       $this->sendResponse(400, 'Invalid code');
     }
   }
}


// This is the first thing that gets called when this page is loaded
// Creates a new instance of the Main class and calls the test method
$api = new Main;
$api->process();

?>

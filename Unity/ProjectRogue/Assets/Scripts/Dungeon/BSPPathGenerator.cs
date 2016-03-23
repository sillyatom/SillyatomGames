using System.Collections.Generic;
using UnityEngine;

public class BSPPathGenerator : IPathGenerator
{
    public BSPPathGenerator()
    {

    }

    void ConnectVertically(BSPNode connection, BSPNode room, ExitConfig config)
    {
        Vector3 vec1;
        Vector3 vec2;

        if (connection.rect.width < room.rect.width)
        {
            vec1 = (new Vector3(connection.rect.center.x, 5, connection.rect.center.y));
            vec2 = (new Vector3(connection.rect.center.x, 5, room.rect.center.y));
        }
        else
        {
            vec1 = (new Vector3(room.rect.center.x, 5, room.rect.center.y));
            vec2 = (new Vector3(room.rect.center.x, 5, connection.rect.center.y));
        }

        Vector3 intersectionPt = GetLineIntersection(config, room.rect, vec1, vec2);
        room.connectingPositions.Add(vec1);
        room.connectingPositions.Add(vec2);
        room.exitPositions.Add(intersectionPt);
        connection.exitPositions.Add(intersectionPt);
    }

    void ConnectHorizontally(BSPNode connection, BSPNode room, ExitConfig config)
    {
        Vector3 vec1;
        Vector3 vec2;

        if (connection.rect.height < room.rect.height)
        {
            vec1 = (new Vector3(connection.rect.center.x, 5, connection.rect.center.y));
            vec2 = (new Vector3(room.rect.center.x, 5, connection.rect.center.y));
        }
        else
        {
            vec1 = (new Vector3(connection.rect.center.x, 5, room.rect.center.y));
            vec2 = (new Vector3(room.rect.center.x, 5, room.rect.center.y));
        }

        Vector3 intersectionPt = GetLineIntersection(config, room.rect, vec1, vec2);
        room.connectingPositions.Add(vec1);
        room.connectingPositions.Add(vec2);
        connection.exitPositions.Add(intersectionPt);
        room.exitPositions.Add(intersectionPt);
    }

    public void UpdatePathData(List<BSPNode> rooms)
    {
        foreach (var room in rooms)
        {
            foreach (var connection in room.connectedNodes)
            {
                if (IsConnectionOnLeft(connection.rect, room.rect))
                {
                    connection.exitConfig.Add(ExitConfig.RIGHT);
                    room.exitConfig.Add(ExitConfig.LEFT);

                    if (IsWithin(ExitConfig.LEFT, connection.rect, room.rect))
                    {
                        ConnectHorizontally(connection, room, ExitConfig.LEFT);
                    }
                    else
                    {
                        Vector3 intersectionPt = GetLineIntersection(ExitConfig.LEFT, connection.rect, room.rect);
                        room.connectingPositions.Add(new Vector3(connection.rect.center.x, 5, connection.rect.center.y));
                        room.connectingPositions.Add(new Vector3(room.rect.center.x, 5, room.rect.center.y));
        				connection.exitPositions.Add(intersectionPt);
                        room.exitPositions.Add(intersectionPt);
                    }
                }
                else if (IsConnectionOnRight(connection.rect, room.rect))
                {
                    connection.exitConfig.Add(ExitConfig.LEFT);
                    room.exitConfig.Add(ExitConfig.RIGHT);

                    if (IsWithin(ExitConfig.RIGHT, connection.rect, room.rect))
                    {
                        ConnectHorizontally(connection, room, ExitConfig.RIGHT);
                    }
                    else
                    {
                        Vector3 intersectionPt = GetLineIntersection(ExitConfig.RIGHT, connection.rect, room.rect);
                        room.connectingPositions.Add(new Vector3(connection.rect.center.x, 5, connection.rect.center.y));
                        room.connectingPositions.Add(new Vector3(room.rect.center.x, 5, room.rect.center.y));
        				connection.exitPositions.Add(intersectionPt);
                        room.exitPositions.Add(intersectionPt);
                    }
                }
                else if (IsConnectionOnTop(connection.rect, room.rect))
                {
                    connection.exitConfig.Add(ExitConfig.BOTTOM);
                    room.exitConfig.Add(ExitConfig.TOP);
                    if (IsWithin(ExitConfig.TOP, connection.rect, room.rect))
                    {
                        ConnectVertically(connection, room, ExitConfig.TOP);
                    }
                    else
                    {
                        Vector3 intersectionPt = GetLineIntersection(ExitConfig.TOP, connection.rect, room.rect);
                        room.connectingPositions.Add(new Vector3(connection.rect.center.x, 5, connection.rect.center.y));
                        room.connectingPositions.Add(new Vector3(room.rect.center.x, 5, room.rect.center.y));
						room.exitPositions.Add(intersectionPt);
						connection.exitPositions.Add(intersectionPt);
                    }
                }
                else if (IsConnectionOnBottom(connection.rect, room.rect))
                {
                    connection.exitConfig.Add(ExitConfig.TOP);
                    room.exitConfig.Add(ExitConfig.BOTTOM);
                    if (IsWithin(ExitConfig.BOTTOM, connection.rect, room.rect))
                    {
                        ConnectVertically(connection, room, ExitConfig.BOTTOM);
                    }
                    else
                    {
                        Vector3 intersectionPt = GetLineIntersection(ExitConfig.BOTTOM, connection.rect, room.rect);
                        room.connectingPositions.Add(new Vector3(connection.rect.center.x, 5, connection.rect.center.y));
                        room.connectingPositions.Add(new Vector3(room.rect.center.x, 5, room.rect.center.y));
                        room.exitPositions.Add(intersectionPt);
						connection.exitPositions.Add(intersectionPt);
                    }
                }
            }
        }
    }

    Vector3 GetInterceptPosition(float b1, float b2, float slope1, float slope2)
    {
        float xPos = (b2 - b1) / (slope1 - slope2);
        float yPos = (slope1 * xPos) + b1;

        return new Vector3(xPos, 5, yPos);
    }

    Vector3 GetLineIntersection(ExitConfig direction, CustomRect room, Vector3 connectionStart, Vector3 connectionEnd)
    {
        //just a crack, not a proper approach
        float slope1 = GetSlope(connectionStart, connectionEnd);
        float b1 = connectionStart.z - (slope1 * connectionStart.x);
        float b2 = 0; float slope2 = 0;

        if (direction == ExitConfig.LEFT)
        {
            slope2 = (room.y - room.yMax) / (room.x - room.x + 1);
            b2 = room.y - (slope2 * room.x);
        }
        else if (direction == ExitConfig.RIGHT)
        {
            slope2 = (room.y - room.yMax) / (room.xMax - room.xMax + 1);
            b2 = room.y - (slope2 * room.xMax);
        }
        else if (direction == ExitConfig.TOP)
        {
            slope2 = (room.yMax - room.yMax + 1) / (room.x - room.xMax);
            b2 = room.yMax - (slope2 * room.xMax);
        }
        else if (direction == ExitConfig.BOTTOM)
        {
            slope2 = (room.y - room.y + 1) / (room.x - room.xMax);
            b2 = room.y - (slope2 * room.xMax);
        }
        return GetInterceptPosition(b1, b2, slope1, slope2);
    }

    float GetSlope(Vector3 connectionStart, Vector3 connectionEnd)
    {
        /*
        slope (m) = change in y / change in x
        */
        float y = (connectionStart.z - connectionEnd.z);
        float x = (connectionStart.x - connectionEnd.x);
        float slope = ((y == 0) ? 1 : y) / ((x == 0) ? 1 : x);
        return slope;
    }

    Vector3 GetLineIntersection(ExitConfig direction, CustomRect connection, CustomRect room)
    {
        /*
        slope (m) = change in y / change in x
        */
        float y = (connection.center.y - room.center.y);
        float x = (connection.center.x - room.center.x);
        float slope1 = ((y == 0) ? 1 : y) / ((x == 0) ? 1 : x);
        float slope2 = 0;
        /*
            y = mx + b

            What is this 'b'? Well, the line must cross the y-axis at the point 
            (0,b). To find b, we can substitute the values at some point on the 
            line
        */
        float b1 = connection.center.y - (slope1 * connection.center.x);
        float b2 = 0;

        if (direction == ExitConfig.LEFT)
        {
            slope2 = (room.y - room.yMax) / (room.x - room.x + 1);
            b2 = room.y - (slope2 * room.x);
        }
        else if (direction == ExitConfig.RIGHT)
        {
            slope2 = (room.y - room.yMax) / (room.xMax - room.xMax + 1);
            b2 = room.y - (slope2 * room.xMax);
        }
        else if (direction == ExitConfig.TOP)
        {
            slope2 = (room.yMax - room.yMax + 1) / (room.x - room.xMax);
            b2 = room.yMax - (slope2 * room.xMax);
        }
        else if (direction == ExitConfig.BOTTOM)
        {
            slope2 = (room.y - room.y + 1) / (room.x - room.xMax);
            b2 = room.y - (slope2 * room.xMax);
        }

        /*
        y - y = m1*x + b1  - m2*x - b2
        x * (m1 - m2) + b1 - b2 = 0;
        
        To find X
        x = b2 - b1 / m1 - m2
        
        To find Y
        y = mx + b
        */

        float xPos = (b2 - b1) / (slope1 - slope2);
        float yPos = (slope1 * xPos) + b1;

        return new Vector3(xPos, 5, yPos);
    }

    bool IsWithin(ExitConfig direction, CustomRect connection, CustomRect room)
    {
        if (direction == ExitConfig.LEFT || direction == ExitConfig.RIGHT)
        {
            if (
                (room.y >= connection.y && room.yMax <= connection.yMax)
                || (connection.y >= room.y && connection.yMax <= room.yMax)
                )
            {
                return true;
            }
        }
        else
        {
            if (
                    (room.x >= connection.x && room.xMax <= connection.xMax)
                    || (connection.x >= room.x && connection.xMax <= room.xMax)
                )
            {
                return true;
            }
        }
        return false;
    }

    bool IsConnectionOnLeft(CustomRect connection, CustomRect room)
    {
        if (connection.xMax <= room.x)
        {
            return true;
        }
        return false;
    }

    bool IsConnectionOnRight(CustomRect connection, CustomRect room)
    {
        if (connection.x >= room.xMax)
        {
            return true;
        }
        return false;
    }

    bool IsConnectionOnTop(CustomRect connection, CustomRect room)
    {
        if (connection.y >= room.yMax)
        {
            return true;
        }
        return false;
    }

    bool IsConnectionOnBottom(CustomRect connection, CustomRect room)
    {
        if (connection.yMax <= room.y)
        {
            return true;
        }
        return false;
    }
}

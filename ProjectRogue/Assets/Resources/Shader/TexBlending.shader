Shader "Custom/TexBlending" 
{
	Properties 
	{
		_Color ("Color", Color) = (1,1,1,1)
		_MainTex ("Base Albedo (RGB)", 2D) = "white" {}
		_ExploreTex ("Explore Albedo (RGB)", 2D) = "white" {}
		_BlendAmount ("Blend Amount", Range(0, 1)) = 0.5
	}
	SubShader 
	{
		Tags 
		{ 
			"RenderType"="Opaque" 
		}
		
		Blend SrcAlpha OneMinusSrcAlpha
		
		pass
		{
			CGPROGRAM
			// Physically based Standard lighting model, and enable shadows on all light types
			#pragma fragmentoption ARB_precision_hint_fastest
			#pragma vertex vert
			#pragma fragment frag
			#include "UnityCG.cginc"
	
			// Use shader model 3.0 target, to get nicer looking lighting
			#pragma target 3.0
	
			uniform sampler2D _MainTex;
			uniform sampler2D _ExploreTex;
			uniform float _BlendAmount;
			
			struct vertexInput
			{
				float4 vertex : POSITION;
				float4 texCoord : TEXCOORD0;
			};
			
			struct fragmentInput
			{
				float4 pos : SV_POSITION;
				half2 uv : TEXCOORD0;
			};
			
			fragmentInput vert(vertexInput i)
			{
				fragmentInput fragOut;
				fragOut.pos = mul( UNITY_MATRIX_MVP, i.vertex);
				fragOut.uv = i.texCoord;
				return fragOut;
			}
			
			half4 frag(fragmentInput i) : COLOR
			{
				return fixed4(lerp(tex2D (_MainTex, i.uv), tex2D(_ExploreTex, i.uv), _BlendAmount));
			}
			
			ENDCG
		}
	}
	FallBack "VertexLit"
}

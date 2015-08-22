Shader "Custom/VertexAlphaFow"
{
	Properties
	{
	}
	SubShader
	{
		Tags{ "Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" }
		Blend SrcAlpha OneMinusSrcAlpha
		pass
		{
			CGPROGRAM
			#pragma fragmentoption ARB_precision_hint_fastest
			#pragma vertex vert
			#pragma fragment frag
			#include "UnityCG.cginc"

			#pragma target 3.0

			struct Vertex
			{
				float4 vertex : POSITION;
				float4 color : COLOR;
				float4 texCoord : TEXCOORD0;
			};

			struct Fragment
			{
				float4 pos : SV_POSITION;
				half4 color : COLOR;
				half2 uv : TEXCOORD0;
			};

			Fragment vert(Vertex i)
			{
				Fragment fragOut;
				fragOut.color = i.color;
				fragOut.pos = mul(UNITY_MATRIX_MVP, i.vertex);
				fragOut.uv = i.texCoord;
				return fragOut;
			}

			half4 frag(Fragment i) : COLOR
			{
				return half4(i.color.r, i.color.g, i.color.b, i.color.a);
			}

			ENDCG
		}
	}
		FallBack "VertexLit"
}

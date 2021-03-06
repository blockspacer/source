#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Tps_3_0 /FhInclude/ShadowPS.h /VnShadowPSData Source/ShadowPS.hlsl
//    /O3
//
//
// Parameters:
//
//   float3 LightPos[8];
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   LightPos     c40      1
//

    ps_3_0
    dcl_texcoord v0.xyz
    add r0.xyz, -c40, v0
    dp3 oC0, r0, r0

// approximately 2 instruction slots used
#endif

const BYTE ShadowPSData[] =
{
      0,   3, 255, 255, 254, 255, 
     34,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  83,   0, 
      0,   0,   0,   3, 255, 255, 
      1,   0,   0,   0,  28,   0, 
      0,   0,   0, 129,   0,   0, 
     76,   0,   0,   0,  48,   0, 
      0,   0,   2,   0,  40,   0, 
      1,   0, 162,   0,  60,   0, 
      0,   0,   0,   0,   0,   0, 
     76, 105, 103, 104, 116,  80, 
    111, 115,   0, 171, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      3,   0,   8,   0,   0,   0, 
      0,   0,   0,   0, 112, 115, 
     95,  51,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  57,  46,  57,  53,  50, 
     46,  51,  49,  49,  49,   0, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   0,   0,   7, 144, 
      2,   0,   0,   3,   0,   0, 
      7, 128,  40,   0, 228, 161, 
      0,   0, 228, 144,   8,   0, 
      0,   3,   0,   8,  15, 128, 
      0,   0, 228, 128,   0,   0, 
    228, 128, 255, 255,   0,   0
};

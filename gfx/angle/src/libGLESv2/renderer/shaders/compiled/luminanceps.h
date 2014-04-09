#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /E luminanceps /T ps_2_0 /Fh compiled/luminanceps.h Blit.ps
//
//
// Parameters:
//
//   float4 mode;
//   sampler2D tex;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   mode         c0       1
//   tex          s0       1
//

    ps_2_0
    dcl t0.xy
    dcl_2d s0
    texld r0, t0, s0
    mad r1.w, r0.w, c0.x, c0.y
    mov r1.xyz, r0.x
    mov oC0, r1

// approximately 4 instruction slots used (1 texture, 3 arithmetic)
#endif

const BYTE g_ps20_luminanceps[] =
{
      0,   2, 255, 255, 254, 255, 
     43,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 119,   0, 
      0,   0,   0,   2, 255, 255, 
      2,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
    112,   0,   0,   0,  68,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   0,   0,  76,   0, 
      0,   0,   0,   0,   0,   0, 
     92,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
     96,   0,   0,   0,   0,   0, 
      0,   0, 109, 111, 100, 101, 
      0, 171, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 116, 101, 120,   0, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 112, 115, 
     95,  50,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  57,  46,  57,  53,  50, 
     46,  51,  49,  49,  49,   0, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,   3, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   0,   8,  15, 160, 
     66,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 176, 
      0,   8, 228, 160,   4,   0, 
      0,   4,   1,   0,   8, 128, 
      0,   0, 255, 128,   0,   0, 
      0, 160,   0,   0,  85, 160, 
      1,   0,   0,   2,   1,   0, 
      7, 128,   0,   0,   0, 128, 
      1,   0,   0,   2,   0,   8, 
     15, 128,   1,   0, 228, 128, 
    255, 255,   0,   0
};

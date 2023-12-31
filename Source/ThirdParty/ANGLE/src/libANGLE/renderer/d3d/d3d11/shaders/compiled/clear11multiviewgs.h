#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float   xyzw
// TEXCOORD                 0   x           1     NONE    uint   x   
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Position              0   xyzw        0      POS   float   xyzw
// SV_RenderTargetArrayIndex     0   x           1  RTINDEX    uint   x   
//
gs_4_0
dcl_input_siv v[3][0].xyzw, position
dcl_input v[3][1].x
dcl_temps 1
dcl_inputprimitive triangle 
dcl_outputtopology trianglestrip 
dcl_output_siv o0.xyzw, position
dcl_output_siv o1.x, rendertarget_array_index
dcl_maxout 3
mov r0.x, l(0)
loop 
  ige r0.y, r0.x, l(3)
  breakc_nz r0.y
  mov o0.xyzw, v[r0.x + 0][0].xyzw
  mov o1.x, v[r0.x + 0][1].x
  emit 
  iadd r0.x, r0.x, l(1)
endloop 
cut 
ret 
// Approximately 11 instruction slots used
#endif

const BYTE g_GS_Multiview_Clear[] = {
    68,  88,  66,  67,  110, 37,  141, 207, 15,  59,  27,  66,  207, 215, 205, 198, 147, 31,  42,
    22,  1,   0,   0,   0,   204, 2,   0,   0,   5,   0,   0,   0,   52,  0,   0,   0,   128, 0,
    0,   0,   216, 0,   0,   0,   64,  1,   0,   0,   80,  2,   0,   0,   82,  68,  69,  70,  68,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   28,  0,   0,   0,
    0,   4,   83,  71,  0,   1,   0,   0,   28,  0,   0,   0,   77,  105, 99,  114, 111, 115, 111,
    102, 116, 32,  40,  82,  41,  32,  72,  76,  83,  76,  32,  83,  104, 97,  100, 101, 114, 32,
    67,  111, 109, 112, 105, 108, 101, 114, 32,  49,  48,  46,  49,  0,   73,  83,  71,  78,  80,
    0,   0,   0,   2,   0,   0,   0,   8,   0,   0,   0,   56,  0,   0,   0,   0,   0,   0,   0,
    1,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   15,  15,  0,   0,   68,  0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   1,   0,   0,   0,   1,   1,
    0,   0,   83,  86,  95,  80,  111, 115, 105, 116, 105, 111, 110, 0,   84,  69,  88,  67,  79,
    79,  82,  68,  0,   171, 171, 171, 79,  83,  71,  78,  96,  0,   0,   0,   2,   0,   0,   0,
    8,   0,   0,   0,   56,  0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   3,   0,   0,
    0,   0,   0,   0,   0,   15,  0,   0,   0,   68,  0,   0,   0,   0,   0,   0,   0,   4,   0,
    0,   0,   1,   0,   0,   0,   1,   0,   0,   0,   1,   14,  0,   0,   83,  86,  95,  80,  111,
    115, 105, 116, 105, 111, 110, 0,   83,  86,  95,  82,  101, 110, 100, 101, 114, 84,  97,  114,
    103, 101, 116, 65,  114, 114, 97,  121, 73,  110, 100, 101, 120, 0,   171, 171, 83,  72,  68,
    82,  8,   1,   0,   0,   64,  0,   2,   0,   66,  0,   0,   0,   97,  0,   0,   5,   242, 16,
    32,  0,   3,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   95,  0,   0,   4,   18,
    16,  32,  0,   3,   0,   0,   0,   1,   0,   0,   0,   104, 0,   0,   2,   1,   0,   0,   0,
    93,  24,  0,   1,   92,  40,  0,   1,   103, 0,   0,   4,   242, 32,  16,  0,   0,   0,   0,
    0,   1,   0,   0,   0,   103, 0,   0,   4,   18,  32,  16,  0,   1,   0,   0,   0,   4,   0,
    0,   0,   94,  0,   0,   2,   3,   0,   0,   0,   54,  0,   0,   5,   18,  0,   16,  0,   0,
    0,   0,   0,   1,   64,  0,   0,   0,   0,   0,   0,   48,  0,   0,   1,   33,  0,   0,   7,
    34,  0,   16,  0,   0,   0,   0,   0,   10,  0,   16,  0,   0,   0,   0,   0,   1,   64,  0,
    0,   3,   0,   0,   0,   3,   0,   4,   3,   26,  0,   16,  0,   0,   0,   0,   0,   54,  0,
    0,   7,   242, 32,  16,  0,   0,   0,   0,   0,   70,  30,  160, 0,   10,  0,   16,  0,   0,
    0,   0,   0,   0,   0,   0,   0,   54,  0,   0,   7,   18,  32,  16,  0,   1,   0,   0,   0,
    10,  16,  160, 0,   10,  0,   16,  0,   0,   0,   0,   0,   1,   0,   0,   0,   19,  0,   0,
    1,   30,  0,   0,   7,   18,  0,   16,  0,   0,   0,   0,   0,   10,  0,   16,  0,   0,   0,
    0,   0,   1,   64,  0,   0,   1,   0,   0,   0,   22,  0,   0,   1,   9,   0,   0,   1,   62,
    0,   0,   1,   83,  84,  65,  84,  116, 0,   0,   0,   11,  0,   0,   0,   1,   0,   0,   0,
    0,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,
    0,   1,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   1,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   5,   0,   0,   0,   3,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0};

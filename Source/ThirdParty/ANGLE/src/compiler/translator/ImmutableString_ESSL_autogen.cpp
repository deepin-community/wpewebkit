// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_ESSL_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int mangledkT1[] = {2654, 1355, 733,  887,  2261, 1049, 1564, 791,  2139, 380,
                              3017, 2187, 2669, 1866, 2605, 90,   750,  650,  1030, 463,
                              34,   765,  914,  2615, 1055, 1690, 79,   2624, 450,  1462,
                              2401, 1022, 640,  2600, 1834, 1518, 178,  3021, 635,  830};
constexpr int mangledkT2[] = {2970, 1063, 1914, 2957, 137,  2151, 2727, 1324, 707,  578,
                              2803, 826,  1009, 2839, 1693, 71,   2259, 1143, 1545, 110,
                              141,  800,  252,  2052, 1985, 2680, 2101, 2925, 2554, 2528,
                              960,  319,  257,  1535, 2667, 648,  1732, 2587, 769,  2976};
constexpr int mangledkG[]  = {
    0,    0,    230,  1819, 0,    0,    0,    2440, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    2311, 0,    0,    1004, 0,    0,
    1525, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    2658, 0,    297,  0,
    0,    1006, 0,    0,    2190, 0,    0,    0,    0,    0,    0,    965,  0,    0,    0,    0,
    0,    0,    0,    0,    1250, 1890, 0,    2446, 1922, 0,    0,    0,    0,    1686, 2214, 0,
    0,    0,    0,    0,    1484, 0,    1871, 1037, 0,    185,  1823, 0,    0,    327,  0,    0,
    0,    0,    1932, 229,  297,  0,    0,    0,    0,    2337, 3083, 0,    694,  2954, 0,    0,
    286,  0,    0,    0,    0,    0,    2013, 0,    0,    1163, 2584, 2013, 0,    0,    0,    0,
    1321, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    2580,
    0,    0,    2560, 0,    0,    0,    2920, 1530, 0,    0,    0,    692,  538,  0,    716,  0,
    101,  0,    0,    420,  0,    0,    0,    0,    2949, 0,    2214, 2212, 0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    1405, 0,    0,    498,  0,    0,    0,    1315, 0,    0,
    0,    0,    0,    3019, 0,    0,    1946, 0,    0,    0,    0,    882,  93,   1480, 0,    2891,
    1810, 947,  0,    0,    150,  0,    123,  0,    1312, 2791, 0,    0,    34,   0,    0,    1590,
    0,    2746, 0,    0,    0,    2129, 2453, 0,    0,    1249, 525,  0,    1297, 1525, 0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1113, 0,    0,    459,
    0,    0,    0,    2326, 0,    2255, 0,    0,    0,    0,    880,  0,    0,    0,    0,    0,
    2978, 1167, 3008, 494,  0,    0,    0,    910,  0,    0,    0,    1026, 2516, 0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    665,  535,  0,    0,    0,    0,    2142, 0,    0,
    0,    457,  0,    3031, 0,    0,    878,  0,    0,    0,    2618, 0,    2373, 0,    0,    1652,
    0,    1132, 0,    0,    0,    0,    0,    1605, 0,    0,    0,    0,    0,    476,  2001, 360,
    0,    0,    0,    0,    0,    1276, 0,    0,    0,    0,    612,  1701, 3092, 2066, 0,    0,
    0,    691,  0,    2314, 0,    610,  0,    870,  0,    129,  0,    2182, 0,    791,  0,    0,
    1837, 0,    0,    0,    0,    0,    0,    0,    1637, 0,    0,    0,    0,    0,    0,    237,
    0,    462,  0,    0,    0,    735,  0,    794,  0,    0,    0,    0,    1159, 453,  934,  2910,
    0,    1080, 0,    2568, 873,  130,  0,    3025, 0,    0,    3022, 0,    0,    2889, 1415, 2466,
    1429, 315,  0,    2320, 0,    0,    0,    0,    1234, 1644, 64,   1350, 1256, 0,    0,    0,
    0,    1715, 0,    2068, 0,    0,    159,  0,    3066, 252,  0,    1099, 0,    0,    0,    811,
    926,  0,    0,    0,    0,    0,    3010, 785,  0,    0,    0,    0,    0,    0,    961,  1125,
    1129, 0,    0,    2223, 0,    0,    1385, 173,  0,    0,    0,    954,  2946, 0,    1060, 2764,
    0,    0,    1447, 0,    1579, 51,   0,    377,  0,    0,    0,    0,    0,    0,    1812, 0,
    0,    0,    0,    0,    833,  0,    0,    994,  0,    0,    2853, 0,    343,  0,    23,   0,
    0,    0,    0,    0,    1098, 1413, 0,    393,  0,    1299, 1735, 472,  0,    952,  149,  0,
    0,    1580, 2438, 0,    520,  0,    1398, 0,    0,    222,  0,    0,    0,    0,    0,    0,
    2975, 0,    0,    0,    0,    0,    0,    0,    0,    2691, 0,    0,    0,    2949, 1,    0,
    57,   0,    731,  661,  0,    1690, 2941, 0,    0,    0,    0,    0,    1154, 0,    0,    2786,
    0,    0,    241,  0,    1539, 0,    0,    0,    0,    0,    0,    0,    0,    38,   2181, 0,
    993,  761,  0,    0,    3011, 1471, 0,    2895, 2635, 1425, 1494, 0,    0,    1215, 0,    0,
    0,    0,    541,  1460, 0,    862,  944,  1466, 0,    1597, 0,    0,    0,    0,    0,    0,
    2685, 0,    0,    0,    0,    0,    0,    0,    441,  218,  0,    3,    0,    832,  0,    1545,
    0,    2279, 0,    1608, 0,    1470, 2112, 0,    1901, 0,    233,  0,    0,    2466, 2693, 0,
    0,    1462, 1181, 1721, 0,    0,    276,  0,    0,    0,    0,    2226, 1402, 0,    0,    0,
    0,    0,    0,    0,    0,    0,    1516, 0,    0,    0,    0,    2981, 2729, 1907, 1773, 2566,
    0,    0,    0,    215,  0,    0,    1917, 1455, 223,  2240, 0,    280,  0,    0,    186,  1513,
    0,    0,    0,    268,  0,    0,    406,  1437, 2743, 2031, 1803, 0,    1253, 0,    0,    624,
    623,  1305, 1423, 932,  0,    182,  0,    0,    536,  3086, 2153, 369,  2744, 0,    0,    0,
    0,    0,    764,  2562, 185,  686,  0,    397,  1406, 1432, 0,    1611, 0,    286,  0,    0,
    0,    2526, 2974, 0,    0,    0,    132,  0,    0,    0,    0,    1120, 859,  0,    0,    2153,
    2800, 0,    0,    1347, 1172, 2706, 891,  793,  0,    0,    844,  2360, 0,    0,    212,  2860,
    0,    785,  0,    1941, 0,    0,    0,    317,  0,    349,  0,    0,    0,    0,    767,  749,
    3100, 0,    0,    0,    0,    0,    1234, 0,    0,    0,    0,    0,    0,    871,  0,    0,
    1480, 0,    465,  2312, 3032, 280,  0,    3075, 2774, 611,  2723, 0,    363,  822,  0,    687,
    861,  2266, 0,    0,    0,    1455, 404,  1881, 0,    0,    0,    0,    2479, 0,    1079, 0,
    2041, 0,    82,   38,   2498, 0,    1254, 169,  0,    0,    0,    513,  0,    0,    178,  0,
    0,    2851, 1284, 42,   381,  0,    2087, 1501, 278,  0,    2289, 0,    2612, 1156, 0,    798,
    0,    2448, 1337, 0,    0,    1141, 0,    0,    3055, 0,    2425, 0,    1900, 248,  2779, 175,
    1193, 2668, 798,  699,  87,   0,    0,    2804, 2998, 3068, 2232, 0,    508,  2359, 0,    0,
    2700, 0,    2353, 0,    0,    0,    150,  147,  2791, 0,    0,    0,    812,  0,    0,    0,
    1042, 0,    0,    585,  0,    644,  941,  0,    1048, 45,   0,    0,    0,    0,    0,    0,
    0,    0,    0,    1904, 0,    0,    0,    0,    0,    2284, 373,  531,  0,    0,    0,    0,
    0,    2324, 2067, 0,    0,    0,    356,  188,  0,    482,  0,    207,  827,  0,    1662, 0,
    853,  0,    2876, 312,  1568, 1451, 0,    116,  0,    0,    2597, 0,    405,  1039, 0,    2221,
    940,  0,    641,  1399, 0,    0,    1101, 0,    0,    0,    953,  0,    140,  0,    0,    58,
    0,    2944, 661,  0,    1443, 0,    0,    0,    2191, 518,  283,  0,    0,    0,    1074, 2728,
    0,    2984, 20,   0,    0,    2178, 0,    0,    0,    0,    2507, 1139, 1294, 772,  535,  3096,
    65,   0,    2018, 114,  0,    2441, 1466, 0,    0,    1192, 0,    1388, 0,    0,    658,  1692,
    2945, 1093, 83,   0,    1460, 0,    0,    1942, 0,    276,  3096, 323,  697,  0,    2963, 0,
    0,    2693, 129,  2959, 0,    0,    1187, 1220, 0,    2522, 0,    2291, 974,  0,    0,    0,
    1258, 0,    0,    0,    3075, 0,    869,  1523, 2354, 0,    952,  147,  0,    2525, 2642, 0,
    0,    1551, 29,   0,    0,    3063, 1208, 426,  0,    1398, 1426, 0,    1370, 0,    0,    0,
    357,  0,    307,  3074, 0,    0,    2996, 551,  0,    0,    3086, 0,    966,  0,    0,    884,
    598,  0,    853,  410,  0,    0,    0,    1093, 0,    2032, 0,    0,    0,    2140, 0,    0,
    541,  0,    2491, 0,    1160, 808,  1033, 1438, 2035, 418,  0,    2112, 0,    0,    0,    2076,
    474,  2818, 2952, 2771, 0,    183,  302,  1787, 0,    0,    0,    0,    0,    972,  0,    0,
    544,  0,    0,    0,    0,    999,  690,  1766, 0,    793,  0,    1283, 193,  2089, 0,    1756,
    0,    2439, 0,    0,    0,    0,    429,  2381, 0,    2757, 0,    0,    0,    0,    0,    12,
    0,    0,    0,    626,  1642, 0,    3082, 0,    973,  0,    1543, 978,  36,   0,    2723, 2007,
    0,    0,    0,    0,    2812, 0,    0,    289,  0,    248,  0,    0,    0,    0,    1523, 456,
    609,  895,  2582, 0,    0,    0,    0,    0,    0,    49,   885,  992,  3004, 954,  1451, 3082,
    0,    542,  1612, 0,    0,    0,    1830, 2899, 0,    0,    0,    1409, 0,    0,    1655, 0,
    0,    0,    2585, 1109, 0,    0,    993,  723,  0,    0,    0,    0,    0,    0,    271,  0,
    0,    8,    1354, 0,    0,    420,  2853, 1499, 0,    1463, 2166, 2302, 0,    38,   1332, 1540,
    3050, 930,  378,  1676, 0,    0,    0,    1787, 0,    2369, 2374, 0,    0,    0,    0,    287,
    0,    2541, 1584, 0,    0,    3101, 0,    938,  0,    0,    2185, 1146, 73,   0,    2780, 610,
    3075, 1866, 0,    0,    1518, 1658, 801,  346,  1268, 0,    0,    0,    2461, 442,  0,    0,
    1152, 1089, 0,    1492, 0,    0,    560,  0,    0,    579,  0,    0,    0,    1462, 705,  0,
    0,    1111, 1702, 672,  0,    203,  1781, 464,  0,    1090, 1516, 0,    0,    0,    559,  1593,
    2678, 0,    0,    871,  0,    503,  1105, 2382, 904,  0,    495,  628,  0,    0,    0,    0,
    0,    0,    1456, 338,  0,    0,    373,  0,    0,    3020, 1187, 2863, 317,  0,    1260, 0,
    0,    370,  0,    0,    155,  1173, 362,  3000, 1496, 0,    2811, 774,  243,  73,   0,    0,
    0,    1359, 2471, 1892, 0,    1220, 0,    1029, 0,    224,  519,  934,  0,    847,  2494, 271,
    1538, 1262, 478,  0,    2785, 0,    2579, 0,    1458, 1567, 1844, 688,  108,  389,  0,    0,
    0,    1750, 351,  0,    86,   3039, 0,    2673, 0,    0,    1927, 0,    0,    173,  72,   1484,
    0,    0,    603,  0,    0,    1374, 0,    0,    1659, 2534, 1150, 0,    549,  1413, 0,    1410,
    585,  954,  0,    2043, 1115, 0,    32,   2802, 201,  955,  734,  1200, 0,    1574, 0,    0,
    1270, 0,    1350, 2915, 329,  741,  138,  0,    0,    0,    117,  1158, 582,  0,    1167, 164,
    0,    63,   1004, 0,    0,    0,    0,    0,    2539, 514,  1791, 161,  231,  577,  710,  840,
    1260, 0,    81,   0,    0,    0,    0,    0,    0,    645,  1475, 1730, 1662, 674,  0,    520,
    1072, 189,  2504, 0,    1348, 1680, 746,  0,    0,    0,    2365, 499,  0,    0,    1098, 0,
    2030, 640,  46,   2332, 1182, 2665, 0,    0,    0,    0,    587,  0,    0,    2586, 0,    1209,
    708,  0,    0,    2678, 0,    0,    0,    0,    0,    860,  0,    0,    469,  2588, 891,  0,
    0,    0,    719,  0,    3010, 0,    0,    0,    2750, 2276, 369,  34,   0,    549,  267,  0,
    986,  0,    199,  2962, 0,    566,  0,    1636, 0,    166,  1232, 2584, 0,    177,  0,    751,
    2162, 0,    0,    737,  0,    0,    0,    2812, 0,    2981, 0,    1497, 321,  1083, 0,    2453,
    564,  848,  773,  0,    638,  0,    105,  2665, 0,    0,    0,    0,    472,  1377, 0,    0,
    133,  0,    560,  753,  0,    400,  2344, 0,    0,    761,  373,  0,    0,    0,    0,    0,
    1953, 0,    700,  1157, 501,  0,    1366, 600,  1397, 0,    1393, 0,    0,    1454, 0,    141,
    0,    0,    0,    1074, 0,    281,  0,    0,    0,    91,   1291, 0,    3015, 0,    1147, 0,
    3019, 0,    192,  2637, 1635, 0,    0,    3095, 609,  1273, 183,  2430, 1470, 878,  2483, 134,
    522,  0,    0,    1287, 1438, 0,    2585, 1382, 1446, 0,    0,    1619, 0,    0,    0,    2795,
    0,    0,    513,  791,  0,    2069, 1112, 906,  2235, 1600, 1087, 0,    73,   294,  0,    791,
    468,  0,    2327, 144,  0,    0,    518,  1394, 383,  767,  2572, 0,    2726, 2553, 278,  0,
    1284, 698,  0,    0,    588,  1633, 1616, 0,    0,    1537, 1421, 0,    709,  1467, 2272, 741,
    0,    601,  2915, 0,    1042, 0,    0,    787,  2913, 1025, 0,    2227, 0,    653,  0,    0,
    0,    2024, 0,    212,  2998, 1286, 2923, 0,    1262, 0,    0,    2601, 0,    0,    1230, 273,
    1014, 0,    786,  0,    0,    0,    2492, 779,  0,    0,    0,    494,  2594, 3058, 0,    0,
    21,   1739, 418,  292,  690,  992,  177,  1284, 249,  132,  1478, 716,  665,  0,    0,    0,
    0,    0,    276,  484,  1297, 834,  1510, 884,  389,  0,    114,  0,    0,    2249, 0,    0,
    1130, 1189, 0,    356,  0,    127,  0,    74,   1185, 654,  0,    0,    2085, 2644, 2976, 1292,
    0,    84,   0,    16,   0,    489,  2482, 0,    297,  0,    1530, 2161, 1433, 2746, 0,    969,
    531,  766,  713,  0,    279,  1378, 128,  2273, 0,    2453, 0,    1497, 853,  0,    0,    0,
    0,    1509, 951,  0,    0,    0,    985,  1686, 1571, 1262, 0,    0,    580,  825,  834,  0,
    0,    1498, 2221, 760,  3008, 0,    0,    1116, 2543, 2828, 0,    61,   2019, 948,  0,    0,
    0,    437,  0,    553,  0,    821,  0,    1321, 2999, 2781, 0,    3075, 2167, 0,    0,    978,
    1223, 0,    796,  1215, 198,  1688, 611,  1015, 0,    1080, 0,    0,    2648, 1031, 1598, 1532,
    769,  2599, 682,  764,  2626, 0,    0,    0,    0,    0,    2202, 1164, 2644, 0,    66,   417,
    0,    0,    1414, 0,    557,  742,  825,  2627, 1149, 0,    0,    0,    240,  581,  0,    2477,
    564,  322,  0,    1399, 1167, 1926, 3071, 0,    2040, 0,    613,  876,  1590, 0,    0,    217,
    2977, 0,    0,    0,    0,    0,    0,    927,  967,  3074, 0,    0,    602,  965,  0,    1328,
    0,    0,    3073, 274,  0,    0,    1374, 1425, 0,    0,    394,  2419, 0,    2578, 70,   0,
    1619, 3056, 2669, 1069, 715,  1354, 0,    233,  0,    0,    483,  0,    0,    0,    2053, 145,
    1172, 3051, 2103, 2512, 154,  793,  2385, 0,    180,  461,  0,    1507, 2480, 1766, 0,    1171,
    1042, 487,  2810, 1626, 226,  892,  1126, 0,    2979, 1030, 2691, 172,  0,    903,  910,  0,
    789,  388,  0,    0,    0,    1259, 743,  2966, 0,    0,    627,  0,    2064, 154,  1140, 47,
    403,  947,  0,    935,  95,   2279, 0,    0,    319,  1213, 2863, 1484, 1360, 0,    1882, 506,
    0,    815,  0,    2330, 0,    1083, 0,    1526, 3110, 0,    1567, 0,    1417, 0,    0,    0,
    0,    1399, 0,    2681, 1324, 0,    1483, 2305, 2505, 942,  0,    222,  2814, 1263, 1238, 2000,
    1872, 0,    346,  0,    0,    2101, 0,    0,    526,  1349, 803,  443,  1321, 690,  120,  0,
    881,  1479, 34,   0,    1942, 1047, 2589, 0,    0,    353,  2602, 662,  706,  0,    0,    0,
    1420, 2430, 607,  0,    0,    2830, 0,    436,  971,  2900, 0,    0,    0,    0,    1476, 0,
    0,    0,    1333, 0,    1473, 1419, 841,  290,  0,    0,    0,    0,    0,    0,    0,    1004,
    1134, 1269, 854,  167,  0,    0,    0,    509,  374,  565,  666,  0,    1121, 1614, 1408, 2968,
    401,  1072, 1514, 0,    323,  182,  0,    0,    507,  0,    0,    0,    0,    0,    2242, 152,
    1049, 0,    1135, 250,  0,    0,    1332, 1636, 307,  273,  601,  1069, 409,  0,    439,  3076,
    0,    0,    0,    1623, 0,    753,  0,    0,    1982, 2583, 2923, 3027, 0,    0,    1898, 2262,
    127,  3107, 779,  74,   1978, 1564, 0,    0,    2344, 0,    1201, 326,  230,  0,    971,  293,
    1265, 266,  0,    1054, 0,    2018, 0,    2325, 0,    963,  0,    1141, 0,    0,    0,    462,
    0,    1452, 0,    298,  0,    814,  0,    2930, 0,    1538, 0,    66,   0,    1256, 1128, 0,
    1137, 0,    0,    1531, 305,  2901, 601,  764,  0,    0,    1314, 0,    832,  44,   0,    0,
    0,    1955, 756,  1226, 2324, 160,  0,    2480, 0,    637,  0,    430,  0,    0,    0,    0,
    581,  0,    206,  711,  645,  0,    674,  1085, 1400, 1596, 0,    620,  1384, 684,  0,    64,
    0,    1555, 464,  2350, 191,  0,    2479, 1536, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    2361, 0,    0,    331,  874,  1885, 1291, 2858, 634,  0,    0,    297,  816,  0,    1550,
    0,    353,  0,    383,  0,    987,  489,  1704, 1100, 0,    449,  1151, 2865, 2590, 1051, 981,
    2307, 830,  2627, 1264, 2475, 0,    0,    0,    0,    0,    0,    0,    1564, 327,  150,  1241,
    236,  2586, 0,    131,  211,  0,    2514, 0,    0,    884,  0,    1621, 2167, 0,    0,    1008,
    0,    272,  177,  558,  0,    1431, 0,    0,    0,    1236, 0,    1102, 2630, 88,   855,  1,
    313,  36,   896,  0,    570,  44,   0,    0,    332,  578,  0,    983,  450,  76,   0,    2164,
    0,    862,  1275, 0,    442,  2317, 1596, 137,  0,    90,   2942, 0,    2338, 1036, 313,  951,
    0,    762,  3043, 0,    0,    1526, 268,  2304, 0,    237,  1534, 0,    0,    119,  0,    2181,
    0,    208,  0,    862,  0,    3027, 1725, 447,  732,  243,  0,    144,  1232, 2889, 1594, 433,
    0,    1533, 0,    2585, 0,    476,  0,    865,  0,    513,  0,    435,  2766, 638,  0,    1515,
    2255, 1542, 1131, 0,    2904, 0,    0,    438,  138,  610,  0,    946,  0,    2383, 0,    0,
    425,  1110, 0,    1047, 0,    0,    1572, 1163, 631,  2634, 1069, 0,    0,    0,    284,  2659,
    14,   0,    1058, 0,    2995, 1527, 2618, 0,    957,  0,    1403, 1486, 334,  0,    213,  0,
    0,    0,    564,  1990, 2656, 0,    89,   0,    0,    0,    779,  2230, 3059, 1403, 189,  391,
    0,    937,  0,    1076, 0,    2593, 970,  629,  771,  1376, 0,    361,  1360, 770,  0,    0,
    0,    0,    190,  302,  1350, 817,  3090, 511,  782,  3093, 1573, 245,  831,  124,  105,  1319,
    1161, 0,    376,  0,    21,   861,  610,  0,    0,    380,  0,    0,    0,    0,    119,  0,
    2836, 1224, 1368, 3087, 0,    1633, 227,  0,    0,    488,  285,  583,  574,  2391, 53,   3033,
    722,  2740, 1520, 0,    700,  1389, 1364, 427,  342,  1343, 942,  1814, 569,  143,  352,  440,
    2249, 2647, 1868, 335,  23,   0,    0,    0,    1304, 866,  2800, 1205, 252,  923,  1180, 2479,
    79,   1362, 1349, 995,  0,    1203, 0,    836,  194,  0,    811,  0,    799,  961,  0,    888,
    0,    0,    502,  1594, 0,    41,   0,    202,  1507, 664,  2960, 1464, 461,  0,    3,    90,
    0,    661,  1035, 0,    215,  576,  1182, 2392, 526,  0,    96,   2547, 0,    1086, 633,  0,
    1348, 0,    1194, 0,    2919, 2312, 0,    1476, 590,  0,    0,    567,  416,  1821, 2774, 151,
    2963, 1726, 3102, 107,  1036, 345,  933,  289,  0,    902,  0,    0,    0,    0,    560,  1319,
    0,    0,    1023, 199,  0,    1990, 1670, 1197, 0,    977,  3096, 996,  0,    247,  1560, 0,
    0,    0,    0,    2114, 1404, 1344, 386,  648,  2598, 0,    1417, 702,  0,    617,  1617, 321,
    0,    553,  863,  421,  219,  2667, 225,  1127, 0,    363,  470,  206,  0,    265,  2264, 94,
    0,    2878, 0,    592,  2865, 554,  1629, 806,  1979, 949,  0,    2822, 0,    0,    0,    2610,
    0,    0,    37,   0,    0,    2180, 559,  0,    907,  0,    31,   0,    0,    0,    1114, 2012,
    2181, 168,  734,  0,    0,    0,    122,  223,  91,   624,  2931, 1450, 743,  2855, 0,    0,
    0,    1904, 1584, 0,    1525, 1281, 1535, 2919, 0,    0,    0,    3032, 0,    933,  2696, 0,
    0,    0,    340,  2339, 878,  0,    0,    0,    1325, 2847, 2383, 1024, 0,    1523, 1261, 56,
    262,  0,    730,  45,   887,  651,  1047, 2378, 1289, 0,    1338, 1046, 944,  0,    0,    0,
    0,    298,  0,    609,  109,  0,    0,    630,  2912, 0,    970,  0,    0,    2701, 2786, 0,
    0,    775,  0,    2346, 0,    0,    1428, 0,    1126, 100,  0,    0,    0,    1582, 1311, 2451,
    162,  0,    0,    0,    0,    0,    363,  177,  2621, 1476, 43,   712,  0,    0,    0,    0,
    1352, 2594, 2126, 0,    1308, 1356, 2478, 68,   1306, 863,  1219, 1818, 0,    56,   2750, 530,
    0,    2914, 1235, 1922, 784,  23,   533,  353,  1266, 0,    1036, 2288, 490,  2537, 317,  507,
    0,    0,    463,  559,  0,    0,    598,  386,  0,    1693, 1435, 202,  0,    957,  72,   1960,
    705,  2947, 2416, 0,    236,  1914, 1274, 415,  0,    0,    2675, 512,  0,    1424, 91,   0,
    697,  1218, 0,    1049, 276,  19,   2618, 63,   330,  0,    466,  0,    399,  0,    0,    0,
    795,  0,    2056, 0,    0,    1145, 0,    0,    1045};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 3113;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 40)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 3113;
}

constexpr int unmangledkT1[] = {89,  172, 195, 237, 188, 2,   289, 44,  45,  71,  309,
                                68,  200, 95,  123, 314, 266, 278, 154, 81,  182, 273,
                                247, 192, 24,  15,  232, 280, 271, 270, 202, 4};
constexpr int unmangledkT2[] = {287, 273, 227, 173, 284, 178, 142, 180, 52,  141, 174,
                                20,  232, 142, 195, 96,  83,  234, 127, 47,  98,  97,
                                32,  121, 19,  92,  41,  95,  112, 77,  136, 162};
constexpr int unmangledkG[]  = {
    0,   0,   0,   61,  0,   0,   0,   208, 0,   19,  0,   0,   0,   289, 0,   0,   223, 320, 0,
    0,   296, 113, 0,   0,   0,   0,   208, 24,  0,   272, 162, 164, 125, 321, 0,   289, 0,   0,
    124, 271, 133, 0,   0,   40,  0,   232, 216, 0,   0,   199, 0,   315, 144, 0,   84,  0,   34,
    0,   0,   0,   305, 154, 0,   63,  189, 305, 0,   0,   0,   143, 0,   84,  263, 0,   0,   223,
    314, 223, 0,   217, 0,   0,   104, 0,   0,   14,  148, 87,  0,   0,   48,  69,  0,   0,   283,
    0,   304, 0,   280, 0,   0,   303, 2,   52,  305, 112, 89,  0,   0,   0,   0,   117, 0,   0,
    0,   0,   0,   0,   0,   191, 0,   106, 261, 82,  175, 186, 0,   0,   198, 247, 24,  175, 261,
    0,   0,   0,   228, 0,   0,   0,   162, 0,   34,  116, 256, 0,   269, 50,  297, 0,   0,   0,
    267, 257, 308, 0,   0,   112, 189, 196, 0,   59,  0,   130, 20,  0,   0,   0,   0,   0,   135,
    0,   0,   0,   28,  325, 200, 61,  123, 86,  0,   211, 0,   69,  0,   149, 0,   49,  0,   0,
    35,  0,   160, 0,   202, 0,   0,   0,   49,  0,   0,   0,   287, 0,   0,   159, 102, 0,   27,
    201, 0,   0,   13,  0,   0,   180, 37,  248, 210, 149, 36,  203, 303, 170, 99,  75,  0,   166,
    115, 116, 197, 248, 0,   45,  0,   0,   126, 0,   0,   0,   0,   0,   217, 0,   312, 0,   162,
    0,   277, 280, 2,   0,   0,   215, 0,   0,   0,   123, 0,   0,   0,   189, 0,   0,   20,  0,
    0,   0,   66,  0,   57,  282, 118, 0,   0,   147, 32,  62,  21,  118, 141, 147, 0,   0,   0,
    0,   0,   94,  4,   0,   31,  11,  73,  176, 257, 111, 214, 298, 70,  53,  222, 262, 81,  120,
    177, 90,  92,  7,   108, 4,   289, 167, 29,  0,   43,  65,  172, 0,   147, 73,  254, 220, 253,
    91,  0,   0};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 326;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 32)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 326;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return MangledPerfectHash(data());
}

uint32_t ImmutableString::unmangledNameHash() const
{
    return UnmangledPerfectHash(data());
}

}  // namespace sh

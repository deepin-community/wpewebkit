// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
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

constexpr int mangledkT1[] = {4297, 2135, 882,  463,  243,  2797, 3474, 3964, 2601, 1875,
                              977,  230,  3052, 2743, 4229, 1730, 2644, 3296, 1182, 336,
                              949,  1697, 2772, 1125, 2239, 1764, 3151, 1665, 93,   3429,
                              1762, 4174, 833,  1912, 4086, 1737, 419,  306,  2685, 2708};
constexpr int mangledkT2[] = {3483, 3455, 685,  2048, 2816, 1230, 330,  75,   1032, 3165,
                              2990, 3268, 910,  860,  1581, 680,  267,  2903, 1702, 3372,
                              3371, 741,  844,  1930, 1402, 3565, 1630, 4278, 2298, 2973,
                              2727, 2058, 4172, 886,  2174, 3540, 831,  818,  938,  2318};
constexpr int mangledkG[]  = {
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    3568, 0,    0,    0,    0,    0,    0,    0,    0,    2246, 0,    0,
    0,    736,  0,    2030, 0,    0,    0,    0,    0,    0,    4298, 2841, 1181, 0,    3644, 0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    3296, 0,    0,
    0,    2053, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    3268, 0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    2131, 0,    0,    0,    0,    4073, 4151,
    0,    2091, 0,    0,    322,  0,    0,    0,    0,    0,    0,    0,    2583, 0,    3656, 0,
    0,    1778, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    894,  2171, 0,    0,
    1193, 0,    0,    0,    0,    0,    0,    0,    104,  0,    2064, 1378, 1282, 0,    3229, 0,
    0,    0,    0,    0,    0,    0,    1253, 0,    0,    0,    0,    1262, 0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    484,  1317, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    1674, 0,    0,    0,    0,    0,    1324, 0,    0,    0,    0,    0,    3710, 0,
    1338, 0,    1888, 0,    0,    2077, 1715, 3797, 1162, 0,    2147, 0,    1748, 0,    0,    0,
    1108, 2365, 0,    0,    0,    0,    0,    4305, 0,    0,    0,    0,    924,  870,  1168, 0,
    0,    0,    1280, 1867, 0,    4252, 0,    0,    0,    0,    0,    0,    0,    0,    2214, 0,
    0,    0,    0,    450,  2692, 0,    569,  0,    0,    1673, 0,    363,  0,    0,    0,    0,
    2000, 0,    1212, 0,    0,    0,    0,    0,    4343, 0,    521,  0,    0,    704,  0,    0,
    0,    1328, 0,    2851, 0,    0,    0,    0,    1018, 0,    0,    3386, 0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    1848, 4197, 0,    0,    0,    0,    436,  0,
    2805, 4198, 0,    0,    1253, 0,    0,    0,    4339, 0,    0,    0,    0,    0,    0,    0,
    3569, 767,  0,    536,  0,    0,    0,    0,    0,    804,  2103, 4332, 0,    0,    0,    2853,
    0,    0,    2991, 533,  2686, 4008, 0,    0,    0,    1903, 0,    0,    0,    591,  0,    0,
    3159, 0,    4186, 0,    0,    0,    0,    0,    0,    885,  0,    0,    0,    0,    0,    123,
    0,    0,    0,    1227, 852,  0,    514,  0,    0,    0,    4183, 0,    2194, 3040, 0,    3152,
    0,    0,    0,    0,    0,    320,  0,    333,  0,    0,    0,    1200, 234,  0,    0,    0,
    0,    0,    387,  0,    0,    0,    0,    2323, 0,    0,    0,    0,    0,    621,  0,    0,
    0,    0,    0,    771,  0,    792,  0,    0,    3011, 0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    3356, 902,  0,    0,    0,    0,    891,  1585, 0,    0,    2483, 693,
    3410, 0,    0,    128,  1082, 0,    1498, 100,  0,    0,    0,    0,    1437, 0,    0,    0,
    3309, 0,    0,    0,    0,    69,   1411, 196,  0,    0,    268,  0,    3904, 2406, 0,    0,
    126,  0,    0,    2540, 0,    1096, 0,    1963, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    2959, 0,    0,    3952, 0,    0,    0,    0,    397,  0,    0,    0,    0,    0,    4249,
    0,    792,  0,    0,    0,    503,  0,    0,    0,    0,    0,    0,    0,    2851, 0,    0,
    0,    0,    0,    1000, 479,  0,    0,    471,  342,  1196, 0,    948,  0,    0,    0,    1105,
    165,  0,    0,    2019, 509,  0,    0,    0,    0,    3580, 397,  2026, 0,    0,    0,    14,
    0,    1633, 0,    0,    3520, 1035, 0,    1864, 2947, 0,    0,    426,  0,    2874, 0,    0,
    1167, 0,    0,    0,    2422, 1063, 2173, 3233, 0,    162,  87,   1367, 3655, 0,    0,    0,
    3039, 3,    0,    626,  0,    1665, 0,    0,    0,    0,    0,    0,    0,    2254, 3187, 4150,
    1163, 0,    1199, 0,    0,    2486, 0,    0,    0,    261,  0,    1012, 0,    3380, 0,    0,
    951,  0,    0,    0,    903,  690,  0,    0,    0,    541,  1679, 2808, 0,    0,    306,  0,
    0,    0,    0,    1348, 0,    0,    0,    153,  0,    0,    1719, 0,    753,  1237, 0,    3271,
    0,    1601, 0,    0,    0,    0,    0,    0,    193,  0,    0,    0,    0,    0,    4286, 0,
    1671, 2157, 0,    3043, 0,    0,    3829, 242,  0,    418,  0,    0,    1984, 3620, 4297, 0,
    0,    1913, 0,    1494, 0,    0,    697,  0,    0,    0,    0,    2817, 79,   624,  0,    0,
    3501, 0,    212,  0,    0,    0,    0,    3410, 1110, 2170, 3544, 4165, 0,    0,    0,    0,
    417,  0,    1540, 3704, 0,    451,  446,  0,    1785, 0,    243,  0,    0,    789,  0,    0,
    0,    957,  1229, 0,    0,    0,    0,    0,    1467, 0,    0,    0,    0,    0,    0,    0,
    0,    2725, 0,    0,    0,    0,    0,    3242, 0,    1924, 0,    0,    0,    0,    0,    1938,
    1510, 0,    2999, 1697, 0,    1370, 2112, 0,    0,    297,  3059, 0,    0,    0,    0,    1157,
    0,    1419, 1857, 0,    1947, 0,    0,    0,    2092, 0,    82,   0,    0,    1057, 183,  0,
    896,  3016, 1407, 0,    3525, 0,    415,  1240, 780,  1159, 1708, 205,  1636, 0,    0,    3888,
    1646, 1285, 0,    1812, 0,    0,    2236, 0,    3466, 0,    0,    0,    0,    660,  924,  0,
    0,    2881, 0,    0,    4304, 4025, 0,    311,  0,    0,    3364, 764,  98,   0,    0,    3235,
    3689, 1318, 3272, 0,    0,    4050, 0,    3401, 1738, 0,    1257, 0,    0,    0,    0,    25,
    0,    0,    0,    0,    0,    0,    0,    0,    598,  0,    1594, 2304, 0,    3939, 0,    1695,
    0,    0,    0,    0,    1331, 867,  0,    4179, 565,  3868, 3528, 927,  1502, 971,  1649, 0,
    0,    0,    0,    1339, 1210, 2159, 3777, 0,    0,    0,    3735, 0,    0,    1345, 2828, 1753,
    0,    4031, 3530, 3033, 0,    0,    1551, 1168, 0,    0,    0,    0,    1721, 0,    0,    0,
    0,    0,    0,    0,    640,  0,    0,    1044, 0,    3669, 0,    0,    2486, 0,    0,    4218,
    1481, 3178, 0,    0,    3051, 0,    0,    0,    0,    3169, 3508, 0,    0,    2882, 1061, 2303,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    357,  1700, 0,    3882, 0,    1914, 1830,
    479,  0,    2302, 0,    0,    295,  1155, 375,  0,    0,    2605, 0,    3965, 3376, 42,   3419,
    0,    0,    0,    4261, 0,    0,    1597, 1668, 75,   0,    0,    0,    0,    0,    0,    4266,
    1795, 2549, 3333, 848,  0,    3961, 717,  0,    845,  685,  0,    0,    0,    0,    0,    0,
    2861, 0,    579,  3761, 0,    0,    0,    0,    0,    993,  0,    1145, 0,    0,    0,    0,
    0,    3129, 0,    0,    3925, 0,    0,    0,    0,    0,    0,    4215, 0,    1465, 0,    1740,
    3594, 0,    0,    0,    0,    0,    0,    174,  660,  0,    3069, 2671, 2127, 227,  0,    0,
    0,    0,    856,  1312, 0,    0,    0,    4152, 0,    2217, 4071, 0,    0,    0,    132,  0,
    0,    0,    2339, 35,   0,    0,    0,    3952, 4201, 0,    3281, 0,    1739, 0,    0,    0,
    224,  2773, 0,    0,    0,    1154, 1281, 0,    234,  0,    0,    0,    0,    525,  2135, 0,
    4312, 1957, 2074, 0,    0,    4293, 3699, 92,   0,    0,    0,    0,    0,    949,  2609, 0,
    0,    536,  0,    0,    0,    0,    842,  0,    0,    399,  2649, 3269, 211,  0,    1052, 0,
    0,    0,    0,    358,  1805, 0,    0,    0,    0,    0,    0,    2375, 0,    2734, 0,    0,
    0,    1554, 0,    0,    544,  0,    0,    0,    0,    672,  341,  520,  0,    0,    0,    0,
    3448, 1214, 0,    0,    1776, 980,  663,  0,    3857, 0,    1779, 0,    3763, 714,  0,    0,
    0,    1938, 0,    1950, 1860, 0,    4136, 1733, 0,    303,  0,    0,    0,    999,  0,    0,
    2870, 0,    0,    0,    0,    1703, 0,    0,    0,    1130, 0,    0,    0,    0,    466,  866,
    110,  717,  0,    1605, 4094, 3680, 0,    0,    0,    0,    3696, 0,    0,    0,    0,    31,
    0,    2181, 860,  0,    0,    0,    3767, 0,    1566, 0,    743,  1869, 3516, 0,    0,    3532,
    189,  0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    577,  0,    3941, 0,    755,
    0,    60,   0,    1166, 0,    0,    0,    132,  3048, 0,    0,    1714, 151,  1016, 4157, 981,
    4351, 0,    0,    1150, 0,    419,  0,    0,    1471, 0,    0,    3699, 1481, 0,    0,    0,
    1126, 0,    3277, 0,    1931, 0,    0,    2938, 0,    0,    0,    1011, 0,    3804, 1278, 0,
    0,    0,    1791, 3933, 3301, 0,    0,    3722, 0,    0,    446,  0,    0,    0,    0,    1939,
    778,  0,    0,    463,  38,   0,    3500, 0,    3680, 181,  513,  0,    1408, 2322, 583,  0,
    0,    0,    0,    464,  711,  1601, 3627, 0,    0,    0,    0,    1097, 2039, 2116, 0,    0,
    0,    4190, 3562, 1004, 1581, 217,  2659, 0,    3571, 839,  1180, 51,   0,    0,    1475, 2972,
    0,    0,    102,  0,    0,    1410, 0,    0,    0,    0,    201,  703,  0,    4032, 2265, 1591,
    0,    0,    1770, 0,    0,    0,    2470, 0,    0,    0,    0,    658,  0,    0,    193,  0,
    359,  0,    118,  0,    62,   0,    4011, 0,    0,    0,    0,    0,    0,    0,    3026, 0,
    0,    2338, 1887, 729,  0,    3212, 0,    2138, 707,  358,  3200, 1916, 0,    617,  0,    3524,
    0,    0,    0,    0,    184,  0,    0,    0,    3630, 0,    0,    3596, 468,  0,    1963, 0,
    0,    4297, 0,    0,    1296, 2667, 1409, 1432, 0,    939,  0,    0,    1964, 0,    937,  1644,
    0,    4133, 331,  0,    0,    0,    0,    0,    2836, 0,    2203, 1748, 2672, 0,    516,  0,
    303,  0,    1710, 0,    0,    2599, 0,    0,    1870, 2358, 0,    0,    0,    465,  1055, 0,
    3456, 0,    0,    0,    728,  0,    0,    1537, 0,    0,    0,    1054, 1309, 0,    3963, 26,
    3821, 3499, 554,  0,    926,  3356, 0,    311,  1750, 0,    0,    0,    0,    0,    1666, 0,
    1786, 231,  0,    0,    0,    1996, 0,    2058, 0,    3539, 0,    508,  0,    0,    0,    2026,
    0,    0,    0,    1094, 0,    0,    0,    0,    0,    1958, 2399, 0,    0,    2161, 0,    0,
    0,    158,  3356, 0,    0,    0,    818,  3457, 0,    934,  1992, 794,  592,  4024, 3900, 3619,
    3644, 2414, 1895, 3528, 1282, 0,    0,    4047, 0,    0,    0,    0,    912,  3821, 0,    0,
    2751, 0,    4090, 0,    674,  585,  0,    3184, 2989, 0,    4006, 1764, 1024, 2305, 2090, 1195,
    2238, 0,    1762, 0,    3144, 0,    2044, 3274, 791,  917,  3905, 0,    0,    0,    0,    0,
    0,    0,    1370, 0,    0,    2667, 3663, 0,    0,    0,    0,    0,    0,    621,  4052, 3137,
    4227, 2473, 1896, 0,    0,    1547, 0,    0,    0,    2718, 1626, 0,    0,    1085, 0,    316,
    0,    3534, 0,    1569, 4251, 0,    0,    0,    0,    1558, 1611, 4221, 0,    1671, 2548, 4340,
    2781, 1186, 4277, 325,  1740, 3911, 0,    223,  1682, 1219, 0,    0,    1404, 3881, 0,    158,
    4248, 3889, 0,    0,    346,  0,    1405, 0,    4017, 3462, 0,    2683, 675,  696,  1388, 2068,
    0,    3048, 0,    0,    0,    531,  0,    0,    0,    4177, 0,    0,    0,    1872, 0,    3462,
    2811, 0,    1030, 351,  0,    885,  1989, 2540, 0,    0,    3804, 0,    1755, 0,    3446, 0,
    0,    0,    371,  1400, 2345, 1196, 0,    0,    0,    2164, 839,  1854, 0,    0,    3230, 0,
    0,    0,    1564, 3087, 0,    0,    990,  0,    4150, 0,    0,    0,    2606, 0,    0,    0,
    0,    0,    3713, 0,    62,   0,    0,    0,    4343, 0,    0,    0,    0,    0,    2131, 0,
    0,    860,  0,    3180, 2316, 0,    477,  2122, 0,    0,    0,    1209, 0,    3800, 767,  2334,
    0,    0,    1102, 1237, 4225, 3749, 1507, 37,   2137, 0,    2670, 1856, 0,    0,    0,    0,
    2456, 0,    2742, 1198, 0,    214,  0,    463,  0,    0,    288,  521,  1899, 1694, 0,    0,
    0,    4146, 837,  1254, 0,    3485, 17,   3460, 293,  0,    0,    0,    2469, 0,    0,    4175,
    1705, 0,    1680, 0,    2241, 3694, 0,    0,    0,    1820, 0,    0,    0,    2009, 0,    1598,
    0,    912,  0,    0,    1849, 1427, 613,  0,    963,  2974, 1586, 1199, 1855, 886,  0,    1310,
    0,    1642, 0,    2815, 397,  2196, 3016, 0,    0,    921,  0,    0,    0,    0,    0,    950,
    819,  3789, 2769, 0,    0,    790,  0,    209,  3925, 0,    0,    2084, 1416, 844,  3226, 1083,
    1860, 2757, 0,    0,    0,    1758, 2407, 0,    993,  0,    0,    0,    3226, 0,    0,    1936,
    4115, 0,    3675, 4034, 0,    0,    3915, 1111, 613,  0,    0,    3812, 0,    2136, 0,    0,
    0,    0,    2467, 0,    48,   0,    0,    3452, 2730, 0,    0,    0,    1171, 1807, 0,    0,
    2056, 0,    1435, 0,    274,  0,    2294, 0,    3860, 0,    0,    1139, 0,    0,    0,    0,
    4110, 309,  288,  0,    0,    3643, 0,    0,    0,    65,   0,    0,    532,  0,    4120, 0,
    1634, 3442, 3567, 3541, 0,    4023, 0,    0,    0,    1524, 3649, 2473, 0,    0,    466,  0,
    1639, 188,  825,  3889, 0,    1308, 0,    236,  0,    4204, 3394, 0,    2126, 2207, 0,    0,
    529,  0,    770,  0,    0,    0,    2081, 0,    0,    1020, 837,  3684, 1141, 1681, 3355, 228,
    485,  0,    0,    2010, 634,  0,    0,    0,    71,   0,    1755, 745,  0,    2843, 0,    0,
    640,  169,  1277, 2651, 0,    1129, 692,  0,    3743, 0,    46,   1018, 0,    361,  347,  0,
    1042, 1002, 3297, 0,    4107, 3977, 0,    0,    30,   0,    0,    0,    1577, 0,    3270, 828,
    0,    1463, 0,    1628, 3666, 0,    3048, 0,    0,    4217, 3043, 0,    813,  713,  765,  1875,
    589,  3699, 412,  2106, 0,    0,    0,    0,    2808, 963,  3642, 0,    0,    2811, 897,  327,
    0,    3706, 0,    1395, 0,    814,  0,    2622, 0,    596,  2680, 4205, 3497, 3396, 0,    0,
    45,   3318, 0,    990,  0,    0,    0,    0,    0,    123,  831,  0,    94,   0,    0,    0,
    1709, 0,    0,    2276, 0,    0,    0,    0,    0,    0,    1405, 0,    0,    931,  0,    0,
    0,    820,  0,    0,    0,    0,    4327, 0,    1982, 1341, 0,    1969, 0,    0,    543,  0,
    2005, 0,    214,  452,  0,    0,    3173, 1389, 0,    741,  0,    0,    905,  496,  751,  3609,
    0,    0,    1815, 0,    3885, 1941, 0,    3056, 0,    2102, 1003, 0,    1077, 922,  105,  3445,
    1608, 0,    2809, 0,    3462, 1516, 1112, 0,    1842, 1153, 1866, 1926, 297,  1271, 29,   522,
    0,    50,   0,    0,    819,  1540, 1647, 0,    0,    762,  2144, 2635, 0,    90,   2053, 0,
    3697, 2063, 0,    0,    4188, 0,    0,    4221, 1443, 4189, 3126, 578,  0,    3397, 0,    95,
    0,    0,    2002, 147,  2026, 0,    0,    0,    0,    0,    885,  334,  0,    0,    0,    1458,
    2003, 3553, 4291, 850,  3227, 0,    0,    4236, 0,    3690, 3106, 566,  1335, 0,    886,  1184,
    0,    0,    0,    2467, 0,    0,    0,    186,  1225, 1087, 975,  0,    0,    675,  1861, 0,
    0,    95,   0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    2403, 3509, 395,
    0,    2449, 0,    252,  1885, 0,    0,    0,    0,    0,    184,  723,  1333, 0,    0,    0,
    2096, 1705, 0,    0,    59,   823,  518,  0,    0,    1057, 310,  1542, 0,    1533, 658,  0,
    0,    1401, 0,    0,    0,    2989, 0,    2655, 0,    0,    3372, 1579, 0,    4219, 0,    4220,
    1639, 945,  0,    0,    169,  968,  0,    0,    1452, 0,    0,    3351, 2168, 3064, 3304, 2053,
    1919, 2070, 961,  0,    0,    0,    4018, 827,  0,    1721, 0,    0,    0,    2645, 0,    0,
    845,  0,    3922, 0,    0,    0,    2647, 727,  0,    3180, 0,    3000, 0,    0,    4226, 612,
    0,    0,    0,    0,    0,    1682, 0,    0,    0,    3892, 754,  0,    0,    0,    1489, 589,
    478,  0,    0,    1732, 0,    1156, 0,    1083, 0,    1121, 1794, 574,  0,    386,  1956, 335,
    4248, 1327, 0,    1922, 0,    0,    699,  2,    2142, 240,  0,    3579, 3665, 0,    1033, 46,
    1383, 0,    0,    127,  0,    1429, 2193, 1534, 2201, 2180, 4221, 464,  2381, 0,    955,  0,
    0,    0,    0,    286,  466,  0,    0,    0,    1152, 2453, 3794, 844,  0,    0,    1458, 0,
    1859, 0,    860,  0,    237,  1715, 687,  0,    476,  2564, 1375, 1223, 736,  0,    2204, 0,
    2119, 823,  3611, 0,    0,    848,  0,    0,    0,    0,    0,    0,    0,    0,    0,    4096,
    0,    0,    505,  3789, 4083, 1173, 1744, 0,    3,    4069, 0,    0,    3853, 0,    969,  0,
    3609, 2624, 0,    0,    0,    1068, 0,    1146, 0,    0,    0,    1627, 1662, 599,  1839, 3080,
    945,  1382, 4180, 0,    2357, 3564, 648,  434,  2853, 1728, 2060, 0,    0,    0,    1156, 21,
    81,   0,    0,    2569, 3101, 988,  0,    0,    662,  948,  0,    613,  796,  0,    664,  0,
    3883, 2981, 2870, 1344, 3983, 957,  0,    1559, 0,    1378, 235,  0,    0,    0,    905,  3246,
    1356, 3366, 0,    2195, 0,    873,  0,    265,  0,    592,  530,  0,    0,    55,   1073, 0,
    401,  0,    4092, 840,  1252, 225,  0,    1230, 181,  1972, 0,    3929, 2436, 27,   0,    1714,
    828,  4073, 246,  0,    0,    0,    1576, 847,  243,  547,  0,    0,    0,    1043, 1773, 0,
    0,    0,    1732, 0,    0,    0,    0,    0,    0,    984,  0,    0,    1775, 98,   134,  0,
    0,    0,    0,    0,    2546, 2837, 0,    259,  0,    0,    1831, 3458, 4333, 1732, 1896, 1392,
    968,  175,  0,    0,    0,    3663, 0,    1803, 2530, 313,  1192, 0,    0,    0,    1353, 2888,
    910,  4016, 2160, 1982, 0,    0,    1471, 2890, 0,    0,    3300, 2186, 474,  552,  2429, 1334,
    880,  0,    856,  629,  4070, 0,    0,    3015, 397,  2847, 1519, 0,    1202, 2972, 0,    0,
    0,    3322, 0,    64,   1453, 4021, 0,    214,  0,    1899, 0,    1961, 4184, 0,    0,    0,
    0,    0,    0,    3243, 0,    3399, 3065, 166,  0,    0,    0,    0,    0,    0,    2013, 0,
    0,    1460, 1568, 32,   1717, 1925, 0,    1218, 412,  1881, 853,  4004, 4165, 0,    0,    888,
    2150, 469,  4346, 1184, 1341, 1297, 0,    1862, 922,  0,    260,  3476, 2359, 191,  2956, 1972,
    1230, 0,    0,    1033, 0,    4059, 938,  2886, 0,    1088, 26,   1068, 873,  292,  1792, 2160,
    1753, 0,    1411, 0,    261,  0,    0,    2091, 85,   303,  0,    651,  3197, 4124, 1246, 268,
    3652, 0,    906,  305,  0,    559,  1545, 1894, 3722, 365,  1645, 382,  0,    3840, 0,    3142,
    3809, 4331, 1736, 1766, 3794, 0,    355,  962,  1513, 0,    0,    1806, 0,    0,    0,    3548,
    4266, 1920, 1767, 472,  2337, 3500, 524,  0,    0,    1055, 0,    3354, 0,    820,  0,    207,
    0,    1128, 2766, 298,  0,    0,    0,    1452, 0,    0,    210,  0,    0,    431,  1571, 151,
    1720, 986,  1684, 3622, 101,  3443, 0,    970,  0,    0,    0,    1284, 200,  1327, 0,    310,
    1068, 0,    0,    1258, 0,    0,    1291, 1274, 373,  0,    807,  1758, 3429, 465,  1542, 0,
    914,  0,    0,    982,  0,    0,    0,    0,    1024, 4176, 0,    163,  1115, 0,    0,    823,
    3338, 1185, 312,  3544, 0,    2672, 2428, 0,    0,    1376, 2878, 513,  744,  0,    1887, 4308,
    77,   1429, 0,    0,    3819, 176,  0,    174,  2680, 1978, 2328, 0,    1888, 3424, 715,  819,
    1989, 0,    0,    0,    0,    0,    1052, 1580, 3038, 0,    0,    0,    0,    0,    783,  0,
    1356, 1822, 0,    1238, 1495, 0,    0,    0,    0,    1512, 673,  2072, 1217, 562,  84,   0,
    0,    0,    2980, 0,    0,    712,  0,    1380, 0,    3801, 2473, 1033, 0,    0,    0,    0,
    2188, 0,    0,    338,  0,    173,  0,    830,  1151, 1767, 0,    0,    582,  0,    0,    39,
    3486, 1414, 2008, 0,    0,    0,    1591, 3367, 0,    1201, 3613, 0,    0,    0,    0,    0,
    2011, 0,    0,    0,    2098, 4309, 1669, 1673, 484,  0,    0,    1141, 0,    1372, 0,    0,
    0,    175,  0,    3575, 0,    53,   35,   3797, 0,    0,    4002, 374,  707,  1913, 1050, 810,
    3624, 1065, 0,    1307, 0,    0,    0,    0,    0,    584,  3932, 0,    0,    0,    0,    0,
    2321, 2154, 0,    0,    0,    0,    0,    0,    118,  1072, 1680, 0,    1496, 0,    814,  1670,
    0,    0,    1766, 2062, 0,    1380, 0,    0,    734,  0,    0,    294,  0,    211,  3565, 0,
    0,    0,    495,  751,  2296, 4019, 641,  1194, 656,  603,  0,    571,  2156, 1051, 2563, 15,
    424,  181,  0,    163,  2558, 0,    0,    0,    0,    0,    1629, 3871, 2064, 314,  4082, 0,
    0,    0,    909,  185,  2673, 0,    259,  118,  2077, 0,    4262, 2317, 0,    0,    3784, 0,
    0,    4316, 1265, 0,    1440, 1240, 133,  0,    1072, 0,    3909, 458,  2143, 530,  0,    0,
    0,    4128, 4285, 0,    1671, 0,    792,  0,    1455, 222,  0,    1318, 555,  165,  140,  4060,
    364,  2111, 0,    817,  0,    2787, 1673, 0,    0,    1064, 0,    1683, 0,    0,    1067, 0,
    0,    0,    4186, 1646, 947,  878,  187,  639,  1284, 0,    4271, 710,  0,    0,    797,  1623,
    2441, 2926, 3814, 0,    0,    3747, 0,    0,    0,    2183, 0,    318,  1350, 0,    3334, 1748,
    1987, 198,  0,    0,    96,   890,  1556, 619,  0,    892,  0,    2840, 1311, 0,    2445, 50,
    0,    0,    860,  820,  970,  1022, 2586, 0,    3261, 0,    0,    1630, 0,    692,  1265, 470,
    1273, 1172, 0,    0,    251,  0,    1430, 0,    0,    0,    1474, 0,    0,    245,  1220, 0,
    2162, 2560, 0,    0,    176,  0,    47,   0,    4219, 0,    285,  0,    0,    0,    0,    1893,
    1726, 3805, 1289, 725,  1288, 3295, 0,    0,    1828, 0,    0,    578,  4196, 0,    3446, 0,
    1099, 41,   1599, 4251, 4103, 4056, 1143, 0,    778,  0,    0,    1465, 36,   149,  1226, 1664,
    4021, 0,    0,    756,  0,    1767, 0,    4306, 1076, 0,    2000, 167,  2560, 0,    4288, 48,
    0,    679,  0,    0,    0,    593,  0,    2789, 0,    578,  680,  0,    611,  0,    0,    0,
    1301, 908,  0,    1287, 3842, 783,  1093, 396,  0,    2081, 4158, 3690, 1097, 1206, 875,  0,
    887,  881,  1546, 966,  1933, 1901, 572,  0,    125,  150,  0,    2304, 0,    0,    1402, 1730,
    1888, 0,    3724, 1853, 0,    997,  0,    3330, 1756, 0,    0,    2053, 0,    4168, 870,  1300,
    0,    0,    3816, 1521, 649,  0,    1122, 0,    3890, 0,    0,    1688, 2582, 3481, 3517, 1402,
    3430, 0,    0,    0,    3687, 0,    1263, 0,    1973, 570,  659,  0,    67,   3001, 10,   1414,
    0,    0,    793,  0,    0,    775,  0,    0,    991,  4128, 0,    1945, 4043, 524,  0,    3,
    635,  1283, 0,    3262, 4169, 1199, 421,  0,    1069, 811,  0,    782,  0,    0,    0,    0,
    903,  1053, 1885, 0,    1694, 4112, 0,    0,    0,    211,  637,  1160, 0,    0,    3385, 0,
    0,    1026, 394,  397,  0,    0,    3592, 4075, 2257, 0,    0,    1493, 1276, 0,    112,  1330,
    0,    2042, 1067, 3608, 0,    0,    0,    131,  141,  667,  2491, 1041, 1750, 3869, 1444, 931,
    13,   0,    0,    0,    995,  0,    0,    1164, 0,    1745, 693,  2359, 0,    503,  2425, 4164,
    0,    251,  983,  587,  1330, 636,  750,  3537, 1251, 0,    1275, 0,    54,   800,  0,    0,
    135,  0,    1615, 1784, 255,  0,    768,  2909, 1089, 0,    0,    1953, 0,    0,    4285, 2189,
    0,    0,    1770, 1005, 0,    0,    2190, 1447, 0,    2372, 0,    0,    4294, 0,    484,  4007,
    905,  918,  0,    4062, 779,  0,    0,    3454, 0,    0,    2031, 996,  1534, 4219, 0,    0,
    0,    0,    0,    997,  967,  0,    2758, 3722, 0,    0,    432,  1503, 7,    455,  2713, 3779,
    0,    4209, 252,  388,  0,    0,    0,    0,    753,  1668, 3134, 2824, 0,    1618, 0,    1020,
    2016, 650,  1954, 3717, 964,  987,  0,    1843, 0,    1110, 32,   1838, 1895, 0,    2959, 3891,
    1268, 0,    467,  2275, 0,    2372, 0,    3591, 1176, 0,    0,    1867, 0,    1506, 556,  0,
    1530, 1060, 0,    3845, 3400, 991,  0,    2055, 1517, 2518, 3044, 3229, 92,   2142, 1887, 0,
    0,    173,  0,    0,    0,    2285, 389,  0,    1445, 841,  179,  2176, 0,    1723, 202,  3921,
    0,    869,  3222, 932,  3625, 2117, 0,    0,    0,    2150, 620,  1490, 343,  0,    870,  0,
    0,    0,    1362, 2941, 28,   3589, 3617, 1026, 106,  1975, 1207, 43,   13,   0,    0,    1539,
    3943, 2134, 0,    0,    0,    0,    1374, 3279, 0,    0,    103,  1543, 2,    0,    1464, 367,
    3786, 0,    3061, 608,  0,    937,  0,    0,    1563, 0,    0,    0,    0,    379,  1501, 4344,
    2403, 1818, 0,    1496, 1248, 0,    0,    1923, 1770, 0,    1176, 258,  3438, 3393, 3843, 1463,
    3320, 2016, 0,    237,  0,    0,    1054, 3853, 0,    4034, 3465, 1751, 4124, 0,    580,  633,
    0,    0,    338,  0,    827,  0,    3931, 791,  2004, 0,    3197, 1416, 2352, 4049, 0,    0,
    3604, 0,    190,  0,    3414, 0,    1988, 3936, 3976, 2340, 2079, 2030, 694,  981,  4289, 964,
    4266, 0,    0,    1903, 444,  0,    3270, 787,  0,    4334, 3039, 616,  0,    2172, 3966, 145,
    0,    0,    2701, 0,    2183, 0,    0,    3192, 0,    0,    959,  3637, 0,    759,  4173, 3336,
    1566, 3478, 3630, 0,    1251, 1866, 703,  3019, 424,  1419, 0,    0,    1819, 0,    454,  0,
    0,    2126, 2167, 1823, 1037, 0,    0,    3571, 4108, 2115, 4328, 0,    1396, 0,    0,    3727,
    0,    1205, 414,  3008, 116,  3465, 1421, 0,    2558, 0,    0,    609,  0,    741,  0,    2194,
    0,    1922, 3078, 0,    3842, 0,    1363, 2725, 311,  4345, 538,  0,    0,    0,    0,    1337,
    0,    245,  730,  3534, 0,    1269, 595,  1294, 0,    0,    0,    225,  0,    4188, 1736, 824,
    0,    0,    167,  2499, 1781, 0,    0,    0,    423,  0,    0,    1622, 4028, 0,    1840, 0,
    0,    0,    666,  1456, 0,    2427, 290,  2422, 19,   701,  473,  0,    0,    4001, 0,    3066,
    2791, 0,    0,    0,    1239, 314,  2319, 74,   0,    0,    0,    420,  405,  2933, 0,    1188,
    674,  0,    0,    2052, 1720, 4274, 0,    1678, 82,   2162, 0,    418,  515,  906,  3028, 150,
    1741, 658,  340,  312,  3129, 1956, 0,    0,    0,    1557, 1454, 1298, 0,    3671, 0,    1433,
    0,    1556, 2926, 0,    2989, 116,  0,    871,  173,  4327, 0,    1007, 700,  0,    1404, 0,
    0,    0,    0,    0,    212,  1898, 17,   0,    2999, 0,    75,   1171, 0,    0,    0,    0,
    2067, 2016, 2828, 856,  1446, 2648, 0,    406,  1702, 2203, 835,  1345, 1712, 3678, 3556, 0,
    1715, 0,    0,    248,  0,    2252, 2088, 2289, 0,    0,    1832, 750,  736,  0,    0,    649,
    3428, 0,    0,    7,    1777, 423,  1479, 1096, 782,  3057, 916,  0,    0,    4333, 3405, 0,
    221,  0,    0,    0,    2135, 125,  0,    3985, 0,    2043, 2766, 1322, 0,    1166, 0,    983,
    0,    4131, 870,  0,    4150, 1236, 1341, 485,  284,  809,  1520, 3519, 339,  0,    1611, 0,
    3234, 0,    407,  0,    255,  1345, 845,  2342, 596,  1672, 3140, 1817, 1898, 0,    0,    1480,
    3098, 2296, 1009, 1475, 1301, 281,  2861, 0,    0,    1470, 4245, 2013, 1068, 0,    761,  1258,
    0,    1937, 3321, 427,  1624, 0,    3857, 2455, 3890, 594,  0,    0,    3304, 3401, 3079, 382,
    814,  1991, 815,  3392, 0,    0,    2074, 0,    3051, 0,    586,  0,    0,    0,    0,    3617,
    686,  61,   482,  2176, 0,    0,    1313, 0,    0,    72,   0,    0,    1641, 0,    1632, 0,
    1765, 1924, 1984, 0,    3634, 0,    4192, 0,    0,    244,  2123, 0,    1893, 2850, 0,    466,
    1513, 320,  0,    1269, 1758, 480,  0,    649,  613,  492,  3125, 0,    1079, 0,    0,    0,
    0,    882,  1760, 1233, 1248, 2591, 0,    0,    2468, 0,    1081, 1155, 514,  2971, 0,    63,
    276,  3940, 3532, 232,  0,    1546, 0,    130,  1879, 458,  0,    0,    0,    0,    794,  0,
    0,    0,    1623, 1465, 291,  0,    254,  1380, 0,    1925, 1989, 355,  968,  660,  0,    3264,
    0,    0};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 4354;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 40)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 4354;
}

constexpr int unmangledkT1[] = {319, 0,   91,  210, 328, 207, 176, 148, 315, 247, 334,
                                51,  186, 88,  234, 137, 99,  190, 126, 312, 196, 87,
                                214, 314, 190, 315, 151, 99,  287, 338, 137, 176};
constexpr int unmangledkT2[] = {17,  29, 312, 81,  181, 91,  234, 364, 160, 152, 334,
                                252, 18, 359, 221, 189, 3,   270, 59,  105, 157, 15,
                                234, 91, 296, 208, 326, 310, 160, 192, 307, 307};
constexpr int unmangledkG[]  = {
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   102, 0,   59,  145, 0,   0,   0,   0,   0,
    186, 110, 205, 0,   0,   0,   98,  0,   0,   246, 0,   0,   0,   271, 114, 0,   0,   73,  43,
    197, 0,   61,  0,   0,   0,   0,   146, 0,   285, 177, 0,   0,   0,   0,   0,   0,   0,   348,
    0,   21,  0,   237, 86,  144, 272, 0,   34,  0,   0,   87,  0,   122, 0,   29,  160, 107, 0,
    0,   0,   0,   254, 180, 173, 100, 268, 0,   41,  0,   314, 0,   0,   0,   0,   354, 230, 199,
    211, 0,   90,  233, 21,  0,   0,   118, 289, 0,   0,   0,   179, 238, 339, 227, 42,  247, 0,
    0,   0,   0,   126, 0,   325, 297, 176, 217, 75,  1,   0,   0,   0,   66,  0,   62,  0,   0,
    70,  232, 252, 272, 0,   0,   48,  185, 207, 230, 257, 345, 0,   173, 322, 60,  294, 300, 188,
    180, 0,   240, 0,   109, 0,   195, 160, 138, 42,  329, 343, 0,   0,   0,   0,   0,   190, 0,
    0,   0,   263, 0,   219, 0,   259, 257, 53,  0,   278, 57,  48,  0,   216, 139, 161, 0,   62,
    352, 255, 321, 0,   148, 21,  40,  316, 262, 71,  0,   0,   0,   155, 84,  0,   0,   0,   182,
    242, 195, 0,   0,   177, 273, 14,  0,   0,   0,   0,   274, 63,  319, 37,  239, 152, 0,   18,
    303, 140, 342, 0,   339, 239, 273, 0,   0,   317, 337, 203, 0,   360, 244, 206, 327, 333, 11,
    68,  0,   144, 146, 0,   227, 0,   0,   83,  158, 19,  301, 341, 353, 177, 128, 0,   245, 0,
    153, 0,   169, 0,   370, 174, 0,   0,   263, 0,   0,   203, 0,   311, 0,   188, 230, 0,   62,
    10,  124, 319, 61,  0,   30,  7,   0,   0,   365, 75,  0,   350, 319, 134, 140, 199, 124, 45,
    245, 0,   0,   281, 0,   337, 0,   195, 0,   182, 291, 156, 303, 0,   154, 327, 294, 245, 217,
    104, 268, 0,   0,   42,  272, 347, 0,   0,   179, 151, 0,   148, 0,   15,  364, 116, 371, 176,
    0,   213, 0,   264, 178, 29,  234, 0,   258, 0,   160, 35,  12,  358, 45,  0,   137, 0,   191,
    324, 0,   189, 315, 2,   95,  157, 0,   0,   0,   204};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 372;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 32)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 372;
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

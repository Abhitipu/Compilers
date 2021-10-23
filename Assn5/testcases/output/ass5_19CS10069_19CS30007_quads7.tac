
________________________________________________________________________________________________________________________
THREE ADDRESS CODE (TAC): 
________________________________________________________________________________________________________________________

0: min: 
1:     if a < b goto 4
2:     goto 6
3:     goto 6
4:     return a
5:     goto 6
6:     return b

7: MatrixChainMultiplication: 
8:     if start == end goto 11
9:     goto 14
10:     goto 14
11:     t_0 = 0
12:     return t_0
13:     goto 14
14:     t_1 = 100000000
15:     min_val = t_1

16: MatrixChainMultiplication.FOR$0: 
17:     k = start
18:     if k < end goto 23
19:     goto 52
20:     t_1 = k
21:     k = k + 1
22:     goto 18
23:     param p
24:     param start
25:     param k
26:     t_2 = call MatrixChainMultiplication, 3
27:     param p
28:     t_3 = 1
29:     t_4 = k + t_3
30:     param t_4
31:     param end
32:     t_5 = call MatrixChainMultiplication, 3
33:     t_6 = t_2 * t_5
34:     count = t_6
35:     t_8 = 1
36:     t_9 = start - t_8
37:     t_10 = t_9 * 4
38:     t_11 = p[t_10]
39:     t_12 = end * 4
40:     t_13 = p[t_12]
41:     t_14 = k * 4
42:     t_15 = p[t_14]
43:     t_16 = t_13 * t_15
44:     t_17 = t_11 * t_16
45:     extra = t_17
46:     count = extra
47:     param min_val
48:     param count
49:     t_19 = call min, 2
50:     min_val = t_19
51:     goto 20
52:     return min_val

53: main: 
54:     t_0 = 6
55:     t_1 = 0
56:     t_2 = t_1 * 4
57:     t_3 = 1
58:     myInput[t_2] = t_3
59:     t_5 = 1
60:     t_6 = t_5 * 4
61:     t_7 = 23
62:     myInput[t_6] = t_7
63:     t_9 = 2
64:     t_10 = t_9 * 4
65:     t_11 = 45
66:     myInput[t_10] = t_11
67:     t_13 = 3
68:     t_14 = t_13 * 4
69:     t_15 = 222
70:     myInput[t_14] = t_15
71:     t_17 = 4
72:     t_18 = t_17 * 4
73:     t_19 = 1
74:     myInput[t_18] = t_19
75:     t_21 = 5
76:     t_22 = t_21 * 4
77:     t_23 = 1222
78:     myInput[t_22] = t_23
79:     t_25 = 6
80:     n = t_25
81:     param myInput
82:     t_26 = 1
83:     param t_26
84:     t_27 = 1
85:     t_28 = n - t_27
86:     param t_28
87:     t_29 = call MatrixChainMultiplication, 3
88:     minMults = t_29
89:     t_30 = 0
90:     return t_30
__________________________________________________________________________________________________________________________________
__________________________________________________________________________________________________________________________________________________
Table Name: Global                                                Parent Name: NULL
__________________________________________________________________________________________________________________________________________________
Name                                    Type                          Initial Value       Size           Offset         Nested
                                                                                                    
min                                     func                          -                   0              0              min
MatrixChainMultiplication               func                          -                   0              0              MatrixChainMultiplication
main                                    func                          -                   0              0              main
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: min                                                   Parent Name: Global
__________________________________________________________________________________________________________________________________________________
Name                                    Type                          Initial Value       Size           Offset         Nested
                                                                                                    
a                                       int                           -                   4              0              NULL
b                                       int                           -                   4              4              NULL
return                                  int                           -                   4              8              NULL
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: MatrixChainMultiplication                             Parent Name: Global
__________________________________________________________________________________________________________________________________________________
Name                                    Type                          Initial Value       Size           Offset         Nested
                                                                                                    
p                                       arr(0,int)                    -                   0              0              NULL
start                                   int                           -                   4              0              NULL
end                                     int                           -                   4              4              NULL
return                                  int                           -                   4              8              NULL
t_0                                     int                           0                   4              12             NULL
k                                       int                           -                   4              16             NULL
min_val                                 int                           100000000           4              20             NULL
t_1                                     int                           100000000           4              24             NULL
count                                   int                           -                   4              28             NULL
MatrixChainMultiplication.FOR$0         block                         -                   4              32             MatrixChainMultiplication.FOR$0
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: MatrixChainMultiplication.FOR$0                       Parent Name: MatrixChainMultiplication
__________________________________________________________________________________________________________________________________________________
Name                                    Type                          Initial Value       Size           Offset         Nested
                                                                                                    
t_0                                     int                                               4              0              NULL
t_1                                     int                                               4              4              NULL
t_2                                     int                                               4              8              NULL
t_3                                     int                           1                   4              12             NULL
t_4                                     int                                               4              16             NULL
t_5                                     int                                               4              20             NULL
t_6                                     int                                               4              24             NULL
t_7                                     int                                               4              28             NULL
extra                                   int                           -                   4              32             NULL
t_8                                     int                           1                   4              36             NULL
t_9                                     int                                               4              40             NULL
t_10                                    int                                               4              44             NULL
t_11                                    int                                               4              48             NULL
t_12                                    int                                               4              52             NULL
t_13                                    int                                               4              56             NULL
t_14                                    int                                               4              60             NULL
t_15                                    int                                               4              64             NULL
t_16                                    int                                               4              68             NULL
t_17                                    int                                               4              72             NULL
t_18                                    int                                               4              76             NULL
t_19                                    func                                              0              80             NULL
t_20                                    int                                               4              80             NULL
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: main                                                  Parent Name: Global
__________________________________________________________________________________________________________________________________________________
Name                                    Type                          Initial Value       Size           Offset         Nested
                                                                                                    
return                                  int                           -                   4              0              NULL
myInput                                 arr(6,int)                    -                   24             4              NULL
t_0                                     int                           6                   4              28             NULL
t_1                                     int                           0                   4              32             NULL
t_2                                     int                                               4              36             NULL
t_3                                     int                           1                   4              40             NULL
t_4                                     int                                               4              44             NULL
t_5                                     int                           1                   4              48             NULL
t_6                                     int                                               4              52             NULL
t_7                                     int                           23                  4              56             NULL
t_8                                     int                                               4              60             NULL
t_9                                     int                           2                   4              64             NULL
t_10                                    int                                               4              68             NULL
t_11                                    int                           45                  4              72             NULL
t_12                                    int                                               4              76             NULL
t_13                                    int                           3                   4              80             NULL
t_14                                    int                                               4              84             NULL
t_15                                    int                           222                 4              88             NULL
t_16                                    int                                               4              92             NULL
t_17                                    int                           4                   4              96             NULL
t_18                                    int                                               4              100            NULL
t_19                                    int                           1                   4              104            NULL
t_20                                    int                                               4              108            NULL
t_21                                    int                           5                   4              112            NULL
t_22                                    int                                               4              116            NULL
t_23                                    int                           1222                4              120            NULL
t_24                                    int                                               4              124            NULL
n                                       int                           6                   4              128            NULL
t_25                                    int                           6                   4              132            NULL
minMults                                int                           -                   4              136            NULL
t_26                                    int                           1                   4              140            NULL
t_27                                    int                           1                   4              144            NULL
t_28                                    int                                               4              148            NULL
t_29                                    func                                              0              152            NULL
t_30                                    int                           0                   4              152            NULL
----------------------------------------------------------------------------------------------------------------------------------


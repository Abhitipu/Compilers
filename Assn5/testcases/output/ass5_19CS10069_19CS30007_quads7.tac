
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
7:     t_0 = 6

8: MatrixChainMultiplication: 
9:     if start == end goto 12
10:     goto 15
11:     goto 15
12:     t_1 = 0
13:     return t_1
14:     goto 15
15:     t_2 = 100000000
16:     min_val = t_2

17: MatrixChainMultiplication.FOR$0: 
18:     k = start
19:     if k < end goto 24
20:     goto 53
21:     t_1 = k
22:     k = k + 1
23:     goto 19
24:     param p
25:     param start
26:     param k
27:     t_2 = call MatrixChainMultiplication, 3
28:     param p
29:     t_3 = 1
30:     t_4 = k + t_3
31:     param t_4
32:     param end
33:     t_5 = call MatrixChainMultiplication, 3
34:     t_6 = t_2 * t_5
35:     count = t_6
36:     t_8 = 1
37:     t_9 = start - t_8
38:     t_10 = t_9 * 4
39:     t_11 = p[t_10]
40:     t_12 = end * 4
41:     t_13 = p[t_12]
42:     t_14 = k * 4
43:     t_15 = p[t_14]
44:     t_16 = t_13 * t_15
45:     t_17 = t_11 * t_16
46:     extra = t_17
47:     count = extra
48:     param min_val
49:     param count
50:     t_19 = call min, 2
51:     min_val = t_19
52:     goto 21
53:     return min_val

54: main: 
55:     t_0 = 6
56:     t_1 = 0
57:     t_2 = t_1 * 4
58:     t_3 = 1
59:     myInput[t_2] = t_3
60:     t_5 = 1
61:     t_6 = t_5 * 4
62:     t_7 = 23
63:     myInput[t_6] = t_7
64:     t_9 = 2
65:     t_10 = t_9 * 4
66:     t_11 = 45
67:     myInput[t_10] = t_11
68:     t_13 = 3
69:     t_14 = t_13 * 4
70:     t_15 = 222
71:     myInput[t_14] = t_15
72:     t_17 = 4
73:     t_18 = t_17 * 4
74:     t_19 = 1
75:     myInput[t_18] = t_19
76:     t_21 = 5
77:     t_22 = t_21 * 4
78:     t_23 = 1222
79:     myInput[t_22] = t_23
80:     t_25 = 6
81:     n = t_25
82:     param myInput
83:     t_26 = 1
84:     param t_26
85:     t_27 = 1
86:     t_28 = n - t_27
87:     param t_28
88:     t_29 = call MatrixChainMultiplication, 3
89:     minMults = t_29
90:     t_30 = 0
91:     return t_30
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
                                                                                                    
p                                       arr(6,int)                    -                   24             0              NULL
t_0                                     int                           6                   4              24             NULL
start                                   int                           -                   4              28             NULL
end                                     int                           -                   4              32             NULL
return                                  int                           -                   4              36             NULL
t_1                                     int                           0                   4              40             NULL
k                                       int                           -                   4              44             NULL
min_val                                 int                           100000000           4              48             NULL
t_2                                     int                           100000000           4              52             NULL
count                                   int                           -                   4              56             NULL
MatrixChainMultiplication.FOR$0         block                         -                   4              60             MatrixChainMultiplication.FOR$0
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


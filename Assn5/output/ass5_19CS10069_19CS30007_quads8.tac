
____________________________________________________________________________________________________________________________________________________
THREE ADDRESS CODE (TAC): 
____________________________________________________________________________________________________________________________________________________

0: doSomething: 
1:     t_0 = 2
2:     t_1 = a >> t_0
3:     t_2 = 2
4:     t_3 = b << t_2
5:     t_4 = t_1 + t_3
6:     t_5 = 1
7:     t_6 = c - t_5
8:     t_7 = t_4 + t_6
9:     return t_7

10: tryCallingMe: 
11:     t_0 = 1
12:     t_1 = ss + t_0
13:     param t_1
14:     t_2 = 2
15:     t_3 = ss - t_2
16:     param t_3
17:     t_4 = 2
18:     t_5 = ss / t_4
19:     param t_5
20:     t_6 = call doSomething, 3
21:     check = t_6

22: tryCallingMe.$0: 
23:     t_0 = 2
24:     t_1 = t_0 + ss
25:     cc = t_1
26:     param cc
27:     t_2 = 1
28:     t_3 = cc + t_2
29:     param t_3
30:     t_4 = ss + check
31:     param t_4
32:     t_5 = call doSomething, 3
33:     moreValues = t_5
34:     check = moreValues
35:     t_7 = cc
36:     cc = cc - 1
37:     t_8 = 0
38:     if t_7 > t_8 goto 26
39:     goto 40
40:     return check

41: main: 
42:     t_0 = 12
43:     t_1 = 13

44: main.FOR$0: 
45:     t_0 = 0
46:     i = t_0
47:     t_1 = 12
48:     if i < t_1 goto 53
49:     goto 99
50:     t_2 = i
51:     i = i + 1
52:     goto 47

53: main.FOR$0.FOR$1: 
54:     t_0 = 0
55:     j = t_0
56:     t_1 = 13
57:     if j < t_1 goto 62
58:     goto 50
59:     t_2 = j
60:     j = j + 1
61:     goto 56
62:     t_3 = i * 52
63:     t_5 = j * 4
64:     t_4 = t_3 + t_5
65:     t_6 = i + j
66:     param t_6
67:     t_7 = call tryCallingMe, 1
68:     dp[t_4] = t_7
69:     goto 81
70:     t_9 = i * 52
71:     t_11 = j * 4
72:     t_10 = t_9 + t_11
73:     t_12 = 1
74:     t_13 = i - t_12
75:     t_14 = t_13 * 52
76:     t_16 = j * 4
77:     t_15 = t_14 + t_16
78:     t_17 = dp[t_15]
79:     dp[t_10] = t_17
80:     goto 83
81:     if i == 0 goto 83
82:     goto 70
83:     goto 95
84:     t_19 = i * 52
85:     t_21 = j * 4
86:     t_20 = t_19 + t_21
87:     t_22 = i * 52
88:     t_23 = 1
89:     t_24 = j - t_23
90:     t_26 = t_24 * 4
91:     t_25 = t_22 + t_26
92:     t_27 = dp[t_25]
93:     dp[t_20] = t_27
94:     goto 59
95:     if j == 0 goto 59
96:     goto 84
97:     goto 59
98:     goto 50
99:     t_2 = 0
100:     return t_2
____________________________________________________________________________________________________________________________________________________

SYMBOL TABLES:

____________________________________________________________________________________________________________________________________________________
Table Name: Global                                                 Parent Name: NULL
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
doSomething                              func                           -                    0               0               doSomething
tryCallingMe                             func                           -                    0               0               tryCallingMe
main                                     func                           -                    0               0               main
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: doSomething                                            Parent Name: Global
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
a                                        int                            -                    4               0               NULL
b                                        int                            -                    4               4               NULL
c                                        int                            -                    4               8               NULL
return                                   int                            -                    4               12              NULL
t_0                                      int                            2                    4               16              NULL
t_1                                      int                                                 4               20              NULL
t_2                                      int                            2                    4               24              NULL
t_3                                      int                                                 4               28              NULL
t_4                                      int                                                 4               32              NULL
t_5                                      int                            1                    4               36              NULL
t_6                                      int                                                 4               40              NULL
t_7                                      int                                                 4               44              NULL
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: tryCallingMe                                           Parent Name: Global
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
ss                                       int                            -                    4               0               NULL
return                                   int                            -                    4               4               NULL
check                                    int                            -                    4               8               NULL
t_0                                      int                            1                    4               12              NULL
t_1                                      int                                                 4               16              NULL
t_2                                      int                            2                    4               20              NULL
t_3                                      int                                                 4               24              NULL
t_4                                      int                            2                    4               28              NULL
t_5                                      int                                                 4               32              NULL
t_6                                      int                                                 4               36              NULL
tryCallingMe.$0                          block                          -                    0               40              tryCallingMe.$0
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: tryCallingMe.$0                                        Parent Name: tryCallingMe
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
cc                                       int                            -                    4               0               NULL
t_0                                      int                            2                    4               4               NULL
t_1                                      int                                                 4               8               NULL
moreValues                               int                            -                    4               12              NULL
t_2                                      int                            1                    4               16              NULL
t_3                                      int                                                 4               20              NULL
t_4                                      int                                                 4               24              NULL
t_5                                      int                                                 4               28              NULL
t_6                                      int                                                 4               32              NULL
t_7                                      int                                                 4               36              NULL
t_8                                      int                            0                    4               40              NULL
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: main                                                   Parent Name: Global
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
return                                   int                            -                    4               0               NULL
dp                                       arr(12,arr(13,int))            -                    624             4               NULL
t_0                                      int                            12                   4               628             NULL
t_1                                      int                            13                   4               632             NULL
main.FOR$0                               block                          -                    0               636             main.FOR$0
t_2                                      int                            0                    4               636             NULL
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: main.FOR$0                                             Parent Name: main
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
i                                        int                            0                    4               0               NULL
t_0                                      int                            0                    4               4               NULL
t_1                                      int                            12                   4               8               NULL
t_2                                      int                                                 4               12              NULL
main.FOR$0.FOR$1                         block                          -                    0               16              main.FOR$0.FOR$1
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: main.FOR$0.FOR$1                                       Parent Name: main.FOR$0
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
j                                        int                            0                    4               0               NULL
t_0                                      int                            0                    4               4               NULL
t_1                                      int                            13                   4               8               NULL
t_2                                      int                                                 4               12              NULL
t_3                                      int                                                 4               16              NULL
t_4                                      int                                                 4               20              NULL
t_5                                      int                                                 4               24              NULL
t_6                                      int                                                 4               28              NULL
t_7                                      int                                                 4               32              NULL
t_8                                      int                                                 4               36              NULL
t_9                                      int                                                 4               40              NULL
t_10                                     int                                                 4               44              NULL
t_11                                     int                                                 4               48              NULL
t_12                                     int                            1                    4               52              NULL
t_13                                     int                                                 4               56              NULL
t_14                                     int                                                 4               60              NULL
t_15                                     int                                                 4               64              NULL
t_16                                     int                                                 4               68              NULL
t_17                                     int                                                 4               72              NULL
t_18                                     int                                                 4               76              NULL
t_19                                     int                                                 4               80              NULL
t_20                                     int                                                 4               84              NULL
t_21                                     int                                                 4               88              NULL
t_22                                     int                                                 4               92              NULL
t_23                                     int                            1                    4               96              NULL
t_24                                     int                                                 4               100             NULL
t_25                                     int                                                 4               104             NULL
t_26                                     int                                                 4               108             NULL
t_27                                     int                                                 4               112             NULL
t_28                                     int                                                 4               116             NULL
----------------------------------------------------------------------------------------------------------------------------------------------------


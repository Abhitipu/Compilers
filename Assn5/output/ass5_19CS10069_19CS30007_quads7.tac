
____________________________________________________________________________________________________________________________________________________
THREE ADDRESS CODE (TAC): 
____________________________________________________________________________________________________________________________________________________

0: bsrch: 
1:     if start > end goto 4
2:     goto 8
3:     goto 8
4:     t_0 = 1
5:     t_1 = -t_0
6:     return t_1
7:     goto 8
8:     t_2 = start + end
9:     t_3 = 2
10:     t_4 = t_2 / t_3
11:     mid = t_4
12:     t_5 = mid * 4
13:     t_6 = arr[t_5]
14:     if t_6 == num goto 17
15:     goto 19
16:     goto 47
17:     return mid
18:     goto 
19:     t_7 = mid * 4
20:     t_8 = arr[t_7]
21:     if t_8 < num goto 24
22:     goto 33
23:     goto 47
24:     param arr
25:     param num
26:     t_9 = 1
27:     t_10 = mid + t_9
28:     param t_10
29:     param end
30:     t_11 = call bsrch, 4
31:     return t_11
32:     goto 
33:     t_12 = mid * 4
34:     t_13 = arr[t_12]
35:     if t_13 > num goto 38
36:     goto 
37:     goto 47
38:     param arr
39:     param num
40:     param start
41:     t_14 = 1
42:     t_15 = mid - t_14
43:     param t_15
44:     t_16 = call bsrch, 4
45:     return t_16
46:     goto 

47: main: 
48:     t_0 = 6
49:     t_1 = 0
50:     t_2 = t_1 * 4
51:     t_3 = 1111
52:     t_4 = -t_3
53:     arr[t_2] = t_4
54:     t_6 = 1
55:     t_7 = t_6 * 4
56:     t_8 = 12
57:     t_9 = -t_8
58:     arr[t_7] = t_9
59:     t_11 = 2
60:     t_12 = t_11 * 4
61:     t_13 = 2
62:     t_14 = -t_13
63:     arr[t_12] = t_14
64:     t_16 = 3
65:     t_17 = t_16 * 4
66:     t_18 = 10
67:     arr[t_17] = t_18
68:     t_20 = 4
69:     t_21 = t_20 * 4
70:     t_22 = 20
71:     arr[t_21] = t_22
72:     t_24 = 5
73:     t_25 = t_24 * 4
74:     t_26 = 122
75:     arr[t_25] = t_26
76:     t_28 = 6
77:     n = t_28
78:     t_30 = 0
79:     t_31 = t_30 * 4
80:     t_32 = arr[t_31]
81:     chk = t_32

82: main.FOR$0: 
83:     t_0 = 1
84:     i = t_0
85:     if i < n goto 89
86:     goto 99
87:     i = i + 1
88:     goto 85
89:     t_2 = i * 4
90:     t_3 = arr[t_2]
91:     if chk >= t_3 goto 94
92:     goto 87
93:     goto 98

94: main.FOR$0.FOR$1: 
95:     t_0 = 0
96:     return t_0
97:     goto 87
98:     goto 87
99:     t_34 = 12
100:     num = t_34
101:     param arr
102:     param num
103:     t_36 = 0
104:     param t_36
105:     t_37 = 1
106:     t_38 = n - t_37
107:     param t_38
108:     t_39 = call bsrch, 4
109:     index = t_39
110:     t_41 = 1
111:     t_42 = -t_41
112:     if index == t_42 goto 115
113:     goto 119
114:     goto 119

115: main.$2: 
116:     t_0 = 0
117:     return t_0
118:     goto 119
119:     t_43 = 0
120:     return t_43
____________________________________________________________________________________________________________________________________________________

SYMBOL TABLES:

____________________________________________________________________________________________________________________________________________________
Table Name: Global                                                 Parent Name: NULL
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
bsrch                                    func                           -                    0               0               bsrch
main                                     func                           -                    0               0               main
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: bsrch                                                  Parent Name: Global
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
arr                                      arr(0,int)                     -                    0               0               NULL
num                                      int                            -                    4               0               NULL
start                                    int                            -                    4               4               NULL
end                                      int                            -                    4               8               NULL
return                                   int                            -                    4               12              NULL
t_0                                      int                            1                    4               16              NULL
t_1                                      int                                                 4               20              NULL
mid                                      int                            -                    4               24              NULL
t_2                                      int                                                 4               28              NULL
t_3                                      int                            2                    4               32              NULL
t_4                                      int                                                 4               36              NULL
t_5                                      int                                                 4               40              NULL
t_6                                      int                                                 4               44              NULL
t_7                                      int                                                 4               48              NULL
t_8                                      int                                                 4               52              NULL
t_9                                      int                            1                    4               56              NULL
t_10                                     int                                                 4               60              NULL
t_11                                     int                                                 4               64              NULL
t_12                                     int                                                 4               68              NULL
t_13                                     int                                                 4               72              NULL
t_14                                     int                            1                    4               76              NULL
t_15                                     int                                                 4               80              NULL
t_16                                     int                                                 4               84              NULL
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: main                                                   Parent Name: Global
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
return                                   int                            -                    4               0               NULL
i                                        int                            -                    4               4               NULL
n                                        int                            -                    4               8               NULL
num                                      int                            -                    4               12              NULL
index                                    int                            -                    4               16              NULL
chk                                      int                            -                    4               20              NULL
arr                                      arr(6,int)                     -                    24              24              NULL
t_0                                      int                            6                    4               48              NULL
t_1                                      int                            0                    4               52              NULL
t_2                                      int                                                 4               56              NULL
t_3                                      int                            1111                 4               60              NULL
t_4                                      int                                                 4               64              NULL
t_5                                      int                                                 4               68              NULL
t_6                                      int                            1                    4               72              NULL
t_7                                      int                                                 4               76              NULL
t_8                                      int                            12                   4               80              NULL
t_9                                      int                                                 4               84              NULL
t_10                                     int                                                 4               88              NULL
t_11                                     int                            2                    4               92              NULL
t_12                                     int                                                 4               96              NULL
t_13                                     int                            2                    4               100             NULL
t_14                                     int                                                 4               104             NULL
t_15                                     int                                                 4               108             NULL
t_16                                     int                            3                    4               112             NULL
t_17                                     int                                                 4               116             NULL
t_18                                     int                            10                   4               120             NULL
t_19                                     int                                                 4               124             NULL
t_20                                     int                            4                    4               128             NULL
t_21                                     int                                                 4               132             NULL
t_22                                     int                            20                   4               136             NULL
t_23                                     int                                                 4               140             NULL
t_24                                     int                            5                    4               144             NULL
t_25                                     int                                                 4               148             NULL
t_26                                     int                            122                  4               152             NULL
t_27                                     int                                                 4               156             NULL
t_28                                     int                            6                    4               160             NULL
t_29                                     int                                                 4               164             NULL
t_30                                     int                            0                    4               168             NULL
t_31                                     int                                                 4               172             NULL
t_32                                     int                                                 4               176             NULL
t_33                                     int                                                 4               180             NULL
main.FOR$0                               block                          -                    0               184             main.FOR$0
t_34                                     int                            12                   4               184             NULL
t_35                                     int                                                 4               188             NULL
t_36                                     int                            0                    4               192             NULL
t_37                                     int                            1                    4               196             NULL
t_38                                     int                                                 4               200             NULL
t_39                                     int                                                 4               204             NULL
t_40                                     int                                                 4               208             NULL
t_41                                     int                            1                    4               212             NULL
t_42                                     int                                                 4               216             NULL
main.$2                                  block                          -                    0               220             main.$2
t_43                                     int                            0                    4               220             NULL
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: main.FOR$0                                             Parent Name: main
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
t_0                                      int                            1                    4               0               NULL
t_1                                      int                                                 4               4               NULL
t_2                                      int                                                 4               8               NULL
t_3                                      int                                                 4               12              NULL
main.FOR$0.FOR$1                         block                          -                    0               16              main.FOR$0.FOR$1
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: main.FOR$0.FOR$1                                       Parent Name: main.FOR$0
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
t_0                                      int                            0                    4               0               NULL
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: main.$2                                                Parent Name: main
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
t_0                                      int                            0                    4               0               NULL
----------------------------------------------------------------------------------------------------------------------------------------------------


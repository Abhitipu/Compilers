
________________________________________________________________________________________________________________________
THREE ADDRESS CODE (TAC): 
________________________________________________________________________________________________________________________

0: max: 
1:     if a > b goto 4
2:     goto 5
3:     goto 9
4:     goto 7
5:     t_0 = b
6:     goto 9
7:     t_0 = a
8:     goto 9
9:     ans = t_0
10:     return ans
11:     t_0 = 100

12: func: 
13:     t_1 = 100
14:     t_2 = 0
15:     t_3 = t_2 * 4
16:     t_4 = 0
17:     val[t_3] = t_4
18:     t_6 = 10000
19:     max_val = t_6

20: func.FOR$0: 
21:     t_0 = 1
22:     i = t_0
23:     if i <= n goto 28
24:     goto 52
25:     t_2 = i
26:     i = i + 1
27:     goto 23

28: func.FOR$0.FOR$1: 
29:     t_0 = 0
30:     j = t_0
31:     if j < i goto 36
32:     goto 49
33:     t_2 = j
34:     j = j + 1
35:     goto 31
36:     param max_val
37:     t_3 = j * 4
38:     t_4 = price[t_3]
39:     t_5 = i - j
40:     t_6 = 1
41:     t_7 = t_5 - t_6
42:     t_8 = t_7 * 4
43:     t_9 = val[t_8]
44:     t_10 = t_4 + t_9
45:     param t_10
46:     t_11 = call max, 2
47:     max_val = t_11
48:     goto 33
49:     t_3 = i * 4
50:     val[t_3] = max_val
51:     goto 25
52:     t_7 = n * 4
53:     t_8 = val[t_7]
54:     return t_8

55: main: 
56:     goto 79
57:     t_0 = 'a'
58:     c = t_0
59:     t_1 = 'x'
60:     b = t_1
61:     t_2 = 100
62:     t_3 = 0
63:     size = t_3
64:     t_4 = 100
65:     n = t_4

66: main.FOR$0: 
67:     t_0 = 0
68:     i = t_0
69:     if i < n goto 74
70:     goto 77
71:     t_2 = i
72:     i = i + 1
73:     goto 69
74:     t_3 = i * 4
75:     arr[t_3] = i
76:     goto 71
77:     t_5 = 0
78:     ans = t_5
79:     param arr
80:     param size
81:     t_6 = call func, 2
82:     ans = t_6
83:     t_8 = 0
84:     return t_8
__________________________________________________________________________________________________________________________________
__________________________________________________________________________________________________________________________________________________
Table Name: Global                                                Parent Name: NULL
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
max                                     func                -                   0              0              max
func                                    func                -                   0              0              func
main                                    func                -                   0              0              main
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: max                                                   Parent Name: Global
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
a                                       int                 -                   4              0              NULL
b                                       int                 -                   4              4              NULL
return                                  int                 -                   4              8              NULL
ans                                     int                 -                   4              12             NULL
t_0                                     int                                     4              16             NULL
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: func                                                  Parent Name: Global
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
price                                   arr(100,int)        -                   400            0              NULL
t_0                                     int                 100                 4              400            NULL
n                                       int                 -                   4              404            NULL
return                                  int                 -                   4              408            NULL
val                                     arr(100,int)        -                   400            412            NULL
t_1                                     int                 100                 4              812            NULL
t_2                                     int                 0                   4              816            NULL
t_3                                     int                                     4              820            NULL
t_4                                     int                 0                   4              824            NULL
t_5                                     int                                     4              828            NULL
i                                       int                 -                   4              832            NULL
j                                       int                 -                   4              836            NULL
max_val                                 int                 10000               4              840            NULL
t_6                                     int                 10000               4              844            NULL
func.FOR$0                              block               -                   4              848            func.FOR$0
t_7                                     int                                     4              852            NULL
t_8                                     int                                     4              856            NULL
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: func.FOR$0                                            Parent Name: func
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
t_0                                     int                 1                   4              0              NULL
t_1                                     int                                     4              4              NULL
t_2                                     int                                     4              8              NULL
func.FOR$0.FOR$1                        block               -                   4              12             func.FOR$0.FOR$1
t_3                                     int                                     4              16             NULL
t_4                                     int                                     4              20             NULL
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: func.FOR$0.FOR$1                                      Parent Name: func.FOR$0
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
t_0                                     int                 0                   4              0              NULL
t_1                                     int                                     4              4              NULL
t_2                                     int                                     4              8              NULL
t_3                                     int                                     4              12             NULL
t_4                                     int                                     4              16             NULL
t_5                                     int                                     4              20             NULL
t_6                                     int                 1                   4              24             NULL
t_7                                     int                                     4              28             NULL
t_8                                     int                                     4              32             NULL
t_9                                     int                                     4              36             NULL
t_10                                    int                                     4              40             NULL
t_11                                    func                                    0              44             NULL
t_12                                    int                                     4              44             NULL
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: main                                                  Parent Name: Global
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
return                                  int                 -                   4              0              NULL
L                                       int                 -                   4              4              NULL
c                                       char                'a'                 1              8              NULL
t_0                                     char                'a'                 1              9              NULL
b                                       char                'x'                 1              10             NULL
t_1                                     char                'x'                 1              11             NULL
arr                                     arr(100,int)        -                   400            12             NULL
t_2                                     int                 100                 4              412            NULL
size                                    int                 0                   4              416            NULL
t_3                                     int                 0                   4              420            NULL
i                                       int                 -                   4              424            NULL
n                                       int                 100                 4              428            NULL
t_4                                     int                 100                 4              432            NULL
main.FOR$0                              block               -                   4              436            main.FOR$0
ans                                     int                 0                   4              440            NULL
t_5                                     int                 0                   4              444            NULL
t_6                                     func                                    0              448            NULL
t_7                                     int                                     4              448            NULL
t_8                                     int                 0                   4              452            NULL
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: main.FOR$0                                            Parent Name: main
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
t_0                                     int                 0                   4              0              NULL
t_1                                     int                                     4              4              NULL
t_2                                     int                                     4              8              NULL
t_3                                     int                                     4              12             NULL
t_4                                     int                                     4              16             NULL
----------------------------------------------------------------------------------------------------------------------------------



#################### LINE NO : 2 ####################

#################### LINE NO : 3 ####################

#################### LINE NO : 4 ####################

#################### LINE NO : 5 ####################

#################### LINE NO : 6 ####################

#################### LINE NO : 7 ####################

#################### LINE NO : 8 ####################

#################### LINE NO : 9 ####################

#################### LINE NO : 10 ####################

#################### LINE NO : 11 ####################

#################### LINE NO : 12 ####################

#################### LINE NO : 13 ####################

#################### LINE NO : 14 ####################

#################### LINE NO : 15 ####################

#################### LINE NO : 16 ####################

#################### LINE NO : 17 ####################

#################### LINE NO : 18 ####################

#################### LINE NO : 19 ####################

#################### LINE NO : 20 ####################

#################### LINE NO : 21 ####################

#################### LINE NO : 22 ####################

#################### LINE NO : 23 ####################

#################### LINE NO : 24 ####################

#################### LINE NO : 25 ####################

#################### LINE NO : 26 ####################

#################### LINE NO : 27 ####################

#################### LINE NO : 28 ####################

#################### LINE NO : 29 ####################

#################### LINE NO : 30 ####################

#################### LINE NO : 31 ####################

#################### LINE NO : 32 ####################

#################### LINE NO : 33 ####################

#################### LINE NO : 34 ####################

#################### LINE NO : 35 ####################

#################### LINE NO : 36 ####################

#################### LINE NO : 37 ####################

________________________________________________________________________________________________________________________
THREE ADDRESS CODE (TAC): 
________________________________________________________________________________________________________________________

0: max: max: max: max: max: max: max: max: 
1:     if x > y goto 4if x > y goto 4if x > y goto 4if x > y goto 4if x > y goto 4if x > y goto 4if x > y goto 4if x > y goto 4
2:     goto 6goto 6goto 6goto 6goto 6goto 6goto 6goto 6
3:     goto 7goto 7goto 7goto 7goto 7goto 7goto 7goto 7
4:     ans = xans = xans = xans = xans = xans = xans = xans = x
5:     goto 7goto 7goto 7goto 7goto 7goto 7goto 7goto 7
6:     ans = yans = yans = yans = yans = yans = yans = yans = y
7:     t_2 = 0t_2 = 0t_2 = 0t_2 = 0t_2 = 0t_2 = 0t_2 = 0t_2 = 0
8:     if ans < t_2 goto 11if ans < t_2 goto 11if ans < t_2 goto 11if ans < t_2 goto 11if ans < t_2 goto 11if ans < t_2 goto 11if ans < t_2 goto 11if ans < t_2 goto 11
9:     goto 14goto 14goto 14goto 14goto 14goto 14goto 14goto 14
10:     goto 14goto 14goto 14goto 14goto 14goto 14goto 14goto 14
11:     t_3 = -anst_3 = -anst_3 = -anst_3 = -anst_3 = -anst_3 = -anst_3 = -anst_3 = -ans
12:     ans = t_3ans = t_3ans = t_3ans = t_3ans = t_3ans = t_3ans = t_3ans = t_3
13:     goto 14goto 14goto 14goto 14goto 14goto 14goto 14goto 14
14:     return ansreturn ansreturn ansreturn ansreturn ansreturn ansreturn ansreturn ans

15: min: min: min: min: min: min: min: min: 
16:     if x > y goto 19if x > y goto 19if x > y goto 19if x > y goto 19if x > y goto 19if x > y goto 19if x > y goto 19if x > y goto 19
17:     goto 20goto 20goto 20goto 20goto 20goto 20goto 20goto 20
18:     goto 24goto 24goto 24goto 24goto 24goto 24goto 24goto 24
19:     goto 22goto 22goto 22goto 22goto 22goto 22goto 22goto 22
20:     t_0 = xt_0 = xt_0 = xt_0 = xt_0 = xt_0 = xt_0 = xt_0 = x
21:     goto 24goto 24goto 24goto 24goto 24goto 24goto 24goto 24
22:     t_0 = yt_0 = yt_0 = yt_0 = yt_0 = yt_0 = yt_0 = yt_0 = y
23:     goto 24goto 24goto 24goto 24goto 24goto 24goto 24goto 24
24:     ans = t_0ans = t_0ans = t_0ans = t_0ans = t_0ans = t_0ans = t_0ans = t_0
25:     param xparam xparam xparam xparam xparam xparam xparam x
26:     param yparam yparam yparam yparam yparam yparam yparam y
27:     t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2
28:     return ansreturn ansreturn ansreturn ansreturn ansreturn ansreturn ansreturn ans

29: cal: cal: cal: cal: cal: cal: cal: cal: 
30:     param aparam aparam aparam aparam aparam aparam aparam a
31:     param bparam bparam bparam bparam bparam bparam bparam b
32:     t_0 = call min, 2t_0 = call min, 2t_0 = call min, 2t_0 = call min, 2t_0 = call min, 2t_0 = call min, 2t_0 = call min, 2t_0 = call min, 2
33:     i = t_0i = t_0i = t_0i = t_0i = t_0i = t_0i = t_0i = t_0
34:     param aparam aparam aparam aparam aparam aparam aparam a
35:     param bparam bparam bparam bparam bparam bparam bparam b
36:     t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2t_2 = call max, 2
37:     j = t_2j = t_2j = t_2j = t_2j = t_2j = t_2j = t_2j = t_2
38:     Can't find the operator-t_4 = j - iCan't find the operator-Can't find the operator-Can't find the operator-Can't find the operator-Can't find the operator-Can't find the operator-
39:     d = t_4d = t_4d = t_4d = t_4d = t_4d = t_4d = t_4d = t_4
40:     return dreturn dreturn dreturn dreturn dreturn dreturn dreturn d

41: main: main: main: main: main: main: main: main: 
42:     t_0 = 10t_0 = 10t_0 = 10t_0 = 10t_0 = 10t_0 = 10t_0 = 10t_0 = 10
43:     a = t_0a = t_0a = t_0a = t_0a = t_0a = t_0a = t_0a = t_0
44:     t_2 = 5t_2 = 5t_2 = 5t_2 = 5t_2 = 5t_2 = 5t_2 = 5t_2 = 5
45:     b = t_2b = t_2b = t_2b = t_2b = t_2b = t_2b = t_2b = t_2
46:     param aparam aparam aparam aparam aparam aparam aparam a
47:     param bparam bparam bparam bparam bparam bparam bparam b
48:     t_4 = call cal, 2t_4 = call cal, 2t_4 = call cal, 2t_4 = call cal, 2t_4 = call cal, 2t_4 = call cal, 2t_4 = call cal, 2t_4 = call cal, 2
49:     d = t_4d = t_4d = t_4d = t_4d = t_4d = t_4d = t_4d = t_4
50:     t_6 = 0t_6 = 0t_6 = 0t_6 = 0t_6 = 0t_6 = 0t_6 = 0t_6 = 0
51:     return t_6return t_6return t_6return t_6return t_6return t_6return t_6return t_6
__________________________________________________________________________________________________________________________________
__________________________________________________________________________________________________________________________________________________
Table Name: Global                                                Parent Name: NULL
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
max                                     func                -                   0              0              max
min                                     func                -                   0              0              min
a                                       int                 -                   4              0              NULL
cal                                     func                -                   0              4              cal
main                                    func                -                   0              4              main
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: max                                                   Parent Name: Global
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
x                                       int                 -                   4              0              NULL
y                                       int                 -                   4              4              NULL
return                                  int                 -                   4              8              NULL
ans                                     int                 -                   4              12             NULL
t_0                                     int                                     4              16             NULL
t_1                                     int                                     4              20             NULL
t_2                                     int                 0                   4              24             NULL
t_3                                     int                                     4              28             NULL
t_4                                     int                                     4              32             NULL
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: min                                                   Parent Name: Global
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
x                                       int                 -                   4              0              NULL
y                                       int                 -                   4              4              NULL
return                                  int                 -                   4              8              NULL
ans                                     int                 -                   4              12             NULL
t_0                                     int                                     4              16             NULL
t_1                                     int                                     4              20             NULL
t_2                                     func                                    0              24             NULL
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: cal                                                   Parent Name: Global
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
a                                       int                 -                   4              0              NULL
b                                       int                 -                   4              4              NULL
return                                  int                 -                   4              8              NULL
i                                       int                 -                   4              12             NULL
j                                       int                 -                   4              16             NULL
d                                       int                 -                   4              20             NULL
t_0                                     func                                    0              24             NULL
t_1                                     int                                     4              24             NULL
t_2                                     func                                    0              28             NULL
t_3                                     int                                     4              28             NULL
t_4                                     int                                     4              32             NULL
t_5                                     int                                     4              36             NULL
----------------------------------------------------------------------------------------------------------------------------------

__________________________________________________________________________________________________________________________________________________
Table Name: main                                                  Parent Name: Global
__________________________________________________________________________________________________________________________________________________
Name                                    Type                Initial Value       Size           Offset         Nested
                                                                                                    
return                                  int                 -                   4              0              NULL
b                                       int                 -                   4              4              NULL
d                                       int                 -                   4              8              NULL
t_0                                     int                 10                  4              12             NULL
t_1                                     int                                     4              16             NULL
t_2                                     int                 5                   4              20             NULL
t_3                                     int                                     4              24             NULL
t_4                                     func                                    0              28             NULL
t_5                                     int                                     4              28             NULL
t_6                                     int                 0                   4              32             NULL
----------------------------------------------------------------------------------------------------------------------------------


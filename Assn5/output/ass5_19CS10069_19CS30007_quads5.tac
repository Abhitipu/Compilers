
____________________________________________________________________________________________________________________________________________________
THREE ADDRESS CODE (TAC): 
____________________________________________________________________________________________________________________________________________________

0: checkPrime: 
1:     t_0 = 2
2:     i = t_0
3:     t_1 = 1
4:     n1 = t_1
5:     t_2 = 0
6:     flag = t_2

7: checkPrime.FOR$0: 
8:     t_0 = 2
9:     i = t_0
10:     if i < n goto 15
11:     goto 26
12:     t_2 = i
13:     i = i + 1
14:     goto 10
15:     t_3 = n % i
16:     n1 = t_3
17:     t_5 = 0
18:     if n1 == t_5 goto 21
19:     goto 12
20:     goto 25

21: checkPrime.FOR$0.FOR$1: 
22:     t_0 = 1
23:     flag = t_0
24:     goto 12
25:     goto 12
26:     return flag

27: main: 
28:     t_0 = 9
29:     n = t_0
30:     param n
31:     t_1 = call fib, 1
32:     fib_num = t_1
33:     t_3 = 0
34:     return t_3
____________________________________________________________________________________________________________________________________________________

SYMBOL TABLES:

____________________________________________________________________________________________________________________________________________________
Table Name: Global                                                 Parent Name: NULL
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
checkPrime                               func                           -                    0               0               checkPrime
main                                     func                           -                    0               0               main
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: checkPrime                                             Parent Name: Global
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
n                                        int                            -                    4               0               NULL
return                                   int                            -                    4               4               NULL
i                                        int                            2                    4               8               NULL
t_0                                      int                            2                    4               12              NULL
n1                                       int                            1                    4               16              NULL
t_1                                      int                            1                    4               20              NULL
flag                                     int                            0                    4               24              NULL
t_2                                      int                            0                    4               28              NULL
checkPrime.FOR$0                         block                          -                    0               32              checkPrime.FOR$0
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: checkPrime.FOR$0                                       Parent Name: checkPrime
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
t_0                                      int                            2                    4               0               NULL
t_1                                      int                                                 4               4               NULL
t_2                                      int                                                 4               8               NULL
t_3                                      int                                                 4               12              NULL
t_4                                      int                                                 4               16              NULL
t_5                                      int                            0                    4               20              NULL
checkPrime.FOR$0.FOR$1                   block                          -                    0               24              checkPrime.FOR$0.FOR$1
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: checkPrime.FOR$0.FOR$1                                 Parent Name: checkPrime.FOR$0
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
t_0                                      int                            1                    4               0               NULL
t_1                                      int                                                 4               4               NULL
----------------------------------------------------------------------------------------------------------------------------------------------------

____________________________________________________________________________________________________________________________________________________
Table Name: main                                                   Parent Name: Global
____________________________________________________________________________________________________________________________________________________
Name                                     Type                           Initial Value        Size            Offset          Nested
                                                                                                     
return                                   int                            -                    4               0               NULL
n                                        int                            9                    4               4               NULL
t_0                                      int                            9                    4               8               NULL
fib_num                                  int                            -                    4               12              NULL
fib                                      int                            -                    4               16              NULL
t_1                                      int                                                 4               20              NULL
t_2                                      int                                                 4               24              NULL
t_3                                      int                            0                    4               28              NULL
----------------------------------------------------------------------------------------------------------------------------------------------------


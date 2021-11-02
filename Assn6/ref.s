 .file   "dummy.c"                                                           
  2     .text                                                                       
  3     .globl  main                                                                
  4     .type   main, @function                                                     
  5 main:                                                                           
  6 .LFB0:                                                                          
  7     .cfi_startproc                                                              
  8     endbr64                                                                     
  9     pushq   %rbp                                                                
 10     .cfi_def_cfa_offset 16                                                      
 11     .cfi_offset 6, -16                                                          
 12     movq    %rsp, %rbp                                                          
 13     .cfi_def_cfa_register 6                                                     
 14     subq    $32, %rsp                                                           
 15     movq    %fs:40, %rax                                                        
 16     movq    %rax, -8(%rbp)                                                      
 17     xorl    %eax, %eax                                                          
 18     movl    $4, -32(%rbp)                                                       
 19     movl    $3, -28(%rbp)                                                       
 20     movl    -32(%rbp), %eax                                                     
 21     sall    $2, %eax                                                            
 22     movl    %eax, -24(%rbp)                                                     
 23     movl    -28(%rbp), %eax                                                     
 24     imull   -32(%rbp), %eax                                                     
 25     movl    %eax, -24(%rbp)                                                     
 26     movl    $3, -16(%rbp)                                                       
 27     movl    -16(%rbp), %eax                                                     
 28     movl    %eax, -20(%rbp)                                                     
 29     movl    $4, -12(%rbp)                                                       
 30     movl    $2, -28(%rbp)                                                       
 31     movl    -28(%rbp), %eax                                                     
 32     cltq                                                                        
 33     movl    $345, -20(%rbp,%rax,4)                                              
 34     movl    $0, %eax                                                            
 35     movq    -8(%rbp), %rdx                                                      
 36     xorq    %fs:40, %rdx                                                        
 37     je  .L3                                                                     
 38     call    __stack_chk_fail@PLT                                                
 39 .L3:                                                                            
 40     leave                                                                       
 41     .cfi_def_cfa 7, 8                                                           
 42     ret                     
	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_7.c"
	.text
	.section	.rodata
.LC0:
	.string	"Printing the array\n"
.LC1:
	.string	", "
.LC2:
	.string	"\n"
.LC3:
	.string	"Sorting Arrays using insertion sort\n"
.LC4:
	.string	"Before Sorting: \n"
.LC5:
	.string	", "
.LC6:
	.string	"\n"
.LC7:
	.string	"After Sorting: \n"
.LC8:
	.string	", "
.LC9:
	.string	"\n"
	.text
	movl	$6, %eax
	movl 	%eax, 0(%rbp)
	.globl	printArray
	.type	printArray, @function
printArray: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$108, %rsp
	movq	%rdi, -20(%rbp)
	movq 	$.LC0, -28(%rbp)
	movq 	-28(%rbp), %rdi
	call	printStr
	movl	%eax, -36(%rbp)
	nop
	movl	$0, %eax
	movl 	%eax, -56(%rbp)
	movl	-56(%rbp), %eax
	movl 	%eax, -52(%rbp)
.L1: 
	movl	-52(%rbp), %eax
	cmpl	4(%rbp), %eax
	jl .L3
	jmp .L4
.L2: 
	addl 	$1, -52(%rbp)
	jmp .L1
.L3: 
	movl 	-52(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -60(%rbp)
	movl 	-60(%rbp), %eax
	negl	%eax
	cltq
	movl 	-20(%rbp, %rax, 1), %eax
	movl 	%eax, -64(%rbp)
	movq 	-64(%rbp), %rdi
	call	printInt
	movl	%eax, -68(%rbp)
	movq 	$.LC1, -72(%rbp)
	movq 	-72(%rbp), %rdi
	call	printStr
	movl	%eax, -80(%rbp)
	jmp .L2
.L4: 
	movq 	$.LC2, -40(%rbp)
	movq 	-40(%rbp), %rdi
	call	printStr
	movl	%eax, -48(%rbp)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	printArray, .-printArray
	.globl	main
	.type	main, @function
main: 
.LFB1:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$408, %rsp

	movl	$6, %eax
	movl 	%eax, -56(%rbp)
	movl	$0, %eax
	movl 	%eax, -60(%rbp)
	movl 	-60(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -64(%rbp)
	movl	$5, %eax
	movl 	%eax, -68(%rbp)
	movl 	-68(%rbp), %edx
	movl 	-64(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -32(%rbp, %rax, 1)
	movl	$1, %eax
	movl 	%eax, -76(%rbp)
	movl 	-76(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -80(%rbp)
	movl	$2, %eax
	movl 	%eax, -84(%rbp)
	movl	-84(%rbp), %eax
	negl	%eax
	movl 	%eax, -88(%rbp)
	movl 	-88(%rbp), %edx
	movl 	-80(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -32(%rbp, %rax, 1)
	movl	$2, %eax
	movl 	%eax, -96(%rbp)
	movl 	-96(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -100(%rbp)
	movl	$78, %eax
	movl 	%eax, -104(%rbp)
	movl	-104(%rbp), %eax
	negl	%eax
	movl 	%eax, -108(%rbp)
	movl 	-108(%rbp), %edx
	movl 	-100(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -32(%rbp, %rax, 1)
	movl	$3, %eax
	movl 	%eax, -116(%rbp)
	movl 	-116(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -120(%rbp)
	movl	$98, %eax
	movl 	%eax, -124(%rbp)
	movl 	-124(%rbp), %edx
	movl 	-120(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -32(%rbp, %rax, 1)
	movl	$4, %eax
	movl 	%eax, -132(%rbp)
	movl 	-132(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -136(%rbp)
	movl	$14, %eax
	movl 	%eax, -140(%rbp)
	movl 	-140(%rbp), %edx
	movl 	-136(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -32(%rbp, %rax, 1)
	movl	$5, %eax
	movl 	%eax, -148(%rbp)
	movl 	-148(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -152(%rbp)
	movl	$12, %eax
	movl 	%eax, -156(%rbp)
	movl 	-156(%rbp), %edx
	movl 	-152(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -32(%rbp, %rax, 1)
	movl	$6, %eax
	movl 	%eax, -164(%rbp)
	movl	-164(%rbp), %eax
	movl 	%eax, -28(%rbp)
	movq 	$.LC3, -172(%rbp)
	movq 	-172(%rbp), %rdi
	call	printStr
	movl	%eax, -180(%rbp)
	movq 	$.LC4, -184(%rbp)
	movq 	-184(%rbp), %rdi
	call	printStr
	movl	%eax, -192(%rbp)
	nop
	movl	$0, %eax
	movl 	%eax, -244(%rbp)
	movl	-244(%rbp), %eax
	movl 	%eax, -24(%rbp)
.L5: 
	movl	-24(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl .L7
	jmp .L8
.L6: 
	addl 	$1, -24(%rbp)
	jmp .L5
.L7: 
	movl 	-24(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -252(%rbp)
	movl 	-252(%rbp), %eax
	negl	%eax
	cltq
	movl 	-32(%rbp, %rax, 1), %eax
	movl 	%eax, -256(%rbp)
	movq 	-256(%rbp), %rdi
	call	printInt
	movl	%eax, -260(%rbp)
	movq 	$.LC5, -264(%rbp)
	movq 	-264(%rbp), %rdi
	call	printStr
	movl	%eax, -272(%rbp)
	jmp .L6
.L8: 
	movq 	$.LC6, -196(%rbp)
	movq 	-196(%rbp), %rdi
	call	printStr
	movl	%eax, -204(%rbp)
	nop
	movl	$1, %eax
	movl 	%eax, -276(%rbp)
	movl	-276(%rbp), %eax
	movl 	%eax, -24(%rbp)
.L9: 
	movl	-24(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl .L11
	jmp .L16
.L10: 
	movl	-24(%rbp), %eax
	movl 	%eax, -284(%rbp)
	addl 	$1, -24(%rbp)
	jmp .L9
.L11: 
	movl 	-24(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -288(%rbp)
	movl 	-288(%rbp), %eax
	negl	%eax
	cltq
	movl 	-32(%rbp, %rax, 1), %eax
	movl 	%eax, -292(%rbp)
	movl	-292(%rbp), %eax
	movl 	%eax, -208(%rbp)
	movl	$1, %eax
	movl 	%eax, -300(%rbp)
	movl 	-24(%rbp), %eax
	movl 	-300(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -304(%rbp)
	movl	-304(%rbp), %eax
	movl 	%eax, -212(%rbp)
	nop
.L12: 
	movl	$0, %eax
	movl 	%eax, -360(%rbp)
	movl	-212(%rbp), %eax
	cmpl	-360(%rbp), %eax
	jge .L13
	jmp .L15
.L13: 
	movl 	-212(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -364(%rbp)
	movl 	-364(%rbp), %eax
	negl	%eax
	cltq
	movl 	-32(%rbp, %rax, 1), %eax
	movl 	%eax, -368(%rbp)
	movl	-368(%rbp), %eax
	cmpl	-208(%rbp), %eax
	jg .L14
	jmp .L15
.L14: 
	movl	$1, %eax
	movl 	%eax, -372(%rbp)
	movl 	-212(%rbp), %eax
	movl 	-372(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -376(%rbp)
	movl 	-376(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -380(%rbp)
	movl 	-212(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -384(%rbp)
	movl 	-384(%rbp), %eax
	negl	%eax
	cltq
	movl 	-32(%rbp, %rax, 1), %eax
	movl 	%eax, -388(%rbp)
	movl 	-388(%rbp), %edx
	movl 	-380(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -32(%rbp, %rax, 1)
	movl	$1, %eax
	movl 	%eax, -396(%rbp)
	movl 	-212(%rbp), %eax
	movl 	-396(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -400(%rbp)
	movl	-400(%rbp), %eax
	movl 	%eax, -212(%rbp)
	jmp .L12
.L15: 
	movl	$1, %eax
	movl 	%eax, -312(%rbp)
	movl 	-212(%rbp), %eax
	movl 	-312(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -316(%rbp)
	movl 	-316(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -320(%rbp)
	movl 	-208(%rbp), %edx
	movl 	-320(%rbp), %eax
	negl	%eax
	cltq
	movl 	%edx, -32(%rbp, %rax, 1)
	jmp .L10
.L16: 
	movq 	$.LC7, -216(%rbp)
	movq 	-216(%rbp), %rdi
	call	printStr
	movl	%eax, -224(%rbp)
	nop
	movl	$0, %eax
	movl 	%eax, -328(%rbp)
	movl	-328(%rbp), %eax
	movl 	%eax, -24(%rbp)
.L17: 
	movl	-24(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl .L19
	jmp .L20
.L18: 
	addl 	$1, -24(%rbp)
	jmp .L17
.L19: 
	movl 	-24(%rbp), %eax
	imull 	$4, %eax
	movl 	%eax, -336(%rbp)
	movl 	-336(%rbp), %eax
	negl	%eax
	cltq
	movl 	-32(%rbp, %rax, 1), %eax
	movl 	%eax, -340(%rbp)
	movq 	-340(%rbp), %rdi
	call	printInt
	movl	%eax, -344(%rbp)
	movq 	$.LC8, -348(%rbp)
	movq 	-348(%rbp), %rdi
	call	printStr
	movl	%eax, -356(%rbp)
	jmp .L18
.L20: 
	movq 	$.LC9, -228(%rbp)
	movq 	-228(%rbp), %rdi
	call	printStr
	movl	%eax, -236(%rbp)
	movl	$0, %eax
	movl 	%eax, -240(%rbp)
	movl	-240(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main

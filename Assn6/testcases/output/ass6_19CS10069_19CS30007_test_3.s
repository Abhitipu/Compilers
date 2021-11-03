	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_3.c"
	.text
	.section	.rodata
.LC0:
	.string	"Testing the abs function\n"
.LC1:
	.string	"abs("
.LC2:
	.string	") = "
.LC3:
	.string	"\n"
.LC4:
	.string	"abs("
.LC5:
	.string	") = "
.LC6:
	.string	"\n"
.LC7:
	.string	"Testing the min function\n"
.LC8:
	.string	"Min("
.LC9:
	.string	", "
.LC10:
	.string	") = "
.LC11:
	.string	"\n"
.LC12:
	.string	"Testing the max function\n"
.LC13:
	.string	"Max("
.LC14:
	.string	", "
.LC15:
	.string	") = "
.LC16:
	.string	"\n"
	.text
	.globl	abs
	.type	abs, @function
abs: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$36, %rsp
	movq	%rdi, -20(%rbp)
	movl	$0, %eax
	movl 	%eax, -24(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl .L1
	jmp .L2
.L1: 
	movl	-20(%rbp), %eax
	negl	%eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	jmp .L3
.L2: 
	movl	-20(%rbp), %eax
.L3: 
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	abs, .-abs
	.globl	min
	.type	min, @function
min: 
.LFB1:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$44, %rsp
	movq	%rdi, -20(%rbp)
	movq	%rsi, -16(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jg .L4
	jmp .L5
.L4: 
	movl	-16(%rbp), %eax
	movl 	%eax, -28(%rbp)
	jmp .L6
.L5: 
	movl	-20(%rbp), %eax
	movl 	%eax, -28(%rbp)
.L6: 
	movl	-28(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	min, .-min
	.globl	max
	.type	max, @function
max: 
.LFB2:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$44, %rsp
	movq	%rdi, -20(%rbp)
	movq	%rsi, -16(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jl .L7
	jmp .L8
.L7: 
	movl	-16(%rbp), %eax
	movl 	%eax, -28(%rbp)
	jmp .L9
.L8: 
	movl	-20(%rbp), %eax
	movl 	%eax, -28(%rbp)
.L9: 
	movl	-28(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movl	-24(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	max, .-max
	.globl	main
	.type	main, @function
main: 
.LFB3:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$324, %rsp

	movl	$23, %eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	negl	%eax
	movl 	%eax, -32(%rbp)
	movl	-32(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movl	$24, %eax
	movl 	%eax, -40(%rbp)
	movl	-40(%rbp), %eax
	movl 	%eax, -36(%rbp)
	movq 	$.LC0, -44(%rbp)
	movq 	-44(%rbp), %rdi
	call	printStr
	movl	%eax, -52(%rbp)
	movq 	-24(%rbp), %rdi
	call	abs
	movl	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl 	%eax, -56(%rbp)
	movq 	$.LC1, -64(%rbp)
	movq 	-64(%rbp), %rdi
	call	printStr
	movl	%eax, -72(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -76(%rbp)
	movq 	$.LC2, -80(%rbp)
	movq 	-80(%rbp), %rdi
	call	printStr
	movl	%eax, -88(%rbp)
	movq 	-56(%rbp), %rdi
	call	printInt
	movl	%eax, -92(%rbp)
	movq 	$.LC3, -96(%rbp)
	movq 	-96(%rbp), %rdi
	call	printStr
	movl	%eax, -104(%rbp)
	movq 	-36(%rbp), %rdi
	call	abs
	movl	%eax, -112(%rbp)
	movl	-112(%rbp), %eax
	movl 	%eax, -108(%rbp)
	movq 	$.LC4, -116(%rbp)
	movq 	-116(%rbp), %rdi
	call	printStr
	movl	%eax, -124(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -128(%rbp)
	movq 	$.LC5, -132(%rbp)
	movq 	-132(%rbp), %rdi
	call	printStr
	movl	%eax, -140(%rbp)
	movq 	-108(%rbp), %rdi
	call	printInt
	movl	%eax, -144(%rbp)
	movq 	$.LC6, -148(%rbp)
	movq 	-148(%rbp), %rdi
	call	printStr
	movl	%eax, -156(%rbp)
	movq 	-24(%rbp), %rdi
	movq 	-36(%rbp), %rsi
	call	min
	movl	%eax, -164(%rbp)
	movl	-164(%rbp), %eax
	movl 	%eax, -160(%rbp)
	movq 	$.LC7, -168(%rbp)
	movq 	-168(%rbp), %rdi
	call	printStr
	movl	%eax, -176(%rbp)
	movq 	$.LC8, -180(%rbp)
	movq 	-180(%rbp), %rdi
	call	printStr
	movl	%eax, -188(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -192(%rbp)
	movq 	$.LC9, -196(%rbp)
	movq 	-196(%rbp), %rdi
	call	printStr
	movl	%eax, -204(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -208(%rbp)
	movq 	$.LC10, -212(%rbp)
	movq 	-212(%rbp), %rdi
	call	printStr
	movl	%eax, -220(%rbp)
	movq 	-160(%rbp), %rdi
	call	printInt
	movl	%eax, -224(%rbp)
	movq 	$.LC11, -228(%rbp)
	movq 	-228(%rbp), %rdi
	call	printStr
	movl	%eax, -236(%rbp)
	movq 	-24(%rbp), %rdi
	movq 	-36(%rbp), %rsi
	call	max
	movl	%eax, -244(%rbp)
	movl	-244(%rbp), %eax
	movl 	%eax, -240(%rbp)
	movq 	$.LC12, -248(%rbp)
	movq 	-248(%rbp), %rdi
	call	printStr
	movl	%eax, -256(%rbp)
	movq 	$.LC13, -260(%rbp)
	movq 	-260(%rbp), %rdi
	call	printStr
	movl	%eax, -268(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -272(%rbp)
	movq 	$.LC14, -276(%rbp)
	movq 	-276(%rbp), %rdi
	call	printStr
	movl	%eax, -284(%rbp)
	movq 	-36(%rbp), %rdi
	call	printInt
	movl	%eax, -288(%rbp)
	movq 	$.LC15, -292(%rbp)
	movq 	-292(%rbp), %rdi
	call	printStr
	movl	%eax, -300(%rbp)
	movq 	-240(%rbp), %rdi
	call	printInt
	movl	%eax, -304(%rbp)
	movq 	$.LC16, -308(%rbp)
	movq 	-308(%rbp), %rdi
	call	printStr
	movl	%eax, -316(%rbp)
	movl	$0, %eax
	movl 	%eax, -320(%rbp)
	movl	-320(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main

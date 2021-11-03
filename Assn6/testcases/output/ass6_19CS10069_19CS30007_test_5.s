	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_5.c"
	.text
	.section	.rodata
.LC0:
	.string	"Program to print fibonacci numbers upto 10\n"
.LC1:
	.string	"Fib("
.LC2:
	.string	") = "
.LC3:
	.string	"\n"
	.text
	.globl	fib
	.type	fib, @function
fib: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$72, %rsp
	movq	%rdi, -20(%rbp)
	movl	$1, %eax
	movl 	%eax, -28(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jle .L1
	jmp .L2
.L1: 
	movl	-20(%rbp), %eax
	movl 	%eax, -24(%rbp)
	jmp .L3
.L2: 
	movl	$1, %eax
	movl 	%eax, -36(%rbp)
	movl 	-20(%rbp), %eax
	movl 	-36(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -40(%rbp)
	movq 	-40(%rbp), %rdi
	call	fib
	movl	%eax, -44(%rbp)
	movl	$2, %eax
	movl 	%eax, -48(%rbp)
	movl 	-20(%rbp), %eax
	movl 	-48(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -52(%rbp)
	movq 	-52(%rbp), %rdi
	call	fib
	movl	%eax, -56(%rbp)
	movl 	-44(%rbp), %eax
	movl 	-56(%rbp), %edx
	addl 	%edx, %eax
	movl 	%eax, -60(%rbp)
	movl	-60(%rbp), %eax
	movl 	%eax, -24(%rbp)
.L3: 
	movl	-24(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	fib, .-fib
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
	subq	$116, %rsp

	movq 	$.LC0, -32(%rbp)
	movq 	-32(%rbp), %rdi
	call	printStr
	movl	%eax, -40(%rbp)
	nop
	movl	$1, %eax
	movl 	%eax, -48(%rbp)
	movl	-48(%rbp), %eax
	movl 	%eax, -24(%rbp)
.L4: 
	movl	$10, %eax
	movl 	%eax, -56(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jle .L6
	jmp .L7
.L5: 
	movl	-24(%rbp), %eax
	movl 	%eax, -60(%rbp)
	addl 	$1, -24(%rbp)
	jmp .L4
.L6: 
	movq 	-24(%rbp), %rdi
	call	fib
	movl	%eax, -64(%rbp)
	movl	-64(%rbp), %eax
	movl 	%eax, -28(%rbp)
	movq 	$.LC1, -72(%rbp)
	movq 	-72(%rbp), %rdi
	call	printStr
	movl	%eax, -80(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -84(%rbp)
	movq 	$.LC2, -88(%rbp)
	movq 	-88(%rbp), %rdi
	call	printStr
	movl	%eax, -96(%rbp)
	movq 	-28(%rbp), %rdi
	call	printInt
	movl	%eax, -100(%rbp)
	movq 	$.LC3, -104(%rbp)
	movq 	-104(%rbp), %rdi
	call	printStr
	movl	%eax, -112(%rbp)
	jmp .L5
.L7: 
	movl	$0, %eax
	movl 	%eax, -44(%rbp)
	movl	-44(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main

	.file	"./testcases/input/ass6_19CS10069_19CS30007_test_8.c"
	.text
	.section	.rodata
.LC0:
	.string	"\nHello World\n"
.LC1:
	.string	"If executed correctly\n"
.LC2:
	.string	"If executed incorrectly\n"
.LC3:
	.string	"else if executed correctly\n"
.LC4:
	.string	"else executed incorrectly\n"
.LC5:
	.string	"if executed correctly\n"
.LC6:
	.string	"Else executed incorrectly\n"
.LC7:
	.string	"If executed incorrectly\n"
.LC8:
	.string	"else if executed incorrectly\n"
.LC9:
	.string	"else executed correctly\n"
.LC10:
	.string	"else executed incorrectly\n"
	.text
	.globl	main
	.type	main, @function
main: 
.LFB0:
	.cfi_startproc
	pushq 	%rbp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movq 	%rsp, %rbp
	.cfi_def_cfa_register 5
	subq	$212, %rsp

	movl	$707, %eax
	movl 	%eax, -28(%rbp)
	movl	-28(%rbp), %eax
	movl 	%eax, -24(%rbp)
	movq 	-24(%rbp), %rdi
	call	printInt
	movl	%eax, -32(%rbp)
	movq 	$.LC0, -36(%rbp)
	movq 	-36(%rbp), %rdi
	call	printStr
	movl	%eax, -44(%rbp)
	movl	$707, %eax
	movl 	%eax, -48(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-48(%rbp), %eax
	je .L1
	jmp .L2
.L1: 
	nop
	movq 	$.LC1, -92(%rbp)
	movq 	-92(%rbp), %rdi
	call	printStr
	movl	%eax, -100(%rbp)
	jmp .L2
.L2: 
	movl	$707, %eax
	movl 	%eax, -52(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jne .L3
	jmp .L4
.L3: 
	nop
	movq 	$.LC2, -104(%rbp)
	movq 	-104(%rbp), %rdi
	call	printStr
	movl	%eax, -112(%rbp)
	jmp .L8
.L4: 
	movl	$500, %eax
	movl 	%eax, -56(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jg .L5
	jmp .L7
.L5: 
	movl	$999, %eax
	movl 	%eax, -60(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-60(%rbp), %eax
	jl .L6
	jmp .L7
.L6: 
	nop
	movq 	$.LC3, -116(%rbp)
	movq 	-116(%rbp), %rdi
	call	printStr
	movl	%eax, -124(%rbp)
	jmp .L8
.L7: 
	nop
	movq 	$.LC4, -128(%rbp)
	movq 	-128(%rbp), %rdi
	call	printStr
	movl	%eax, -136(%rbp)
.L8: 
	movl	$900, %eax
	movl 	%eax, -64(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-64(%rbp), %eax
	jg .L10
	jmp .L9
.L9: 
	movl	$800, %eax
	movl 	%eax, -68(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-68(%rbp), %eax
	jl .L10
	jmp .L11
.L10: 
	nop
	movq 	$.LC5, -140(%rbp)
	movq 	-140(%rbp), %rdi
	call	printStr
	movl	%eax, -148(%rbp)
	jmp .L12
.L11: 
	nop
	movq 	$.LC6, -152(%rbp)
	movq 	-152(%rbp), %rdi
	call	printStr
	movl	%eax, -160(%rbp)
.L12: 
	movl	$1000, %eax
	movl 	%eax, -72(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-72(%rbp), %eax
	jg .L14
	jmp .L13
.L13: 
	movl	$200, %eax
	movl 	%eax, -76(%rbp)
	movl	-24(%rbp), %eax
	cmpl	-76(%rbp), %eax
	je .L14
	jmp .L15
.L14: 
	nop
	movq 	$.LC7, -164(%rbp)
	movq 	-164(%rbp), %rdi
	call	printStr
	movl	%eax, -172(%rbp)
	jmp .L19
.L15: 
	movl	$7, %eax
	movl 	%eax, -80(%rbp)
	movl 	-24(%rbp), %eax
	movl 	-80(%rbp), %edx
	subl 	%edx, %eax
	movl 	%eax, -84(%rbp)
	movl	$700, %eax
	movl 	%eax, -88(%rbp)
	movl	-84(%rbp), %eax
	cmpl	-88(%rbp), %eax
	jne .L16
	jmp .L17
.L16: 
	nop
	movq 	$.LC8, -176(%rbp)
	movq 	-176(%rbp), %rdi
	call	printStr
	movl	%eax, -184(%rbp)
	jmp .L19
.L17: 
	nop
	movq 	$.LC9, -188(%rbp)
	movq 	-188(%rbp), %rdi
	call	printStr
	movl	%eax, -196(%rbp)
	jmp .L19
.L18: 
	nop
	movq 	$.LC10, -200(%rbp)
	movq 	-200(%rbp), %rdi
	call	printStr
	movl	%eax, -208(%rbp)
	movl	-24(%rbp), %eax
	cmpl	0(%rbp), %eax
	je .L18
	jmp .L17
.L19: 
	movl	-24(%rbp), %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main

	.file	"Ass1.c"							# name of the C source file
	.text									# Section where our code is stored 
	.section	.rodata							# Section containing read-only data
	.align 8								# Align with 8-byte boundary
.LC0:										# Label of f-string with 1st printf
	.string	"Enter how many elements you want:"				# The string to be printed
.LC1:										# Label of the f-string with 1st scanf
	.string	"%d"								# The string to be printed
.LC2:										# Label of string with 2nd printf
	.string	"Enter the %d elements:\n"					# The string to be printed
.LC3:										# Label of string with 3rd printf
	.string	"\nEnter the item to search"					# The string to be printed
.LC4:										# Label of string with 4th printf
	.string	"\n%d found in position: %d\n"					# The string to be printed
	.align 8								# Align with 8 byte boundary
.LC5:										# Label of string with 5th printf
	.string	"\nItem is not present in the list." 				# The string to be printed
	.text									# Section of type text
	.globl	main								# Declare that main is global
	.type	main, @function							# Define the type of main to be a function
main:										# Beginning of the main function
.LFB0:
	.cfi_startproc								
	endbr64
	pushq	%rbp								# Save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp							# Set new stack base pointer rbp = rsp
	.cfi_def_cfa_register 6
	subq	$432, %rsp							# Create space in stack frame (depending upon size of local variables (432 bytes here)
	movq	%fs:40, %rax							# Segment addressing. fs is a segment register and it reads 64 bytes from address fs:40
	movq	%rax, -8(%rbp)							# Set [rbp - 8] to rax
	xorl	%eax, %eax							# Set eax to 0 i.e. clear the register eax before calling printf
	leaq	.LC0(%rip), %rdi						# Loads the Effective Address (LEA quad) of LC0 inside of rdi (We load the memory address and not the value and the destination is the rdi register) which is then loaded into printf
	call	puts@PLT							# Call the printf function
	leaq	-432(%rbp), %rax						# Load effective address of [rbp - 432] into rax (address of n) . Note that we pass the address in scanf
	movq	%rax, %rsi							# Set rsi = rax
	leaq	.LC1(%rip), %rdi						# Load effective address of .LC1(%rip) which is the string loaded into scanf
	movl	$0, %eax							# Set eax to 0 i.e. clear the register eax before calling scanf
	call	__isoc99_scanf@PLT						# Call scanf and store return value in eax
	movl	-432(%rbp), %eax						# Set eax to [rbp - 432] (for printing n)
	movl	%eax, %esi							# Set esi to eax
	leaq	.LC2(%rip), %rdi						# Load effective address of .LC2(%rip) which is the string loaded into printf
	movl	$0, %eax							# Set eax to 0 i.e. clear eax before calling printf as it will store the return value
	call	printf@PLT							# Call printf function
	movl	$0, -424(%rbp)							# Set [rbp - 424] = 0 which is basically setting i = 0 in the for loop (initialization)
	jmp	.L2 								# Jump to label .L2 
.L3:										# Label representing the inner section of the for loop for reading elements
	leaq	-416(%rbp), %rax						# Load effective address of [rbp - 416] to rax which is the address of the 0th element of the array. Note that we use the address for reading in the elements
	movl	-424(%rbp), %edx						# Set edx to [rbp - 424](i) to send the index where current element will be stored
	movslq	%edx, %rdx							# Move and sign-extend the value in edx(32 bit)	to rdx(64 bit)
	salq	$2, %rdx							# Left shift the value in rdx by two bits (i*4) since size of integer is 4 bytes
	addq	%rdx, %rax							# Add the value in rdx to rax to get the target memory location for that element
	movq	%rax, %rsi							# Set rsi(a[i]) to rax for sending to scanf
	leaq	.LC1(%rip), %rdi						# Load effective address of .LC1(%rip) which is the string loaded into scanf
	movl	$0, %eax							# Set eax to 0 i.e. clear the contents before calling scanf
	call	__isoc99_scanf@PLT						# Call scanf
	addl	$1, -424(%rbp)							# Add 1 to [rbp - 424](i) which is basically i++
.L2:										# Label representing condition check in for loop
	movl	-432(%rbp), %eax						# Set eax to [rbp - 432] (where n was stored)
	cmpl	%eax, -424(%rbp)						# Compare eax(n) with [rbp - 424](i)
	jl	.L3								# Jump to .L3 if i < n
	movl	-432(%rbp), %edx						# Set edx to [rbp - 432](n) 
	leaq	-416(%rbp), %rax						# Load effective address of [rbp - 416] to rax which is the address of the 0th element of the array. This is because we are passing the address to the function 
	movl	%edx, %esi							# Set esi to eax which is the 2nd parameter of the function
	movq	%rax, %rdi							# Set rdi to rax which is the 1st parameter of the function
	call	inst_sort							# Call the insertion sort function
	leaq	.LC3(%rip), %rdi						# Load effective address of .LC3(%rip) into rdi for loading the string into printf
	call	puts@PLT							# Call the printf function
	leaq	-428(%rbp), %rax						# Load effective address of [rbp - 428] to rax which is the place where item to be searched is stored
	movq	%rax, %rsi							# Set rsi to rax(item)
	leaq	.LC1(%rip), %rdi						# Load effective address of .LC1(%rip$) to rdi for for calling the scanf function
	movl	$0, %eax							# Set eax to 0 i.e. clear the contents before calling scanf 
	call	__isoc99_scanf@PLT						# Call the scanf function
	movl	-428(%rbp), %edx						# Set edx to [rbp - 428](item) (3rd parameter of function bsearch)
	movl	-432(%rbp), %ecx						# Set ecx to [rbp - 432](n)
	leaq	-416(%rbp), %rax						# Load effective address of [rbp - 416] into rax which is the address of the 0th element of the array
	movl	%ecx, %esi							# Set esi to ecx(n) (2nd parameter(n) of function bsearch)
	movq	%rax, %rdi							# Set rdi to rax(a) (1st parameter(a) of function bsearch)
	call	bsearch								# Call the binary search function
	movl	%eax, -420(%rbp)						# Set [rbp - 420](loc) to eax( stores return value from bsearch function)
	movl	-420(%rbp), %eax						# Set eax to [rbp - 420](loc)
	cltq									# Convert long to quad (eax was originally 32 bit)
	movl	-416(%rbp,%rax,4), %edx						# Loading the address of the element at loc by doing (rbp - 416 + 4*rax) where [rbp - 416] is the base address and rax is loc
	movl	-428(%rbp), %eax						# Set eax to [rbp - 428](item)
	cmpl	%eax, %edx							# Compare a[loc] and item 
	jne	.L4								# Jump to .L4 if a[loc] != item
	movl	-420(%rbp), %eax						# Set eax to [rbp - 420](loc)
	leal	1(%rax), %edx							# Load effective address of rax and offset by 1 to get loc + 1 
	movl	-428(%rbp), %eax						# Set eax to [rbp - 428](item)
	movl	%eax, %esi							# Set esi to eax(item)
	leaq	.LC4(%rip), %rdi						# Load effective address of .LC4(%rip) to rdi for loading the string into printf
	movl	$0, %eax							# Set eax to 0 i.e. clear the contents before calling printf
	call	printf@PLT							# Call the printf function
	jmp	.L5								# Jump to .L5
.L4:											
	leaq	.LC5(%rip), %rdi						# Load effective address of .LC5(%rip) which is the string loaded to printf
	call	puts@PLT							# Call the printf function
.L5:
	movl	$0, %eax							# Set eax to 0 i.e. clear the contents
	movq	-8(%rbp), %rcx							# Set rcx to [rbp - 8] 
	xorq	%fs:40, %rcx							# Segment addressing, rs is a segment register and we're xor-ing the contents in address fs:40 with rcx
	je	.L7								# If equal, jump to .L7
	call	__stack_chk_fail@PLT				
.L7:
	leave									# Put ebp to esp and restore state of esp to the original state
	.cfi_def_cfa 7, 8
	ret									# Return from function
	.cfi_endproc
.LFE0:
	.size	main, .-main				
	.globl	inst_sort							# Delare inst_sort to be global
	.type	inst_sort, @function						# Declare inst_sort to be of type function
inst_sort:									# Beginning of insertion sort function
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp								# Save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp							# Set the base pointer to point at rsp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)							# Set [rbp - 24] to rdi(address of 0th element). This is essentially copying the parameters of the function
	movl	%esi, -28(%rbp)							# Set [rbp - 28] to esi(n) (note we're using long instead of quad to signify 32 bits)
	movl	$1, -8(%rbp)							# Set [rbp - 8](j) to 1 which is the initialization in for loop
	jmp	.L9								# Jump to .L9
.L13:										# Label representing the inner part of 1st for loop
	movl	-8(%rbp), %eax							# Set eax to [rbp - 8](j)
	cltq									# Convert long to quad (eax was 32 bits initially)
	leaq	0(,%rax,4), %rdx						# Load effective address of the current array element (4*j) to rdx
	movq	-24(%rbp), %rax							# Set rax to [rbp - 24] which is the 0th element of the array
	addq	%rdx, %rax							# Add the value in rdx to rax to get the address of the element (rax + 4*j)
	movl	(%rax), %eax							# Set eax to rax
	movl	%eax, -4(%rbp)							# Set [rbp - 4](k) to eax basically equal to num[j]
	movl	-8(%rbp), %eax							# Set eax to [rbp - 8](j)
	subl	$1, %eax							# Subtract 1 from eax(j)
	movl	%eax, -12(%rbp)							# Set [rbp - 12](i) to eax(j - 1) which is the initialization of the inner for loop
	jmp	.L10								# Jump to .L10
.L12:										# Label denoting the inner part of the second for loop
	movl	-12(%rbp), %eax							# Set eax to [rbp - 12](i) 
	cltq									# Convert long to quad since eax was 32 bit
	leaq	0(,%rax,4), %rdx						# Load effective address of the ith element into rdx by doing 4*i
	movq	-24(%rbp), %rax							# Set rax to [rbp - 24] which is the address of the 0th element of the array
	addq	%rdx, %rax							# Add the value in rdx to rax to go to the ith element
	movl	-12(%rbp), %edx							# Set edx to [rbp - 12](i)
	movslq	%edx, %rdx							# Move and sign extend edx(32 bit) to rdx(64 bit)
	addq	$1, %rdx							# Add the constant 1 to rdx(i + 1)
	leaq	0(,%rdx,4), %rcx						# Load effective address of (i + 1)th element into rcx by doing 4*(i + 1) 
	movq	-24(%rbp), %rdx							# Set rdx to [rbp - 24] which is the address of the 0th element of the array
	addq	%rcx, %rdx							# Add the value in rcx to rdx to go to the (i + 1)th element
	movl	(%rax), %eax							# Set rax(num[i]) to eax
	movl	%eax, (%rdx)							# Set rdx(num[i+1]) to eax(num[i])
	subl	$1, -12(%rbp)							# Subtract 1 from [rbp - 12](i) basically i--
.L10:										# Label representing condition check of the second for loop
	cmpl	$0, -12(%rbp)							# Compare 0 with [rbp - 12](i)
	js	.L11								# Jump to .L11 if i < 0. Here it evaluates i - 0 and checks if the result is negative. This is indicated by a signed flag
	movl	-12(%rbp), %eax							# Set eax to [rbp - 12](i)
	cltq									# Convert long to quad as eax is 32 bit and we assigned a 64 bit value to it
	leaq	0(,%rax,4), %rdx						# Load effective address of the array element into rdx (4*i) 
	movq	-24(%rbp), %rax							# Set rax to [rbp - 24] which denotes the beginning of the array 
	addq	%rdx, %rax							# Add rdx to rax to access the ith element
	movl	(%rax), %eax							# Set eax to rax(num[i])
	cmpl	%eax, -4(%rbp)							# Compare eax(num[i]) and [rbp - 4](k)
	jl	.L12								# If k < num[i], jump to .L12
.L11:										# Label denoting the part of the first for loop after coming out of the second one
	movl	-12(%rbp), %eax							# Set eax to [rbp - 12](i)
	cltq									# Convert long to quad aseax is 32 bit ans we assigned 64 bit value to it
	addq	$1, %rax							# Add 1 to rax(i + 1)
	leaq	0(,%rax,4), %rdx						# Load effective address of (i + 1)th element into rdx by doing 4*(i + 1)
	movq	-24(%rbp), %rax							# Set rax to [rbp - 24] which is the address of the 0th element of the array
	addq	%rax, %rdx							# Add the value in rax to rdx to access the (i + 1)th element
	movl	-4(%rbp), %eax							# Set the value in eax to [rbp - 4](k)
	movl	%eax, (%rdx)							# Set rdx(num[i+1]) to eax(k)
	addl	$1, -8(%rbp)							# Add 1 to [rbp - 8](j) basically j++
.L9:										# Label representing condition check in the first for loop
	movl	-8(%rbp), %eax							# Set eax to [rbp - 8](j)
	cmpl	-28(%rbp), %eax							# Compare [rbp - 28](n) with eax
	jl	.L13								# If less, i.e. j < n, jump to .L13
	nop									# No operation.
	nop									# No operation. This depends on the compiler
	popq	%rbp								# Pop the base pointer from the stack frame
	.cfi_def_cfa 7, 8
	ret									# return from function
	.cfi_endproc								
.LFE1:
	.size	inst_sort, .-inst_sort				
	.globl	bsearch								# declare that bsearch is global
	.type	bsearch, @function						# define the type of bsearch to be a function
bsearch:									# Beginning of binary search function
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp								# Save old base pointer
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp							# set rbp to rsp, so that the base pointer points to the current stack pointer
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)							# Set [rbp - 24](a) to rdi(address of 0th element of the array)(top). Here we're copying the formal parameters in the function call.
	movl	%esi, -28(%rbp)							# Set [rbp - 28](n) to esi(n)
	movl	%edx, -32(%rbp)							# Set [rbp - 32](item) to edx(item to be searched)
	movl	$1, -8(%rbp)							# Set [rbp - 8](bottom) to 1
	movl	-28(%rbp), %eax							# Set eax to [rbp - 28](n)
	movl	%eax, -12(%rbp)							# Set [rbp - 12](top) to eax(n)
.L18:										# Beginning of the do-while loop
	movl	-8(%rbp), %edx							# Set edx to [rbp - 8](bottom)
	movl	-12(%rbp), %eax							# Set eax to [rbp - 12](top)
	addl	%edx, %eax							# Add edx to eax (eax = top + bottom)
	movl	%eax, %edx							# Set edx to eax
	shrl	$31, %edx							# Right shift edx by 31 bits (all 0s) esentially clearing it
	addl	%edx, %eax							# Add edx to eax(edx = top + bottom)
	sarl	%eax								# Right shift eax by 1 bit basically divide by 2
	movl	%eax, -4(%rbp)							# Set [rbp - 4](mid) to eax
	movl	-4(%rbp), %eax							# Set eax to [rbp - 4](mid)
	cltq									# Convert long to quad as eax is 32 bit ans we assigned 64 bit value to it
	leaq	0(,%rax,4), %rdx						# Load effective address of the element at index mid by doing 4*mid
	movq	-24(%rbp), %rax							# Set rax to [rbp - 24](address of 0th element of the array)
	addq	%rdx, %rax							# Add rdx(4*mid) to rax. Basically pointer arithmetic
	movl	(%rax), %eax							# Set eax to rax(a[mid])
	cmpl	%eax, -32(%rbp)							# Compare eax(a[mid]) and [rbp - 32](item) {first if statement}
	jge	.L15								# Jump to .L15 if item >= a[mid]
	movl	-4(%rbp), %eax							# Set eax to [rbp - 4](mid) {Here item < mid holds}
	subl	$1, %eax							# Subtract 1 from eax(mid - 1)
	movl	%eax, -12(%rbp)							# Set [rbp - 12](top) to eax(mid - 1)
	jmp	.L16								# Jump to .L16
.L15:										# else if part
	movl	-4(%rbp), %eax							# Set eax to [rbp - 4](mid)
	cltq									# Convert long to quad as eax is 32 bit ans we assigned 64 bit value to it
	leaq	0(,%rax,4), %rdx						# Load effective address of the element at index mid by doing 4*mid
	movq	-24(%rbp), %rax							# Set rax to [rbp - 24](address of the 0th element of the array)
	addq	%rdx, %rax							# Add rdx(4*mid) to rax
	movl	(%rax), %eax							# Set eax to rax(a[mid])
	cmpl	%eax, -32(%rbp)							# Compare eax(a[mid]) and [rbp - 32](item)
	jle	.L16								# Jump to .L16 if item <= a[mid]
	movl	-4(%rbp), %eax							# Set eax to [rbp - 4](mid) {Here item > mid holds}
	addl	$1, %eax							# Add 1 to eax(mid + 1)
	movl	%eax, -8(%rbp)							# Set [rbp - 8](bottom) to eax(mid + 1)
.L16:										# condition check after executing an iteration of the do-while loop
	movl	-4(%rbp), %eax							# Set eax to [rbp - 4](mid)
	cltq									# Convert long to quad as eax is 32 bit ans we assigned 64 bit value to it
	leaq	0(,%rax,4), %rdx						# Load effective address of the element at index mid by doing 4*mid
	movq	-24(%rbp), %rax							# Set rax to [rbp - 24](address of the 0th element of the array)
	addq	%rdx, %rax							# Add rdx(4*mid) to rax
	movl	(%rax), %eax							# Set eax to rax(a[mid])
	cmpl	%eax, -32(%rbp)							# Compare eax(a[mid]) and [rbp - 32](item)
	je	.L17								# Jump to .L17 if a[mid] = item
	movl	-8(%rbp), %eax							# Set eax to [rbp - 8](bottom)
	cmpl	-12(%rbp), %eax							# Compare eax(bottom) with [rbp - 12](top)
	jle	.L18								# Jump to .L18 if bottom <= top i.e. continue with the loop
.L17:
	movl	-4(%rbp), %eax							# Set eax to [rbp - 4](mid) return value from function
	popq	%rbp								# Pop base pointer from the stack
	.cfi_def_cfa 7, 8
	ret									# return from function
	.cfi_endproc								
.LFE2:
	.size	bsearch, .-bsearch
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"			# This is the OS info(Ubuntu) along with gcc version (9.3.0)
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:

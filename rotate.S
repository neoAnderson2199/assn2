.global rotate

rotate: 
	#rdi = val
	#rsi = num
	#rdx = direction
	#rcx, rax, and r8 are for scratch

do_start: 
	xor %r8, %r8 
	cmp $1, %rdx
	je for_one
	cmp $0, %rdx
	je for_zero	
for_one:	
	rol $1, %rdi
	dec %rsi
	jz done
for_zero:
	ror $1, %rdi
	dec %rsi
	jz done
done:
	mov %rdi, %rax
	ret

.global rotate

rotate:
	#rdi = val
	#rsi = num
	#rdx = direction
	#rcx, rax, and r8 are for scratch

start:
	cmp $1, %rdx
	je for_one
	jmp for_zero
	
for_one:
	rol $1, %rdi
	dec %rsi
	jz done
	jmp for_one

for_zero:
	ror $1, %rdi
	dec %rsi
	jz done
	jmp for_zero
done:
	mov %rdi, %rax
	ret

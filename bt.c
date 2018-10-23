#include <stdio.h>

void print_backtrace(int count) {
	}

void prec_frames() {
	//curr_rbp -> get current rbp
	//while count > 0:
	//	ret_addr <- get current return address which is in (curr_rbp + 4)
	//	print ret_addr
	//	if ret_addr is an address in main
	//	return
	//curr_rbp <- get rbp for previous frame, which is in (curr_rbp)
	//decrement count
}



void print_main(){
	char *main = &main;
	char *ret = 0xc3;
	while (*main != ret) {
		printf("%x\n\n", main);
		*main+=0x4;
	}
}	

int main {
	return 0;
}

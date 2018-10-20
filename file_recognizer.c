#include "file_recognizer.h"

int file_recognizer(char *arr, char ftype[]) {
	size_t l = sizeof(ftype);
	int count = 0;
	for (int i = 0; i < l; i++)
		if (arr[i] == ftype[i]) count++;
	if (count == l) return 1;
	else return 0;
}	

int main(int x, char **y) {
	FILE *in = fopen(y[1], "r");
	char arr[8];
	
	fscanf(in, "%c %c %c %c %c %c %c %c", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7]);
	
	if ((file_recognizer(arr, GIF1) == 1) || (file_recognizer(arr, GIF2) == 1))
		printf("This is a GIF file.");
	else if ((file_recognizer(arr, ELF) == 1))
		printf("This is an ELF file.");
	else if ((file_recognizer(arr, PDF) == 1))
		printf("This is a PDF file.");
	else if ((file_recognizer(arr, ZIP) == 1))
		printf("This is a ZIP file.");
	else if ((file_recognizer(arr, JAVA) == 1))
		printf("This is a Java class file.");
	else if ((file_recognizer(arr, PNG) == 1))
		printf("This is a PNG file.");
	else printf("File type unknown.");

	return 0;
}

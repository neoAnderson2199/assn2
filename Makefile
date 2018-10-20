all: file_recognizer

file_recognizer: file_recognizer.o
	gcc file_recognizer.o -o file_recognizer
file_recognizer.o: file_recognizer.c file_recognizer.h
	gcc -I . -c file_recognizer.c
clean: 
	rm -rf *.o
	rm file_recognizer

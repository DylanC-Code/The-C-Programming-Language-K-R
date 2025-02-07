2-1: 2-1.exe
	./2-1.exe

2-1.exe: 2-1.o
	gcc -o 2-1.exe 2-1.o

2-1.o: 2-1.c
	gcc -c 2-1.c

2-3: 2-3.exe
	./2-3.exe f5
	./2-3.exe 0xf5
	./2-3.exe 0Xf5
	./2-3.exe ffffff
	./2-3.exe xf5

2-3.exe: 2-3.o
	gcc -o 2-3.exe 2-3.o

2-3.o: 2-3.c
	gcc -c 2-3.c

clean:
	rm *.exe *.o
CC = g++

all: s14.o s15.o s16.o s17.o s18.o s19.o s20.o s22.o s14 s15 s16 s17 s18 s19 s20 s22
	
s14.o: hw05.h s14.cpp
	$(CC) -c s14.cpp -o s14.o 
s15.o: hw05.h s15.cpp
	$(CC) -c s15.cpp -o s15.o
s16.o: hw05.h s16.cpp
	$(CC) -c s16.cpp -o s16.o
s17.o: hw05.h s17.cpp
	$(CC) -c s17.cpp -o s17.o
s18.o: hw05.h s18.cpp
	$(CC) -c s18.cpp -o s18.o
s19.o: hw05.h s19.cpp
	$(CC) -c s19.cpp -o s19.o
s20.o: hw05.h s20.cpp
	$(CC) -c s20.cpp -o s20.o
s22.o: hw05.h s22.cpp
	$(CC) -c s22.cpp -o s22.o

s14 : s14.cpp
	$(CC) -g $^ -o $@
s15 : s15.cpp
	$(CC) -g $^ -o $@
s16 : s16.cpp
	$(CC) -g $^ -o $@
s17 : s17.cpp
	$(CC) -g $^ -o $@
s18 : s18.cpp
	$(CC) -g $^ -o $@
s19 : s19.cpp
	$(CC) -g $^ -o $@
s20 : s20.cpp
	$(CC) -g $^ -o $@
s22 : s22.cpp
	$(CC) -g $^ -o $@

tar: 
	tar cf hw05.tar hw05.h *.cpp makefile *.scr

clean:
	rm *.o s14 s15 s16 s17 s18 s19 s20 s22

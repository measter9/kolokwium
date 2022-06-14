all: parent child main

parent: parent.c
	gcc -c parent.c
	ar rs parent.a parent.o
child: child.c
	gcc -c child.c
	ar rs child.a child.o
main: main.c
	gcc -o zaliczenie main.c
clean:
	rm -f *.o


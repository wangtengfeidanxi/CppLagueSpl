main:main.o
	g++ -o $@ $^
main.o:main.c
	g++ -c $<

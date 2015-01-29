main:main.o deputy.o class.o new.o fn.o classVirtul.o mystring.o
	g++ -o $@ -g -pg $^
#main.o:main.cpp
#	g++ -c $<
#deputy.o:deputy.cpp
#	g++ -c $<
.cpp.o:
	g++ -pg -g -c $<

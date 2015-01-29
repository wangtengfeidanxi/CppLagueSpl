<<<<<<< HEAD
main:main.o deputy.o class.o new.o fn.o classVirtul.o mystring.o
	g++ -o $@ -g -pg $^
=======
main:main.o deputy.o class.o new.o fn.o classVirtul.o mystring.o stl-learn.o
	g++ -o $@ -g $^
>>>>>>> 9ebbdd2ddd7b86ec4c0dba88d037f7ff96d11722
#main.o:main.cpp
#	g++ -c $<
#deputy.o:deputy.cpp
#	g++ -c $<
.cpp.o:
	g++ -pg -g -c $<

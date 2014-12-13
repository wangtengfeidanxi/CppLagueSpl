main:main.o deputy.o class.o new.o fn.o
	g++ -o $@ -g $^
#main.o:main.cpp
#	g++ -c $<
#deputy.o:deputy.cpp
#	g++ -c $<
.cpp.o:
	g++ -g -c $<

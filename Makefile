main:main.o deputy.o class.o new.o 
	g++ -o $@ $^
#main.o:main.cpp
#	g++ -c $<
#deputy.o:deputy.cpp
#	g++ -c $<
.cpp.o:
	g++ -c $<

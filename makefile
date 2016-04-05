lab3: lab3.o
		g++ -o lab3 lab3.o
lab3.o: lab3.cpp
		g++ -c lab3.cpp

B: lab3-B.o Clock.o
		g++ -o lab3-B lab3-B.o Clock.o
Clock.o: Clock.h Clock.cpp
		g++ -c Clock.cpp
lab3-B.o: lab3-B.cpp Clock.h
		g++ -c lab3-B.cpp
clean:
		rm -f *.o

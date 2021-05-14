all: lab06_map lab06_set

lab06_set:	lab06_set.o
				g++ -o  main lab06_set.o -std=c++11

lab06_set.o:	lab06_set.cpp d_state.h
				g++ -c lab06_set.cpp -std=c++11

lab06_map:	lab06_map.o
				g++ -o  main2 lab06_map.o -std=c++11

lab06_map.o:	lab06_map.cpp d_state.h
				g++ -c lab06_map.cpp -std=c++11

clean:
				-rm *.o $(objects)
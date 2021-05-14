lab_09:	lab_09.o
				g++ -o  main lab_09.o -std=c++11

lab_09.o:	lab_09.cpp d_galgs.h d_graph.h d_util.h d_except.h d_pqueue.h d_heap.h
				g++ -c lab_09.cpp -std=c++11

clean:
				-rm *.o $(objects)
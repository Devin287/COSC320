lab_11:	lab_11.o
				g++ -o  main lab_11.o -std=c++11

lab_11.o:	lab_11.cpp d_graph.h d_util.h d_except.h d_pqueue.h d_heap.h d_galgs.h d_stree.h d_stiter.h
				g++ -c lab_11.cpp -std=c++11

clean:
				-rm *.o $(objects)
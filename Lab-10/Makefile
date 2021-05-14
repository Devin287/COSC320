lab_10:	lab_10.o
				g++ -o  main lab_10.o -std=c++11

lab_10.o:	lab_10.cpp d_graph.h d_util.h d_except.h d_pqueue.h d_heap.h d_galgs.h d_stree.h d_stiter.h
				g++ -c lab_10.cpp -std=c++11

clean:
				-rm *.o $(objects)
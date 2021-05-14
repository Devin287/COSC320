lab_08:	lab_08.o
				g++ -o  main lab_08.o -std=c++11

lab_08.o:	lab_08.cpp d_pqueue.h preqrec.h d_heap.h d_except.h
				g++ -c lab_08.cpp -std=c++11

clean:
				-rm *.o $(objects)
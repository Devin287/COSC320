
lab_05:	lab_05.o
				g++ -o  main lab_05.o -std=c++11

lab_05.o:	lab_05.cpp d_stiter.h d_random.h d_stree.h int.h d_except.h
				g++ -c lab_05.cpp -std=c++11

clean:
				-rm *.o $(objects)
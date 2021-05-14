lab_07:	lab_07.o
				g++ -o  main lab_07.o -std=c++11

lab_07.o:	lab_07.cpp d_hash.h d_hashf.h d_hiter.h
				g++ -c lab_07.cpp -std=c++11

clean:
				-rm *.o $(objects)
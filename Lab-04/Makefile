
lab_04:	lab_04.o
				g++ -o  main lab_04.o -std=c++11

lab_04.o:	lab_04.cpp d_tnode.h d_tnode1.h inf2pstf.h d_expsym.h d_except.h
				g++ -c lab_04.cpp -std=c++11

clean:
				-rm *.o $(objects)
#ifndef Integer_H
#define Integer_H

#include <iomanip>		// for setw()
#include <strstream>		// for format conversion
#include <string>			// node data formatted as a string
#include <queue>
#include <utility>		// pair class
#include <iostream>
#include "d_except.h"

class integer
{
	public:
		// constructor. initialize intValue and set count = 1
		integer(int n);

		// return intValue
		int getInt();
		

		// return count
		int getCount();
		

		// increment count
		void incCount();
		

		// compare integer objects by intValue
		friend bool operator< (const integer& lhs, const integer& rhs);

		friend bool operator== (const integer& lhs, const integer& rhs);
		
		// output object in format intValue (count)
		friend ostream& operator<< (ostream& ostr, const integer& obj);

		
	private:
		// the integer and its count
		int intValue;
		int count;
};

	integer::integer(int n){
		intValue = n;
		count = 0;
	}

	int integer::getInt(){
		return intValue;
	}

	void integer::incCount(){
		count++;
	}

	int integer::getCount(){
		return count;
	}

	bool operator< (const integer& lhs, const integer& rhs){
		if(lhs.intValue < rhs.intValue){
			return true;
		}
		else{
			return false;
		}
	}

	bool operator== (const integer& lhs, const integer& rhs){
		if(lhs.intValue == rhs.intValue){
			return true;
		}
		else{
			return false;
		}
	}

	 ostream& operator<< (ostream& ostr, const integer& obj){
		return ostr << obj.intValue << " " << "(" << obj.count << ")";
	}

#endif 

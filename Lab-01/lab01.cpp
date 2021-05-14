#include <iostream>
#include "deSelsort.h"


//Devin Schmidt
//COSC-320
//Description: Implements and tests double ended selection sort
int main(){

int arr[] = {13,5,2,25,47,17,8,21};
srand(time(NULL));

std::cout << "Printing array.."<< std::endl;
for(int i=0; i<8; i++)
{
    std::cout << " " << arr[i];
}

std::cout << std::endl;

//Sorting array
deSelsort::deSelSort(arr,8);

std::cout << "Printing array.."<< std::endl;
for(int i=0; i<8; i++)
{
    std::cout << " " << arr[i];
}

std::cout << std::endl;
return 0;
}
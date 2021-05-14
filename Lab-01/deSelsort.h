#ifndef DESELSORT_H
#define DESELSORT_H
#include <iostream>

namespace deSelsort
{
    //Declares funtions
    void deSelSort(int* arr,int n);
    
    //Swaps Elements
    void swap(int& x,int& y);
}

//Swaps Elements
void deSelsort::swap(int& x,int& y){
  int temp = x;
  x = y;
  y = temp;
}

//Double ended selection sort method
void deSelsort::deSelSort(int* arr, int n) 
{ 
    int pass = 1;
    for (int i=0, j=n-1; i<j; i++, j--) { 
        
        int min = arr[i], 
            max = arr[i], 
            minValue = i, 
            maxValue = i; 
        
        for (int k = i; k <= j; k++)  { 
            if (arr[k] > max) { 
                max = arr[k]; 
                maxValue = k; 
            } else if (arr[k] < min) { 
                minValue = k;
                min = arr[k]; 
                 
            } 
        } 
  
        //swapping min around
        deSelsort::swap(arr[i], arr[minValue]); 
  
        //Swapping max or min
        if (arr[minValue] == max){
          deSelsort::swap(arr[j], arr[minValue]);
        }  
             
        else{
          deSelsort::swap(arr[j], arr[maxValue]);
        } 

        //Printing each pass the sorting method swaps
        std::cout << "Pass "<< pass++ << ":";
        for(int f=0;f<n;f++){
          std::cout << " " << arr[f];
        }
        std::cout << std::endl;
    } 
} 

#endif
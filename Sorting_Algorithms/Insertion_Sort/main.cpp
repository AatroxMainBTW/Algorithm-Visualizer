#include "stdio.h"
#include "stdlib.h"
#include <iostream>
#include <functional>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int Insertion_Sort(int arr[],int n){

	int i, j, key;
	for (i = 0; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
	 	while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
		
	}
	
}


int main(){
	 int T[] = {50,23,9,18,61,32};
	 int arrSize = sizeof(T)/sizeof(T[0]);
	 Insertion_Sort(T,arrSize);
	 for(int i=0;i<arrSize;i++){
        std::cout << T[i] << " ";
     }
     return 0;
}
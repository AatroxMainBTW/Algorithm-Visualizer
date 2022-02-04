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

int Partition(int a[], int low, int high)
{
	int pivot, index, i;
	index = low;
	pivot = high;
 
	
	for(i=low; i < high; i++)
	{
		if(a[i] < a[pivot])
		{
			swap(&a[i], &a[index]);
			index++;
		}
	}
	swap(&a[pivot], &a[index]);

	return index;
}




int quick_sort(int a[], int low, int high){
    int median;

    if(low < high){
        median = Partition(a,0,high-1);
        quick_sort(a,low,median);
        quick_sort(a,median+1,high);
    }
    return 0;
}


int main(){
    std::cout << "Testing! ";
    int T[] = {50,23,9,18,61,32};
    int arrSize = sizeof(T)/sizeof(T[0]);
    quick_sort(T,0,arrSize);

    for(int i=0;i<arrSize;i++){
        std::cout << T[i] << " ";
    }
    return 0;
}
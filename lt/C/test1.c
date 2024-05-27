#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void insertSort(int a[], int N){
printf("Insert Sort\n");
}

void quickSort(int a[], int N){
printf("Quick Sort\n");
}

//Callback function
void sort(int a[], int N, void
(*f)(int [], int)){
f(a,N);
}

int main()
{
void (*f)(int[], int);
int a[] = {3, 2, 4, 5, 1};
//Chọn InsertSort
f = insertSort;
sort(a, 5, f);

//Chọn QuickSort
f = quickSort;
sort(a, 5, f);
printf("Done!");
}


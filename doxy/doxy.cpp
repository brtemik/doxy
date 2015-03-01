/// \file doxy.cpp
// doxy.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
 
/** \function to sort massive */
void quickSort(int arr[], int left, int right) //функция сортировки массива
{
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];
 
    /* partition */
    while (i <= j) {
        while (arr[i] < pivot)
        i++;
        while (arr[j] > pivot)
        j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };
 
    /* recursion */
    if (left < j)
    quickSort(arr, left, j);
    if (i < right)
    quickSort(arr, i, right);
 
}
/** \function to print massive */
void print(int arr[], int n) //функция вывода массива
{
    for (int i = 0; i <n; i++) {
    cout << arr[i] << " ";
    }
    cout << endl;
}
 /** \main body */
int main ()
{int n;
    
    int i;
    cout<<"Array Size: ";
    cin>> n;
    cout<<endl;
    int* arr=new int [n];
    for (i=0;i<n;i++) {
    cout << "Array[" << i+1 << "]: ";
    cin >>  arr[i];
    cout<<endl;
    }
    print(arr,n);
    quickSort(arr, 0, n-1);
    print(arr,n);
 
	_getch();
	return 0;
}




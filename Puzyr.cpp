// Пузырек.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

void puzyr(int* Mas, int Kolvo)
{
	bool exit = false;

	while (!exit)
	{
		exit = true;
		for (int i=0; i<Kolvo-1;i++)
			if (Mas[i]>Mas[i+1])
			{
				swap(Mas[i],Mas[i+1]);
				exit = false;
			}

	}
}


int _tmain(int argc, _TCHAR* argv[])
{
    cout << "enter the number of elements: ";
	int N;
	cin >> N;

	int *massiv = new int[N];
	for (int k=0; k<N; k++)
	{
		cout << "a"<<k<<"=";
		cin >> massiv[k];
	}
	cout<<"\n\n";
	cout<<"massiv_1: ";
	for (int k=0; k<N; k++)
	{
	cout<< massiv[k]<<"";
	}
	cout<< "\n\n";

	puzyr(massiv,N);

	cout<<"massiv_2: ";
	for (int k=0; k<N; k++)
	{
	cout<< massiv[k]<<"";
	}
	cout<< "\n\n";
	_getch();
	return 0;
}


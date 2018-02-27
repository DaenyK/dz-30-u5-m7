#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include "Header.h"

using namespace std;


void sixteen(int*a)
{
	int rez, count = 0, ostatok; int mas[10];

	do
	{
		rez = *a / 16;
		ostatok = *a % 16;
		mas[count] = ostatok;
		count++;
		ostatok = 0;
		*a = rez;
	} while (rez > 0);

	cout << "ваше число в шестнадцетиричном виде: ";
	for (int i = count-1; i >=0; i--)
	{
		if (mas[i]<10)
			cout << mas[i];
		else if (mas[i] == 10)
			cout << "A";
		else if (mas[i] == 11)
			cout << "B";
		else if (mas[i] == 12)
			cout << "C";
		else if (mas[i] == 13)
			cout << "D";
		else if (mas[i] == 14)
			cout << "E";
		else if (mas[i] == 15)
			cout << "F";
		else if (mas[i] == 16)
			cout << 10;
	}
	cout << endl;
}

int Age()
{
	int a;
	cout << "введите возраст: "; cin >> a;
	if (a >= 18 && a <= 30) return a;
	else Age();
}

void f(int a)
{
	int sum = 0, max = 0, numb;
	for (int i = 0; i < a; i++)
	{
		cout << "введите число: ";
		cin >> numb;
		sum += numb;
		if (numb > max)
			max = numb;
	}
	cout << "\nсумма введенных чисел: " << sum << endl;
	cout << "максимальное введенное число: " << max << endl;
}
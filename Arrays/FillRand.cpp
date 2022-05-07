#include"stdafx.h"

void FillRand(int arr[], const int n)
{
	//Заполняем случайными числами;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	//Заполняем случайными числами;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(float arr[], const int n)
{
	//Заполняем случайными числами;
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 1000) / 10;

	}
}
void FillRand(char arr[], const int n)
{
	//Заполняем случайными числами;
	for (char i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(long long arr[], const int n)
{
	//Заполняем случайными числами;
	for (long long i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

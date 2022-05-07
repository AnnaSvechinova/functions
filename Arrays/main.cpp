#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(long long arr[], const int n);


template<typename T>
void Print(T arr[], const int n);



template<typename T>
void Sort(T arr[], const int n);

template<typename T>
 T Sum(T arr[], const int size);


double average(int arr[], const int size);
float average(float arr[], const int size);
double average(double arr[], const int size);
long long average(long long  arr[], const int size);



void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	cout << ("Hello", "World") << endl;//Comma operator (оператор запятая) - позволяет поместить несколько выражений, 
	//в то место, где ожидается одно выражение. Выражения должны быть одного типа.
	//Оператор запятая возвращает значение последнего выражения (ассоциативность слева направо).

	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << average(arr, n) << endl;
	//cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	//cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	////////////////////////////////////////////////////////////////

	const int m = 8;
	float brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "Сумма элементов массива: " << Sum(brr, m) << endl;
	cout << "Среднее-арифметическое элементов массива: " << average(brr, m) << endl;
	//cout << "Минимальное значение в массиве: " << minValueIn(brr, m) << endl;
	//cout << "Максимальное значение в массиве: " << maxValueIn(brr, m) << endl;
	Sort(brr, m);
	Print(brr, m);
}

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
		arr[i] = double(rand() % 1000)/10;
		
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

template <typename T>
void Print(T arr[], const int n)
{
	//Вывод массива на экран;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void Sort(T arr[], const int n)

//Сортировка массива;
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template <typename T>
T Sum(T arr[], const int size)
//Сумма;
{
	T amount = 0;
	for (int i = 0; i < size; i++)
		amount += arr[i];
	return amount;
}

double average(int arr[], const int size)
//Среднее значение
{
	return (double)Sum(arr, size) / size;
}
float average(float arr[], const int size)
//Среднее значение
{
	return (double)Sum(arr, size) / size;
}
double average(double arr[], const int size)
//Среднее значение
{
	return (double)Sum(arr, size) / size;
}
long long average(long long int arr[], const int size)
//Среднее значение
{
	return (double)Sum(arr, size) / size;
}
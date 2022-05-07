#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(long long arr[], const int n);



void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);
void Print(long long arr[], const int n);



void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);
void Sort(long long arr[], const int n);


int Sum(int arr[], const int size);
double Sum(double arr[], const int size);
float Sum(float arr[], const int size);
char Sum(char arr[], const int size);
long long Sum(long long int arr[], const int size);


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



void Print(int arr[], const int n)
{
	//Вывод массива на экран;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	//Вывод массива на экран;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(float arr[], const int n)
{
	//Вывод массива на экран;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	//Вывод массива на экран;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(long long arr[], const int n)
{
	//Вывод массива на экран;

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}


void Sort(int arr[], const int n)

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
void Sort(double arr[], const int n)

//Сортировка массива;
{
	for (char i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}
		}
	}
}
void Sort(float arr[], const int n)
//Сортировка массива;
{
	for (char i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}
		}
	}
}
void Sort(char arr[], const int n)
//Сортировка массива;
{
	for (char i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}
		}
	}
}

void Sort(long long arr[], const int n)
{
	//Сортировка массива;
	for (long long i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				long long buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int size)
//Сумма;
{
	int amount = 0;
	for (int i = 0; i < size; i++)
		amount += arr[i];
	return amount;
}
double Sum(double arr[], const int size)
//Сумма;
{
	double amount = 0;
	for (int i = 0; i < size; i++)amount += arr[i];
	return amount;
}
float Sum(float arr[], const int size)
//Сумма;
{
	float amount = 0;
	for (int i = 0; i < size; i++)
	{
		amount += arr[i];
	}
	return amount;
}
char Sum(char arr[], const int size)
//Сумма;
{
	int amount = 0;
	for (int i = 0; i < size; i++)amount += arr[i];
		return amount;
}
long long Sum(long long int arr[], const int size)
//Сумма;
{
	long long amount = 0;
	for (int i = 0; i < size; i++)amount += arr[i];
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
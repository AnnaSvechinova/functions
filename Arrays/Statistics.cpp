int Sum(int arr[], const int size)
//�����;
{
	int amount = 0;
	for (int i = 0; i < size; i++)
		amount += arr[i];
	return amount;
}
double Sum(double arr[], const int size)
//�����;
{
	double amount = 0;
	for (int i = 0; i < size; i++)amount += arr[i];
	return amount;
}
float Sum(float arr[], const int size)
//�����;
{
	float amount = 0;
	for (int i = 0; i < size; i++)
	{
		amount += arr[i];
	}
	return amount;
}
char Sum(char arr[], const int size)
//�����;
{
	int amount = 0;
	for (int i = 0; i < size; i++)amount += arr[i];
	return amount;
}
long long Sum(long long int arr[], const int size)
//�����;
{
	long long amount = 0;
	for (int i = 0; i < size; i++)amount += arr[i];
}


double average(int arr[], const int size)
//������� ��������
{
	return (double)Sum(arr, size) / size;
}
float average(float arr[], const int size)
//������� ��������
{
	return (double)Sum(arr, size) / size;
}
double average(double arr[], const int size)
//������� ��������
{
	return (double)Sum(arr, size) / size;
}
long long average(long long int arr[], const int size)
//������� ��������
{
}
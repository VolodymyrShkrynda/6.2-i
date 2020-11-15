#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Sum(int* a, const int size)
{
	int S = 0;
		for (int i = 0; i < size; i++)
			if (a[i] % 2 == 0)
			S += a[i];
	return S;
}


int main()
{
	srand((unsigned)time(NULL)); // ������������ ���������� ���������� �����
	const int n = 5;
	int a[n];
	int Low = -5;
	int High = 5;
	Create(a, n, Low, High, 0);
	Print(a, n);

	cout << "S = " << Sum(a, n) << endl;

	return 0;
}

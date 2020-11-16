// Lab_6.1.1
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
/// <summary>
/// Формування масива з рандомних чисел
/// </summary>
/// <param name="p">масив який формуємо </param>
/// <param name="n">кількість елементів масиву </param>
/// <param name="A">мінімальне значення елемента</param>
/// <param name="B">максимальне значення елемента</param>
void Random(int* p, int n, int A, int B)
{
	for (int i = 0; i < n; i++)
		p[i] = rand() % (B - A + 1) + A;
}
bool criteria(int value, int i)
{
	bool result = true;
	//if (value % 2 == 0 && value % 13 == 0)
	if (value % 2 == 0 && i % 13 == 0 )
	{
		result = false;
	}
	return result;
}
int Count(int* p, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (criteria(p[i], i))
			count++;
	return count;
}
int Sum(int* p, int n)
{
	int sum = 0;
	for (int i = 0;i < n;i++)
		if (criteria(p[i], i))
			sum += p[i];
	return sum;
}

void Replace(int* p, int n)
{
	for (int i = 0; i < n; i++)
		if (criteria(p[i],i))
			p[i] = 0;
}
/// <summary>
/// Вивід масиву
/// </summary>
/// <param name="p">масив який виводимо</param>
/// <param name="n">кількість елементів масиву</param>
void Print(int* p, int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(3) << p[i] << " ";
	cout << "\n";
}
int main()
{
	srand(time(NULL));
	const int n = 25;
	int p[n];
	int A = 15, B = 94;
	
	Random(p, n, A, B);
	Print(p, n);
	cout << "count = " << Count(p, n) << "\n";
	cout << "sum = " << Sum(p, n) << "\n";
	Replace(p, n);
	Print(p, n);

	system("pause");
	return 0;
}
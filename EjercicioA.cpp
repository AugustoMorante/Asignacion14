#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, a, suma;
	a = 2;
	suma = 2;
	cout << "Ingrese el numero de terminos: ";
	cin >> n;
	if (n < 0)
	{
		cout << "Error\n";
		system("pause");
		return 0;
	}
	while (a <= n)
	{
		if (a % 2 == 0)
		{
			suma = suma + a * n;
			a++;
			cout << "El resultado es " << suma << endl;
		}
		else
		{
			system("pause");
			return 0;
		}
	}
	system("pause");
	return 0;
}
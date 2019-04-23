
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, n, i, suma;
	cout << "Insertar numero de terminos: ";
	cin >> n;
	cout << "Insertar valor de a: ";
	cin >> a;
	suma = 0;
	i = 1;
	if (n < 0 || a < 0)
	{
		cout << "ERROR\n";
	}
	else
	{
		while (i <= n)
		{
			suma = suma + 1 / a;
			i++;
		}
		cout << "El resultado es: " << suma << endl;
	}
	system("pause");
	return 0;
}


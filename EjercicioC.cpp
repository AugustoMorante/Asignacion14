
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, a;
	cout << "Insertar numero de terminos: ";
	cin >> n;
	cout << "Inserte el valor de a: ";
	cin >> a;
	if (n <= 0 || a > n)
	{
		cout << "ERROR\n";
	}
	else
	{
		while (a <= n)
		{
			a = (2 * a) * n;
			a++;
			cout << "El resultado es: " << a << endl;
		}
		system("pause");
		return 0;
	}

}


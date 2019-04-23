
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    int n, a;
	a = 0;
	cout << "Insertar numero de terminos: ";
	cin >> n;
	if (n < 0)
	{
		cout << "ERROR\n";
	}
	else
	{
		while (a <= n*n)
		{
			a = a + n * n;
			a++;
			cout << "El resultado es: " << a << endl;
		}
	}
	system("pause");
	return 0;
}


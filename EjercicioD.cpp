#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, a, x, i, suma;
	suma = 0;
	x = 1;
	i = 1;
	cout << "Inserte numero de terminos: ";
	cin >> n;
	cout << "Inserte valor de a: ";
	cin >> a;

	if (n < 0 || a < 0)
	{
		cout << "ERROR\n";


	}
	else
	{
		while (i <= n)
		{
			suma = suma + a * (x);
			x = 3 * i;
			i++;
		}

		cout << "Resultado: " << suma << endl;
	}
	system("pause");
	return 0;
}
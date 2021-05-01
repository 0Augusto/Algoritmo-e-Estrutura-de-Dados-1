#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues" << endl;
		cout << "Allowed to use this code!" << endl;
		cout << "v 1.0" << endl;
		cout << "ler três valores reais do teclado e dizer se o primeiro está entre os outros dois quando esses forem diferentes entre si." << endl;
		
		int X = 0;
		int Y = 0;
		int Z = 0;
		
		cin >> X;
		cin >> Y;
		cin >> Z;
		
		if (Y < X and Z > X and Y != Z)
		{
			cout << "O primeiro esta entre o segundo e o terceiro e sao diferentes entre si!" << endl;
		}
		else if (X < Y and X > Z and Y != Z)
		{
				cout << "O primeiro esta entre o segundo e o terceiro e sao diferentes entre si!" << endl;
		}
		
		else
		{
				cout << "Fora do proposto pelo exercicio!" << endl;
		}
	return 0;	
	}

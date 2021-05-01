#include <iostream>
#include <cmath>

using namespace std;
	int main ()
	{
			cout << "Henrique Augusto Rodrigues" << endl; 
			cout << "Allowed to use this code!" << endl; 
			cout <<  "v - 1.0" << endl;
		
			cout << "Ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado [30:75]" << endl;
		
			int X = 0;
		
         cout << "Insira um valr inteiro para X!" << endl;
         cin >> X;
		
			if (X >= 30 and X <= 75)
			{
					cout << "Pertence ao intervalo!" << endl;
			}
			else
			{
					cout << "Nao pertence ao intervalo!" << endl;
			}
	return 0;	
	}

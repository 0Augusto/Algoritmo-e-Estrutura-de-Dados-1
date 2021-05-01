#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
			cout << "Henrique Augusto Rodrigues" << endl; 
			cout << "Allowed to use this code!" << endl; 
			cout << "v - 1.0" << endl;
		
			cout << "Dizer se o valor inteiro do teclado esta no intervalo aberto (30:75)" << endl;
		
			int X = 0;
			
			cin >> X;
			
			if (X > 30 and X < 75)
			{
					cout << "Esta dentro do intervalo!" << endl;
			}
			else
			{
					cout << "Esta fora do intervalo!" << endl;
			}
	return 0;	
	}

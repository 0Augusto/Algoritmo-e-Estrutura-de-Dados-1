#include <iostream>
#include <cmath>

using namespace std;

	int main ()
	{
			cout << "Henrique Augusto Rodrigues" << endl; 
			cout << "Allowed to use this code!" << endl; 
			cout << "v - 1.0" << endl;
		
			cout << "Dizer se um numero eh par e menor que -100 ou impar e maior que 100." << endl;
		
			int X = 0;
			
			cout << "Insira um valor iteiro para X!" << endl;
			cin >> X;
			
			if (X%2 == 0 and X < -100)
			{
					cout << "Eh PAR e MENOR do que CEM NEGATIVO!" << endl;
			}
			else if (X%2 != 0 and X > 100)
			{
					cout << ("Eh IMPAR e maior do que CEM POSITIVO.") << endl;
			}
			else if (X%2 == 0)
			{
					cout << "O numero eh par!" << endl;
			}
			else
			{
					cout << "O numero eh impar!" << endl;
			}
	return 0;	
	}

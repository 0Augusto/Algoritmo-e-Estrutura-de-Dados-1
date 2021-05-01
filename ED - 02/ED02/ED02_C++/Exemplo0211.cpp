#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
			cout << "Henrique Augusto Rodrigues" << endl; 
			cout << "Allowed to use this code!" << endl; 
			cout << "v - 1.0" << endl;
		
			cout << "Dizer se o numero inteiro digitado no teclado eh par ou impar!" << endl;
		
			int X = 0;
			
			cin >> X;
			
		
			if (X%2 == 0 and X >= 0)
			{
				cout << "Eh par!" << endl;
			}
		
			else if (X%2 != 0)
			{
				cout << "Eh impar!" << endl;
			}
			else if (X%2 == 0 and X < 0)
			{
					cout << "Eh par" << endl;
			}	
			else if (X%2 != 0 and X < 0)
			{
					cout << "Eh impar" << endl;
			}
			else
			{
					cout << "Tente novamente!" << endl;
			}
		
	return 0;	
	}


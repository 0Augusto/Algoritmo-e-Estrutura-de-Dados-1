#include <iostream>
#include <cmath>

using namespace std;

	int main ()
	{
			cout << "Henrique Augusto Rodrigues" << endl; 
			cout << "Allowed to use this code!" << endl; 
			cout << "v - 1.0" << endl;
		
			cout << "Dizer se o numero inteiro digitado no teclado eh par ou impar!" << endl;
		
			int X = 0;
			int Y = 0;
			
         cout << "Insira um valor inteiro para X!" << endl;
         cin >> X;
			
         cout << "Insira um valor inteiro para Y!" << endl;
         cin >> Y;
						
			if (X%2 == 0 and Y%2 != 0 and X != 0 and Y != 0)
			{
					cout << " Eh par!\n" << endl;
					cout << " Eh impar!" << endl; 
			}
			else if (X%2 != 0 and Y%2 == 0 and X != 0 and Y != 0)
			{
						cout << "Eh impar!" << endl;
						cout << "Eh par!" << endl;
			}
			else
         {
            cout << "Volte e reveja seu código!!!!" << endl;
         }
		
	return 0;	
	}

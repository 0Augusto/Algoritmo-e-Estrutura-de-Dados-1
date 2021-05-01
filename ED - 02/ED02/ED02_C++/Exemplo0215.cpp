#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
			cout << "Henrique Augusto Rodrigues" << endl; 
			cout << "Allowed to use this code!" << endl; 
			cout << "v - 1.0" << endl;
		
			cout << "Ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [20:45] e [33:66] ou apenas a um deles." << endl;
			
			int X = 0;
			
			cin >> X;
			
			if (X >= 20 and X <= 45 and X >= 33 and X <= 66)
			{
					cout << "Pertence a ambos os intervalos!" << endl;
			}
			else if (X >= 20 and X <= 45)
			{
					cout << "Pertene somente ao primeiro intervalo fechado!" << endl;
			}
			else if (X >= 33 and X <= 66)
			{
					cout << "Pertence somente ao segundo intervalo!" << endl;
			}
			else
			{
					cout << "Nao pertence a intervalo algum!" << endl;
			}
			
	return 0;		
	}

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues" << endl;
		cout << "Allowed to use this code!" << endl;
		cout << "v 1.0" << endl;
		cout << "Ler dois valores e dizer se o primeiro eh maior, menor ou igual ao segundo." << endl;
		
		int X = 0;
		int Y = 0;
		
      cout << "Insira um valor inteiro para X!" << endl;
      cin >> X;
		
      cout << "Insira um vlaor inteiro para T!" << endl;
      cin >> Y;
		if (X > Y)
		{
			cout << "O primeiro eh maior do que o segundo" << endl;
		}
		else if (X < Y)
		{
				cout << "O primeiro eh menor do que o segundo" << endl;
		}
		else if (X == Y)
		{
				cout << "O primeiro eh igual ao segundo" << endl;
		}
		else if (Y < X)
		{
			cout << "O primeiro eh maior do que o segundo" << endl;
		}
		else if (Y > X)
		{
			cout << "O primeiro eh menor do que o segundo" << endl;
		}
		else if (Y == X)
		{
				cout << "O primeiro eh igual ao o segundo" << endl;
		}
		else
		{
				cout << "Fora do proposto pelo programa!" << endl;
		}
	return 0;	
	}

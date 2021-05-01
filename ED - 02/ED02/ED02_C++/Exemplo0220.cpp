#include <iostream>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto" << endl;
		cout << "Allowed to use this code!" << endl;
		cout << "v 1.0" << endl;
		cout << "ler tres valores reais do teclado e dizer se o primeiro nao esta entre os outros dois quando esses forem diferentes entre si." << endl;
		
		int X = 0;
		int Y = 0;
		int Z = 0;
		
      cout << "Insira um valor inteiro para X!" << endl;
      cin >> X;
		
      cout << "Insira um valor inteiro para Y!" << endl;
      cin >> Y;
      
      cout << "Insira um valor inteiro para Z!" << endl;
      cin >> Z;
		
		if (Y < X and Z > X and Y != Z)
		{
			cout << "O primeiro esta entre o segundo e o terceiro e sao diferentes entre si!" << endl;
		}
		else if (X < Y and X > Z and Y != Z)
		{
				cout << "O primeiro esta entre o segundo e o terceiro e sao diferentes entre si!" << endl;
		}
		else if (Y < X and Z > X and Y == Z)
		{
				cout << "O segundo e o terceiro sao diferentes entre si e o primeiro nao esta entre os dois!" << endl;
		}
		else if (Y > X and Z < X and Y == Z)
		{
				cout << "O segundo e o terceiro nao sao diferentes entre si e o primeiro nao esta entre os dois!" << endl;
		}
		else
		{
				cout << "Nao esta entre o segundo e o terceiro e nao sao diferentes entre si!" << endl;
		}	
		
	return 0;	
	}

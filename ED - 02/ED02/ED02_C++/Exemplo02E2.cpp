#include <iostream>

using namespace std;
	cout << "Henrique Augusto" << endl;
	cout << "Allowed to use this code!" << endl;
	int main ()
	{
		char X[5];
		char Y[5];
		char G[5];
		
		cout << "Insira um caractere para X, Y e G" << endl;
		
		cin >> X >> Y >> G;
		
		if (X >= 'a' and X <= 'z' or X >= 'A' and X <= 'Z' or Y >= 'a' and Y <= 'z' or Y >= 'A' and Y <= 'Z' or G >= 'a' and G <= 'z' or G >= 'A' and G <= 'Z' and X >= Y and X <= G and Y != G);
		{
			cout << "O primeiro caractere esta entre o intervalo e sao diferentes entre si!" << endl;
		}
		else if (X >= 'a' and X <= 'z' or X >= 'A' and X <= 'Z' or Y >= 'a' and Y <= 'z' or Y >= 'A' and Y <= 'Z' or G >= 'a' and G <= 'z' or G >= 'A' and G <= 'Z' and X <= Y and X >= G and Y != G)
		{
			cout << "O primeiro esta entre o intervalo e sao diferentes ante si!" << endl;
		}
		else
		{
			cout << "O primeiro esta fora fora do intervalo ou nao sao diferentes entre si!!" << endl;
		}
	return 0;	
	}
	

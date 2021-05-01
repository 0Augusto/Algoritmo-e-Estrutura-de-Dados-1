#include <iostream>
#include <cmath>
#include <string>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues" << endl;
		cout << "Allowed to use this code!" << endl;
		cout << "v 1.0" << endl;
		cout << "Ler tres valores literais (caracteres) do teclado e dizer se o primeiro valor lido esta¡ entre os outros dois, ou se Ã© igual a um deles." << endl;
		
		char X;
		char Y;
		char G;
		
      cout << "Insira o caractere para X!" << endl;
      cin >> X;

      cout << "Insira o caractere para X!" << endl;
      cin >> Y;

      cout << "Insira o caractere para X!" << endl;
      cin >> G;
      
		
		if (X > Y and X < G and X >= 'a' or X < Y and X > G and X <= 'z' or X >= 'A' and X <= 'Z' and G >= 'a' and G <= 'z' and G >= 'A' and G <= 'Z' and Y >= 'a' and Y <= 'z' and Y >= 'A' and Y <= 'Z')
		{
			cout << ("Esta entre os dois! %s") << endl;
		}
		else if (X == Y and X == G and X <= 'z' or X >= 'A' and X <= 'Z' and G >= 'a' and G <= 'z' and G >= 'A' and G <= 'Z' and Y >= 'a' and Y <= 'z' and Y >= 'A' and Y <= 'Z')
		{
			cout << "Eh igual aos outros dois caracteres!" << endl;		
		}
		else 
		{
				cout << "Tem algo errado! Volte e confira!" << endl;
		}
	return 0;	
	}	

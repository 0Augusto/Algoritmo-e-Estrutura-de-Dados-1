#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues" << endl;
		cout << "Allowed to use this code!" << endl;
		cout << "v 1.0" << endl;
		cout << "Ler dois valores e dizer se o primeiro eh par e positivo e o segundo impar e negativo." << endl;
		
		int X = 0;
		int Y = 0;
		
		cin >> X;
		cin >> Y;
		//Verificando se X é positivo e par e Y é negativo e ímpar
		if (X%2 == 0 and Y%2 != 0 and X > 0 and Y < 0)
		{
				cout << X << " Eh par e positivo" << endl;
				cout << Y << " Eh impar e negativo" << endl;
		}
		//Verificando se X é par e negtivo e se Y é ímpar e positivo
		else if (X%2 == 0 and Y%2 != 0 and X < 0 and Y > 0)
		{
			cout << X << " Eh par e negativo" << endl;
			cout << Y << " Eh impar e positivo" << endl;
		}
		//Verifica se é par e negativo e ímpar e positivo
		else if (X%2 != 0 and Y%2 == 0 and X < 0 and Y > 0)
		{
			cout << X << " Eh impar e negativo" << endl;
			cout << Y << " Eh par e positivo" << endl;
			
		}
		//Verifica se é par negativo e ímpar negativo
		else if (X%2 == 0 and Y%2 != 0 and X < 0 and Y < 0)
		{
				cout << X << " Eh par e negativo" << endl;
				cout << Y << " Eh impar e negativo" << endl;
		}
		//Verifica se é par positivo e ímpar positivo
		else if (X%2 == 0 and Y%2 != 0 and X > 0 and Y > 0)
		{
			cout << X << " Eh par e positivo" << endl;
			cout << Y << " Eh impar e positivo" << endl;
			
		}
		//Verifica se ambos sao pares e negativos
		else if (X%2 == 0 and Y%2 == 0 and X < 0 and Y < 0)
		{
			cout << X << " Eh par e negatitivo" << endl;
			cout << Y << " Eh par e negativo" << endl;
		}
		//Verifica se ambos são impares e negativos
		else if (X%2 != 0 and Y%2 != 0 and X < 0 and Y < 0)
		{
			cout << X << " Eh impar e negativo" << endl;
			cout << Y << " Eh impar e negativo" << endl;
		}
		//Verifica se ambos são impares e positivos
		else if (X%2 != 0 and Y%2 != 0 and X > 0 and Y > 0)
		{
			cout << X << " Eh impar e positivo" << endl;
			cout << Y << " Eh impar e positivo" << endl;
		}	
		//Verifica se são pares e positivos
		else if (X%2 == 0 and Y%2 == 0 and X > 0 and Y > 0)
		{
			cout << X << " Eh par e positivo" << endl;
			cout << Y << " Eh par e positivo" << endl;
		}
		//Verificando se X é negativo e ímpar e Y é negativo e par
		else if (X%2 != 0 and Y%2 == 0 and X < 0 and Y < 0)
		{
				cout << X << " Eh impar e negativo" << endl;
				cout << Y << " Eh par e positivo" << endl;
		}
		//Verifica se X é impar positivo e Y par positivo
		else if (X%2 != 0 and Y%2 == 0 and X > 0 and Y > 0)
		{
				cout << X << " Eh impar e positivo" << endl;
				cout << Y << " Eh par e positivo" << endl;
		}
		//Verifica se ambos são pares positivos
		else if (X%2 == 0 and Y%2 == 0 and X > 0 and Y > 0)
		{
				cout << X << " Eh par e positivo" << endl;
				cout << Y << " Eh par e positivo" << endl;
		}
		//Verifica se ambos são impares positivos
		else if (X%2 != 0 and Y%2 != 0 and X > 0 and Y > 0)
		{
				cout << X << " Eh impar e positivo" << endl;
				cout << Y << " Eh par e positivo" << endl;
		}
		//Verifica se ambos são impares negativos
		else if (X%2 != 0 and Y%2 != 0 and X < 0 and Y < 0)
		{
				cout << X << " Eh impar e negativo" << endl;
				cout << Y << " Eh impar e negativo" << endl;
		}
		//Verifica se ambos são impares e positivos
		else if (X%2 != 0 and Y%2 != 0 and X > 0 and Y > 0)
		{
				cout << X << " Eh impar e positivo" << endl;
				cout << Y << " Eh impar e positivo" << endl;
		}
		//Verifica se X é impar negativo e Y é impar positivo
		else if (X%2 != 0 and Y%2 != 0 and X < 0 and Y > 0)
		{
				cout << X << " Eh impar e negativo" << endl;
				cout << Y << " Eh par e positivo" << endl;
		}
		//Verifica se X é impar positivo e Y é impar negativo
		else if (X%2 != 0 and Y%2 != 0 and X > 0 and Y < 0)
		{
				cout << X << " Eh impar e positivo" << endl;
				cout << Y << " Eh par e negativo" << endl;
		}
		else
		{
				cout << "Eh igual a zero!" << endl;
		}
	return 0;	
	}

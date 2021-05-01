#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl; 
		cout << "Calcular e mostrar o raio da esfera e a area de sua superficie." << endl;
		
			double volume;//Valor a ser informado
			double raio;
			double area;
			double pi = 3.14159265;
			
			cin >> volume;
			
			raio = cbrt((volume/pi) * (3.0/4.0));
			
			area = (4 * pi) * pow(raio, 2);
			
			cout << fixed << setprecision(10) << "O raio da esfera eh: " << raio << endl;
			cout << fixed << setprecision(10) << "A area da superficie eh: " << area << endl;
	return 0;	
	}	

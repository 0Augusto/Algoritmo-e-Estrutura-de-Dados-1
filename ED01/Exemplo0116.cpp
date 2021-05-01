#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl; 
		cout << "Calculo da area e do perimetro de um quadrado, com o dobro do tamanho do lado." << endl;
		
		double T; //Lado de um triangulo equilátero;
		double area;
		double perimetro;
		double altura;
		
		cin >> T;
		
		altura = sqrt((T/2) * T);
		
		area = (pow(T, 2) * sqrt(3))/4;
		
		perimetro = T + T + T;
		
		cout << fixed << setprecision(10) << "A area do triangulo eh: " << area << endl;
		cout << fixed << setprecision(10) << "O perimetro do triangulo eh: " << perimetro << endl;
		cout << fixed << setprecision(10) << "A altura do triangulo eh: " << altura << endl;
	return 0;	
	}	

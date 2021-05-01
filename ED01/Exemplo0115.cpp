#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl; 
		cout << "Calcular a area de um triangulo com o valor da metade da altura original." << endl;
		
		double B; //Base de um triângulo
		double H; // Altura de um triângulo
		double area;
		
		cin >> B;
		cin >> H;
		
		area = (B * (H/2))/2;
		
		cout << "A area do triangulo eh: " << area << endl;
	return 0;	
	}	

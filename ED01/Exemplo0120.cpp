#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl; 
		cout << "Calcular o volume de uma esfera considerando um oitavo de seu raio." << endl;
	
		double r; //Raio da esfera
		double pi = 3.14159265;
		double volume;
		
		cin >> r;
		
		volume = (((4.0/3.0) * pi) * (1.0/8.0) * (pow(r, 3)));
		
		cout << fixed << setprecision(10) << "O volume da esfera eh: " << volume << endl;
	return 0;	
	}

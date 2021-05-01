#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl; 
		cout << "Calculo da area de um circulo." << endl;
		
		double r; //Raio de um círculo
		double area;
		double pi = 3.14159265;
		
		cin >> r;
		
		area = (pi * pow(r, 2));
		
		cout << fixed << setprecision(10) << "A area do circulo eh: " << area << endl;
	return 0;	
	}	

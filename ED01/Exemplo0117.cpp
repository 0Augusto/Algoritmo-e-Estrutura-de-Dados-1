#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl;
		cout << "Calcular um quarto do volume de um cubo a partir do seu volume original." << endl;
	
		double C;
		double volume;
		
		cin >> C;
		
		volume = ((1.0/4.0) * pow(C, 3));
	
		cout << fixed << setprecision(10) << "O volume do cubo eh: " << volume << endl;
	return 0;
	}	

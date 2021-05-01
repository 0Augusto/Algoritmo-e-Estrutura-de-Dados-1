#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl; 
		cout << "Calcular a area de um retangulo e mostrar um terco do valor." << endl;

		int A;
		int B;
		int area;
		
		cin >> A;
		cin >> B;
	
		area = (1.0/3.0) * (B * A);
		
		cout << "A area do retangulo eh: " << area << endl;
	return 0;
	}

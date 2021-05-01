#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl; 
		cout << "Calculo da metade da area de um quadrado" << endl;
		
		int L; //Lado do quadrado
		int area;
		
		cin >> L;
		
		area = pow(L, 2)/2;
		
		cout << "A area do quadrado eh: " << area << endl;
	return 0;	
	}

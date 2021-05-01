#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl; 
		cout << "Calculo da area e do perimetro de um quadrado, com o dobro do tamanho do lado." << endl;
		
		int L; //Lado do quadrado
		int area;
		int perimetro;
		
		cin >> L;
		
		area = (2 * pow(L, 2));
		
		perimetro = (2 * (L + L + L + L));
		
		cout << "A area do quadrado eh: " << area << endl;
		
		cout << "O perimetro do quadrado eh: " << perimetro << endl;
	return 0;	
	}

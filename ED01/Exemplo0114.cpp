#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl; 
		cout << "Calcular a area e o perimetro de um retangulo com o dobro dos lados." << endl;
	
		int A; //Altura do retângulo
		int B; //Base do retângulo
		
		int area;
		int perimetro;
		
		cout << "Sendo um retangulo, a base ou a altura tem que ser maior do que o outro!" << endl;
		
		cin >> B;
		cin >> A;
		
		area = (2 * B) * (2 * A);
		
		perimetro = (2 * pow(A, 2)) + ((2 * pow(B, 2)));
		
		cout << "A area do retangulo eh: " << area << endl;
		cout << "O perimetro do retangulo eh: " << perimetro << endl;
	return 0;
	}

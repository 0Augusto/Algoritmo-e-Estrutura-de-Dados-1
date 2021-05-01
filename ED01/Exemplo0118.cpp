#include <iostream>
#include <cmath>

using namespace std;

	int main ()
	{
		cout << "Henrique Augusto Rodrigues - v 1.0" << endl; 
		cout << "Calcular o volume de um paralelepipedo com a metade de suas medidas." << endl;
		
		double C; //Comprimento
		double L; //Largura
		double A; //Altura
		double volume;
		
		cout << "Insira o comprimento C!" << endl;
		cin >> C;
      
		cout << "Insira a largura L!";
		cin >> L;
      
		cout << "Insira a altura A!" << endl;
		cin >> A;
		//Cálculo do volume com a metade dos valores de um paralelepipedo
		volume = (1.0/2.0) * C * (1.0/2.0) * L * (1.0/2.0) * A;
		
		cout << "O volume do paralelepipedo eh: %lf", volume << endl;	
	return 0;
	}	

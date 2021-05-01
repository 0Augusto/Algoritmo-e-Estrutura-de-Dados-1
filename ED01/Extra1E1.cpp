#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

	int main ()
	{
		printf ("Henrique Augusto Rodrigues - v 1.0\n"); 
		printf ("Calcular o lado de um quadrado a partir de sua area\n.");
		
		double area;
		double L; //Lado do quadrado
		
      printf ("Insira o valor da area de um quadrado!\n");
		scanf  ("%lf", &area);
		
		L = sqrt(area);
		
		printf ("O lado do quadrado eh: %lf", L);
	return 0;	
	}	

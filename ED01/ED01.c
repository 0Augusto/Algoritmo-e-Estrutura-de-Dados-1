/**
  Program ED01
  @Henrique Augusto Rodrigues
  @1.0
  @date
*/

// lista de dependencias
#include <stdio.h>     // para entradas e saida
#include <stddef.h>    // para definicoes basicas
#include <stdlib.h>    // para a biblioteca padrao
#include <string.h>    // para cadeias de caracteres
#include <stdarg.h>    // para tratar argumentos
#include <stdbool.h>   // para definicoes logicas
#include <ctype.h>     // para tipos padroes
#include <math.h>      // para definicoes matematicas
#include <time.h>      // para medir tempo

int readint (const char* text)
{
  int result = 0;

  printf ( "%s\n", text );
  scanf  ( "%d", &result);
  getchar ();
  //
  return ( result );
}

void Metodo00 ( )
{
    printf ("Aperte zero para parar a execucao do programa!\n");
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar ();
  //
}//end
void Metodo01 ( )
{
      printf ("Executa o programa 0311");
	  int L = 0;
      int area;
      int perimetro;
   
      printf ("Inisira o lado do quadrado: \n");
      scanf  ("%d", &L);
      //Cálculo da área  
      area = (2) * pow(L, 2);
      //Cálculo do perímetro
      perimetro = 2 * (4 * L);
      
      printf ("A area do quadrado eh: %d \nE o valor do perimetro eh: %d\n", area, perimetro);
      
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
      //
}//end Metodo01
void Metodo02 ( )
{
      int B = 0;//Base do retangulo
      int A = 0;//Altura do retangulo
      int area;
   
      printf ("Inisira a base do retangulo:  \n");
      scanf  ("%d", &B);
      printf ("Insira a altura do retangulo: \n");
      scanf  ("%d", &A);
      //Cálculo da área  
      area = (1.0/3.0) * (B * A);
      
    printf ("A area do retangulo eh: %d\n" , area);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo03 ( )
{
      int B = 0;//Base
      int A = 0;//Altura
      int area;
      int perimetro;
   
      printf ("Inisira a base do retangulo: \n");
      scanf  ("%d", &B);
      printf ("Inisira a altura do retangulo: \n");
      scanf  ("%d", &A);
      //Cálculo da área  
      area = (2) * (B * A);
      //Cálculo do perímetro
      perimetro = 2 * (2 * B + 2 * A);
      
    printf ("A area do retangulo eh: %d \nE o valor do perimetro eh: %d\n", area, perimetro);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo04 ( )
{
      int L = 0;//lado do triagulo
      int A = 0;//Altura triangulo
      int area;
      int perimetro;
   
      printf ("Inisira a base do triangulo: \n");
      scanf  ("%d", &L);
      printf ("Inisira a altura do triangulo: \n");
      scanf  ("%d", &A);
      //Cálculo da área  
      area = (2 * (L * A)/2.0);
      //Cálculo do perímetro
      perimetro = 2 * (3 * L);
      
    printf ("A area do triangulo eh: %d \nE o valor do perimetro eh: %d\n", area, perimetro);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo05 ( )
{
      int L = 0;//lado do triagulo
      int A = 0;//Altura triangulo
      int area;
      int perimetro;
   
      printf ("Inisira a base do triangulo: \n");
      scanf  ("%d", &L);
      printf ("Inisira a altura do triangulo: \n");
      scanf  ("%d", &A);
      //Cálculo da área  
      area = ((1.0/2.0) * (L * A)/2.0);
      //Cálculo do perímetro
      perimetro = ((1.0/2.0) * (3 * L));
      
    printf ("A area do triangulo eh: %d \nE o valor do perimetro eh: %d\n", area, perimetro);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo06 ( )
{
      double L = 0.0;//Lado do triangulo
      double altura;//Altura do triangulo
      double area;   
      double perimetro;
      
      printf ("Insira um valor real do lado do triangulo: \n");
      scanf  ("%lf", &L);
     
      altura = sqrt((L/2) * L);
      area = (pow(L, 2) * sqrt(3))/4;
      perimetro = 3 * L;
      
    printf ("A altura eh: %lf\nA area eh: %lf\nO perimetro eh: %lf\n", altura, area, perimetro);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo07 ( )
{
      double L = 0.0;//Lado do cubo
      double volume;
      
      printf ("Insira um valor real do lado de um cubo: \n");
      scanf  ("%lf", &L);
      //Porque pow(volume, 3) não funciona?
      volume = ((1.0/4.0) * (3 * L));
      
    printf ("O volume do cubo eh: %lf\n", volume);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo08 ( )
{
        double C; //Comprimento
		double L; //Largura
		double A; //Altura
		double volume;
		
        printf ("Insira o comprimento C!\n");
		scanf  ("%lf", &C);
      
        printf ("Insira a largura L!\n");
		scanf  ("%lf", &L);
      
        printf ("Insira a altura A!\n");
		scanf  ("%lf", &A);
		//Cálculo do volume com a metade dos valores de um paralelepipedo
		volume = (1.0/2.0) * C * (1.0/2.0) * L * (1.0/2.0) * A;
		
    printf ("O volume do paralelepipedo eh: %lf\n", volume);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo09 ( )
{
      double r = 0;//Raio
      double pi = 3.14159265;
      double area;
   
      printf ("Insira um valor real para o raio!\n");
      scanf  ("%lf", &r);
   
      area = pi * (2 * pow(r, 2));
      
    printf ("O valor da area eh: %lf\n", area);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo10 ( )
{
      double r = 0;//Raio da esfera
      double pi = 3.14159265;
      double volume;

      printf ("Insira um valor real para o raio de uma esfera.\n");
      scanf  ("%lf", &r);
      
      volume = (4.0/3.0) * pi * ((1.0/8.0) * pow(r, 3));
      
    printf ("O volume da esfera eh: %lf\n", volume);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo11 ( )
{
        double area;
		double L; //Lado do quadrado
		
        printf ("Insira o valor da area de um quadrado!\n");
		scanf  ("%lf\n", &area);
		
		L = sqrt(area);
		
    printf ("O lado do quadrado eh: %lf\n", L);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo12 ( )
{
			double volume;//Valor a ser informado
			double raio;
			double area;
			double pi = 3.14159265;
			
			printf ("Insira o volume da esfera!\n");
			scanf  ("%lf" ,&volume);
			
			raio = cbrt((volume/pi) * (3.0/4.0));
			
			area = (4 * pi) * pow(raio, 2);
			
	printf ("O raio da esfera eh: %lf\n", raio);
	printf ("A area da superficie eh: %lf\n", area);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
/**
  Acao principal.
*/
int main ( )
{
 // definir dados/resultados
	int    opcao =  0;
 // identificar
    printf ( "Henrique Augusto Rodrigues - versao 1.0 - 2020\n" );
    printf ( "675263 - ED01\n" );
    printf ( "\n" );

 // encerrar
do
{
  printf ( "\n" );
  printf ( "Opcoes: \n" );
  printf ( "0 - Terminar\n" );
  printf ( "0111 - Calcular a area e o perimetro do quadrado com o dobro do tamanho do lado.\n" );
  printf ( "0112 - Calcular a area de um retangulo com um terço da area.\n" );
  printf ( "0113 - Calcular a area e o perimetro do retangulo com o dobro do tamanho dos lados.\n" );
  printf ( "0114 - Calcular a area e o perimetro do triangulo com o dobro do tamanho dos lados.\n");
  printf ( "0115 - Calcular a area e o perimetro do triangulo com o dobro do tamanho dos lados.\n");
  printf ( "0116 - Calcular a area o perimetro e a altura do triangulo equilatero.\n");
  printf ( "0117 - Calcular o volume de um cubo.\n");
  printf ( "0118 - Calcular o volume de um paralelepipedo com a metade de suas medidas.\n");
  printf ( "0119 - Calcular a area de um circulo com o drobro do raio.\n");
  printf ( "0120 - Calcular o volume de uma esfera com 1/8 de seu raio.\n");
  printf ( "01E1 - Calcular o lado de um quadrado a partir de sua area.\n");
  printf ( "01E2 - Calcular e mostrar o raio da esfera e a area de sua superficie.\n");
  printf ( "Escolher a opcao\n" ); 	
  opcao = readint ( "Insira uma opcao!\n" );
  
  switch ( opcao )
{
  case 0:
    Metodo00 (); //
   break;
  case 1:
    Metodo01 (); //
   break;
  case 2:
    Metodo02 (); //
   break;
  case 3:
    Metodo03 (); //
   break;
  case 4:
    Metodo04 ();
   break;
  case 5:
    Metodo05 ();
   break;
  case 6:
    Metodo06 ();
   break;
  case 7:
    Metodo07 ();
   break;
  case 8:
    Metodo08 ();
   break;
  case 9:
    Metodo09 ();
   break;
  case 10:
    Metodo10 ();
   break;
  case 11:
    Metodo11 ();
   break;
  case 12:
    Metodo12 ();
   break;            
  default:
    printf ("\nERRO 404 option not found!"); //
}
}
while ( opcao != 0 );
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );
    
    return ( 0 );
} // fim main ( )

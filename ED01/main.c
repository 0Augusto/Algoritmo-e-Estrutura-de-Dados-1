//
//  main.c
//  AEDs Um
//
//  Created by Microft Holmes on 09/07/25.
//

// Bibliotecas
#include <stdio.h>     // para entradas e saida
#include <stddef.h>    // para definicoes basicas
#include <stdlib.h>    // para a biblioteca padrao
#include <string.h>    // para cadeias de caracteres
#include <stdarg.h>    // para tratar argumentos
#include <stdbool.h>   // para definicoes logicas
#include <ctype.h>     // para tipos padroes
#include <math.h>      // para definicoes matematicas
#include <time.h>      // para medir tempo

// Função para selecionar os programas a serem compilados e executados

int readint (const char * text){
    
    int result = 0;
    
    printf("%s\n", text);
    scanf ("%d",   &result);
    
    return (result);
}//end readint

void Metodo00(void){
    printf("Aperte zero(0) para encerrar a execucao do programa!");
    printf("\nAperte enter para continuar!");
    
    getchar ();
    
}//end Metodo00

void Metodo01(void){
    printf("Executa o programa 0111 - Programa = v0.1 \n");
    
    int lado = 0; //supondo que seja um lado do quadrado
    int area = 0;
    
    printf("Insira o valor do lado do quadrado: ");
    scanf ("\n%d", &lado);
    
    area = pow(lado, 2)/2;
    
    printf("A metade da area do quadrado eh: %d\n", area);
    
    getchar ();
}//end Metodo01

void Metodo02 (void){
    printf("Executa o programa 0112 - Programa = v0.1 \n");
    
    int l = 0;// Supondo que seja o lado do quadrado
    
    printf("Insira o lado do quadrado: \n");
    scanf ("%d", &l);
    
    
    int area = ((2 * l));
    int peri = ((2 * l) * 4);
    
    printf("A area do quadrado com o dobro do lado eh: %d\n", area);
    printf("O perimetro do quadrado com o dobro do lado eh: %d\n", peri);
    getchar ();
}//end Metodo02

void Metodo03 (void){
    printf("Executa o programa 0113 - Programa = v0.1 \n");
    int l, a = 0;
    
    printf("Insira a largura do retangulo: \n");
    scanf ("%d", &l);
    printf("Insira a altura do retangulo:  \n");
    scanf ("%d", &a);
    
    int area = (l * a)/3;
    
    printf("O terço da area do retangulo eh: %d\n", area);
    
    getchar ();
}//end Metodo03

void Metodo04 (void){
    printf("Executa o programa 0114 - Programa = v0.1\n");
    int l, c = 0;//lagura e comprimento
    
    printf("Insira a largura do retangulo: \n");
    scanf ("%d", &l);
    printf("Insira o comprimento do retangulo: \n");
    scanf ("%d", &c);
    
    int P = ((2 * l) + (2 * c)) * 2;
    
    printf("O perimetro com o dobro dos lasos eh: %d", P);
    getchar ();
}//end Metodo04

void Metodo05 (void){
    printf("Executa o programa 0115 - Programa = v0.1\n");
    
    double h, b = 0.0; //h = altura, b = base
    
    printf("Insira a altura do triangulo: \n");
    scanf ("%lf", &h);
    
    printf("Insira a base do triangulo: \n");
    scanf ("%lf", &b);
    
    double area = (h * 1.0/2.0) * b;
    
    printf("A area do trangulo eh: %lf", area);
    getchar ();
}//end Metodo05

void Metodo06 (void){
    printf("Executa o programa 0116 - Programa = v0.1\n");
    double L      = 0.0;//Lado do triangulo
    double altura = 0.0;//Altura do triangulo
    double area   = 0.0;
    double perimetro = 0.0;
          
          printf ("Insira um valor real do lado do triangulo: \n");
          scanf  ("%lf", &L);
         
          altura = sqrt((L/2) * L);
          area = (pow(L, 2) * sqrt(3))/4;
          perimetro = 3 * L;
          
        printf ("A altura eh: %lf\nA area eh: %lf\nO perimetro eh: %lf\n", altura, area, perimetro);
        printf ( "\nApertar ENTER para continuar.\n" );
        getchar( );
}//end Metodo06

void Metodo07 (void){
    printf("Executa o programa 0117 - Programa = v0.1\n");
    
    double l = 0.0; //lado do cubo
    
    printf("Insira o valor do lado do cubo: \n");
    scanf ("%lf", &l);
    
    double v = ((1.0/4.0) * (3.0 * l));
    
    printf("O volume do cubo com 1.0/4.0 do lado eh: %lf \n", v);
    getchar ();
}//end Metodo07

void Metodo08 (void){
    printf("Executa o programa 0118 - Programa = v0.1\n");
    
    double C = 0.0; //Comprimento
    double L = 0.0; //Largura
    double A = 0.0; //Altura
    double v = 0.0;
            
        printf ("Insira o comprimento C: \n");
        scanf  ("%lf", &C);
          
        printf ("Insira a largura L: \n");
        scanf  ("%lf", &L);
          
        printf ("Insira a altura A: \n");
        scanf  ("%lf", &A);
        //Cálculo do volume com a metade dos valores de um paralelepipedo
        v = (1.0/2.0) * C * (1.0/2.0) * L * (1.0/2.0) * A;
            
        printf ("O volume do paralelepipedo eh: %lf\n", v);
        printf ( "\nApertar ENTER para continuar.\n" );
        getchar( );
}//end Metodo08

void Metodo09 (void){
    printf("Executa o programa 0119 - Programa = v0.1\n");
    
    double r = 0.0; //Raio
    double pi = 3.14159265;
    double area = 0.0;
       
        printf ("Insira um valor real para o raio: \n");
        scanf  ("%lf", &r);
       
        area = pi * (2 * pow(r, 2));
          
        printf ("O valor da area eh: %lf\n", area);
        printf ( "\nApertar ENTER para continuar.\n" );
    
    
    getchar();
}//end Metodo09

void Metodo10 (void){
    printf("Executa o programa 0120 - Programa = v0.1\n");
    
    double r = 0.0; //raio esfera
    double pi = 3.14159265359;
    
    printf("Insira o valor do raio da esfera: \n");
    scanf ("%lf", &r);
    
    double area = ((4.0/3.0 * pi) * (1.0/8.0 * pow(r, 3)));
    
    printf("O valor da area com 1/8 do raio eh: %lf \n", area);
    getchar ();
}//end Metodo10

void Metodo11 (void){
    printf("Executa o programa Exemplo01E1 - Programa = v0.1\n");
    
    double a = 0.0;
    double L = 0.0; //Lado do quadrado
        
        printf ("Insira o valor da area de um quadrado: \n");
        scanf  ("%lf\n", &a);
            
        L = sqrt(a);
            
        printf ("O lado do quadrado eh: %lf\n", L);
        printf ( "\nApertar ENTER para continuar.\n" );
        
        getchar ();
}//end Metodo11

void Metodo12 (void){
    printf("Executa o programa Exemplo01E2 - Programa = v0.1\n");
    
    double v = 0.0;//Valor a ser informado
    double r = 0.0;
    double a =0.0;
    double pi = 3.14159265;
                
        printf ("Insira o volume da esfera:\n");
        scanf  ("%lf" ,&v);
                //retorna a raiz cúbica
            r = cbrt((v/pi) * (3.0/4.0));
                
            a = (4 * pi) * pow(r, 2);
                
        printf ("O raio da esfera eh: %lf\n", r);
        printf ("A area da superficie eh: %lf\n", a);
        printf ( "\nApertar ENTER para continuar.\n" );
        getchar ();
}//end Metodo12


/**
  Acao principal.
*/
int main ( void)
{
 // definir dados/resultados
    int    opcao =  0;
 // identificar
    printf ( "Henrique Augusto Rodrigues - versao 1.0 - 2020\n" );
    printf ( " - ED01\n" );
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

/**
  Program v0.0
  @author Henrique Augusto Rodrigues
  @version 1.0
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
    printf ("Executa o Metodo01 ");
	  int X = 0;
			
			printf ("Insira um valor para X!\n");
			scanf  ("%d", &X);
			
		
			if (X%2 == 0 && X >= 0)
			{
				printf ("Eh par!\n");
			}
		
			else if (X%2 != 0)
			{
				printf ("Eh impar!\n");
			}
			else if (X%2 == 0 && X < 0)
			{
					printf ("Eh par!\n");
			}	
			else if (X%2 != 0 && X < 0)
			{
					printf ("Eh impar!\n");
			}
			else
			{
					printf ("Tente novamente!");
			}
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
      //
}//end Metodo01

void Metodo02 ( )
{
    printf ("Executa o Metodo02 \n");
    int X = 0;
			
			printf ("Insira um valor inteiro para X!\n");
			scanf  ("%d", &X);
			
			if (X >= 20 && X <= 45 && X >= 33 && X <= 66)
			{
					printf ("Pertence a ambos os intervalos!\n");
			}
			else if (X >= 20 && X <= 45)
			{
					printf ("Pertene somente ao primeiro intervalo fechado!\n");
			}
			else if (X >= 33 && X <= 66)
			{
					printf ("Pertence somente ao segundo intervalo!\n");
			}
			else
			{
					printf ("Nao pertence a intervalo algum!\n");
			}
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}//end Metodo02

void Metodo03 ( )
{
    printf ("Executa o Metodo03\n");
			int X = 0;
			
				printf ("Insira o valor de X!\n");
				scanf  ("%d", &X);
				
				if (X > 30 && X < 75)
				{
						printf ("Esta dentro do intervalo!\n");
				}
				else
				{
						printf ("Esta fora do intervalo!\n");
				}
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );

}//end Metodo03

void Metodo04 ( )
{
    printf ("Executa o Metodo04\n");
			int X = 0;
		
			 printf ("Insira um valr inteiro para X!\n");
			 scanf  ("%d", &X);
		
			if (X >= 30 && X <= 75)
			{
					printf ("Pertence ao intervalo!\n");
			}
			else
			{
					printf ("Nao pertence ao intervalo!\n");
			}
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
}//end Metodo04

void Metodo05 ( )
{
    printf ("Executa o Metodo05\n");
			int X = 0;
			
			printf ("Insira um valor inteiro para X!\n");
			scanf  ("%d", &X);
			
			if (X >= 20 && X <= 45 && X >= 33 && X <= 66)
			{
					printf ("Pertence a ambos os intervalos!\n");
			}
			else if (X >= 20 && X <= 45)
			{
					printf ("Pertene somente ao primeiro intervalo fechado!\n");
			}
			else if (X >= 33 && X <= 66)
			{
					printf ("Pertence somente ao segundo intervalo!\n");
			}
			else
			{
					printf ("Nao pertence a intervalo algum!\n");
			}
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
}//end Metodo05

void Metodo06 ( )
{
    printf ("Executa o Metodo06\n");
			int X = 0;
			int Y = 0;
			
         printf ("Insira um valor inteiro para X!\n");
         scanf  ("%d", &X);
			
         printf ("Insira um valor inteiro para Y!\n");
         scanf  ("%d", &Y);
						
			if (X%2 == 0 && Y%2 != 0 && X != 0 && Y != 0)
			{
					printf (" %i Eh par e %i eh impar!\n", X, Y); 
			}
			else if (X%2 != 0 && Y%2 == 0 && X != 0 && Y != 0)
			{
						printf ("Eh impar %i e %i eh impar!\n", X, Y);
			}
			else
         {
            printf ("Volte e reveja seu código!!!!");
         }
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );

}//end Metod06

void Metodo07 ( )
{
    printf ("Executa o Metodo07\n");
		int X = 0;
		int Y = 0;
		
		printf ("Insira um valor inteiro para X!\n");
		scanf  ("%d", &X);
		
	    printf ("Insira o valor inteiro para Y!\n");
		scanf  ("%d", &Y);
		//Verificando se X é positivo e par e Y é negativo e ímpar
		if (X%2 == 0 && Y%2 != 0 && X > 0 && Y < 0)
		{
				printf ("%d Eh par e positivo\n", X);
				printf ("%d Eh impar e negativo\n", Y);
		}
		//Verificando se X é par e negtivo e se Y é ímpar e positivo
		else if (X%2 == 0 && Y%2 != 0 && X < 0 && Y > 0)
		{
			printf ("%d Eh par e negativo\n", X);
			printf ("%d Eh impar e positivo", Y);
		}
		//Verifica se é par e negativo e ímpar e positivo
		else if (X%2 != 0 && Y%2 == 0 && X < 0 && Y > 0)
		{
			printf ("%d Eh impar e negativo\n", X);
			printf ("%d Eh par e positivo", Y);
			
		}
		//Verifica se eh par negativo e impar negativo
		else if (X%2 == 0 && Y%2 != 0 && X < 0 && Y < 0)
		{
				printf ("%d Eh par e negativo\n", X);
				printf ("%d Eh impar e negativo\n", Y);
		}
		//Verifica se é par positivo e ímpar positivo
		else if (X%2 == 0 && Y%2 != 0 && X > 0 && Y > 0)
		{
			printf ("%d Eh par e positivo\n", X);
			printf ("%d Eh impar e positivo\n", Y);
			
		}
		//Verifica se ambos sao pares e negativos
		else if (X%2 == 0 && Y%2 == 0 && X < 0 && Y < 0)
		{
			printf ("%d Eh par e negatitivo\n", X);
			printf ("%d Eh par e negativo\n", Y);
		}
		//Verifica se ambos são impares e negativos
		else if (X%2 != 0 && Y%2 != 0 && X < 0 && Y < 0)
		{
			printf ("%d Eh impar e negativo\n", X);
			printf ("%d Eh impar e negativo\n", Y);
		}
		//Verifica se ambos são impares e positivos
		else if (X%2 != 0 && Y%2 != 0 && X > 0 && Y > 0)
		{
			printf ("%d Eh impar e positivo\n", X);
			printf ("%d Eh impar e positivo\n", Y);
		}	
		//Verifica se são pares e positivos
		else if (X%2 == 0 && Y%2 == 0 && X > 0 && Y > 0)
		{
			printf ("%d Eh par e positivo\n", X);
			printf ("%d Eh par e positivo\n", Y);
		}
		//Verificando se X é negativo e ímpar e Y é negativo e par
		else if (X%2 != 0 && Y%2 == 0 && X < 0 && Y < 0)
		{
				printf ("%d Eh impar e negativo\n", X);
				printf ("%d Eh par e positivo\n", Y);
		}
		//Verifica se X é impar positivo e Y par positivo
		else if (X%2 != 0 && Y%2 == 0 && X > 0 && Y > 0)
		{
				printf ("%d Eh impar e positivo\n", X);
				printf ("%d Eh par e positivo\n", Y);
		}
		//Verifica se ambos são pares positivos
		else if (X%2 == 0 && Y%2 == 0 && X > 0 && Y > 0)
		{
				printf ("%d Eh par e positivo\n", X);
				printf ("%d Eh par e positivo\n", Y);
		}
		//Verifica se ambos são impares positivos
		else if (X%2 != 0 && Y%2 != 0 && X > 0 && Y > 0)
		{
				printf ("%d Eh impar e positivo\n", X);
				printf ("%d Eh par e positivo\n", Y);
		}
		//Verifica se ambos são impares negativos
		else if (X%2 != 0 && Y%2 != 0 && X < 0 && Y < 0)
		{
				printf ("%d Eh impar e negativo\n", X);
				printf ("%d Eh impar e negativo\n", Y);
		}
		//Verifica se ambos são impares e positivos
		else if (X%2 != 0 && Y%2 != 0 && X > 0 && Y > 0)
		{
				printf ("%d Eh impar e positivo", X);
				printf ("%d Eh impar e positivo", Y);
		}
		//Verifica se X é impar negativo e Y é impar positivo
		else if (X%2 != 0 && Y%2 != 0 && X < 0 && Y > 0)
		{
				printf ("%d Eh impar e negativo\n", X);
				printf ("%d Eh par e positivo\n", Y);
		}
		//Verifica se X é impar positivo e Y é impar negativo
		else if (X%2 != 0 && Y%2 != 0 && X > 0 && Y < 0)
		{
				printf ("%d Eh impar e positivo\n", X);
				printf ("%d Eh par e negativo\n", Y);
		}
		else
		{
				printf ("Eh igual a zero!");
		}
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );

}//end Metodo07

void Metodo08 ( )
{
    printf ("Executa o Metodo08\n");
		int X = 0;
		int Y = 0;
		
      printf ("Insira um valor inteiro para X!\n");
      scanf  ("%d", &X);
		
      printf ("Insira um vlaor inteiro para T!\n");
      scanf  ("%d", &Y);
		if (X > Y)
		{
			printf ("O primeiro eh maior do que o segundo\n");
		}
		else if (X < Y)
		{
				printf ("O primeiro eh menor do que o segundo\n");
		}
		else if (X == Y)
		{
				printf ("O primeiro eh igual ao segundo\n");
		}
		else if (Y < X)
		{
			printf ("O primeiro eh maior do que o segundo\n");
		}
		else if (Y > X)
		{
			printf ("O primeiro eh menor do que o segundo\n");
		}
		else if (Y == X)
		{
				printf ("O primeiro eh igual ao o segundo\n");
		}
		else
		{
				printf ("Fora do proposto pelo programa!");
		}
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
 
}//end Metodo 08

void Metodo09 ( )
{
    printf ("Executa o Metodo09\n");
		int X = 0;
		int Y = 0;
		int Z = 0;
		
      printf ("Insira um valor inteiro para X!\n");
      scanf  ("%i", &X);
      
	  printf ("Insira um valor inteiro para Y\n");
      scanf  ("%i", &Y);
      
      printf ("Insira um valor inteiro para Z\n");
      scanf  ("%i", &Z);
		
		if (Y < X && Z > X && Y != Z)
		{
			printf ("O primeiro esta entre o segundo e o terceiro e sao diferentes entre si!\n");
		}//end if
		else if (X < Y && X > Z && Y != Z)
		{
				printf ("O primeiro esta entre o segundo e o terceiro e sao diferentes entre si!\n");
		}//end else if
		
		else
		{
				printf ("Fora do proposto pelo exercicio!");
		}
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );

}//end Metodo09

void Metodo10 ( )
{
    printf ("Executa o Metodo10\n");
		int X = 0;
		int Y = 0;
		int Z = 0;
		
      printf ("Insira um valor inteiro para X!\n");
      scanf  ("%d", &X);
		
      printf ("Insira um valor inteiro para Y!\n");
      scanf  ("%d", &Y);
      
      printf ("Insira um valor inteiro para Z!\n");
      scanf  ("%d", &Z);
		
      if (Y < X && Z > X && Y != Z)
		{
			printf ("O primeiro esta entre o segundo e o terceiro e sao diferentes entre si!\n");
		}
		else if (X < Y && X > Z && Y != Z)
		{
				printf ("O primeiro esta entre o segundo e o terceiro e sao diferentes entre si!\n");
		}
		else if (Y < X && Z > X && Y == Z)
		{
				printf ("O segundo e o terceiro sao diferentes entre si e o primeiro nao esta entre os dois!\n");
		}
		else if (Y > X && Z < X && Y == Z)
		{
				printf ("O segundo e o terceiro nao sao diferentes entre si e o primeiro nao esta entre os dois!\n");
		}
		else
		{
				printf ("Nao esta entre o segundo e o terceiro e nao sao diferentes entre si!");
		}
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
 
}//end Metodo10

/**
  Acao principal.
*/
int main ( )
{
 // definir dados/resultados
	int    opcao =  0;
 // identificar
    printf ( "Henrique Augusto Rodrigues - versao 1.0 - 2020\n" );
    printf ( "675263 - XXX\n" );
    printf ( "\n" );

 // encerrar
do
{
  printf ( "\n" );
  printf ( "Opcoes: \n" );
  printf ( "0 - Terminar\n" );
  printf ( "1 - Dizer se o numero inteiro digitado no teclado eh par ou impar.\n" );
  printf ( "2 - Dizer se um numero eh par e menor que -100 ou impar e maior que 100.\n" );
  printf ( "3 - Dizer se o valor inteiro do teclado esta no intervalo aberto (30:75).\n" );
  printf ( "4 - Ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado [30:75].\n" );
  printf ( "5 - Ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [20:45] e [33:66] ou apenas a um deles.\n" );
  printf ( "6 - Dizer se o numero inteiro digitado no teclado eh par ou impar.\n" );
  printf ( "7 - Ler dois valores e dizer se o primeiro eh par e positivo e o segundo impar e negativo.\n" );
  printf ( "8 - Ler dois valores e dizer se o primeiro eh maior, menor ou igual ao segundo.\n" );
  printf ( "9 - ler tres valores reais do teclado e dizer se o primeiro esta¡ entre os outros dois quando esses forem diferentes entre si.\n" );
  printf ( "10 - ler tres valores reais do teclado e dizer se o primeiro nao esta entre os outros dois quando esses forem diferentes entre si.\n");
  
  printf ( "Escolher a opcao\n" ); 	
  opcao = readint ( "Insira uma opcao (valor inteiro)!\n" );
  
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
  case 4:
    Metodo04 (); //
   break;
  case 5:
    Metodo05 (); //
   break;
  case 6:
    Metodo06 (); //
   break;
  case 7:
    Metodo07 (); //
   break;
  case 8:
    Metodo08 (); //
   break;
  case 9:
    Metodo09 (); //
   break;
  case 10:
    Metodo10 (); //
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

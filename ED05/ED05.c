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
void Metodo01 (  )
{
      printf ("Executa o Metodo01 ");
        int multiplo ( int x )
        {
			// definir dado local
			int z = 1;
				// repetição y = controle <= x (quantidade)
				for (int y = 1; y <= x; y = y + 1)
				{
				z = 3 * y;
				// mostrar valor
				printf ( "%d: %d\n", y, z );
				}//end for
		return ( x );		
		}//end function		
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );

}//end Metodo01

void Metodo02 ( )
{
    printf ("Executa o Metodo02 \n");
		int impares ( int x, int* m )
		{
			printf ("Entre com um quantidade: ");
			scanf  ("%i", &x);
			for(int i = 0; i < x; i = i + 1)
			{
			   if(m[i] % 3 == 0)
			   {
				 printf("%i", m[i]);
			   }//end if
			}//end for
		return ( x );	
		}//end function	
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo03 ( )
{
    printf ("Executa o Metodo03\n");
	int x  = 0;
	int* m = 0;
    printf("\nOrdem crescente dos numeros multiplos de 3 e impares: ");
	   for(int i = 0; i < x; i = i - 1)
	   {
		   if(m[i] % 3 == 0 && m[i] % 2 != 0)
		   {
			 printf("%i", m[i]);
		   }//end if
	   }//end for
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}//end Metodo03 ( )

void Metodo04 ( )
{
    printf ("Executa o Metodo04\n");
    int multiplo ( int x, int* m )
    {
		for(int i = 0; i < x; i = i + 1)
		{
		   if(m[i] % 3 == 0)
		   {
			 printf("1/%i", m[i]);
		   }//end if
		}//end for
	return x;
}//end function	
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
}//end Metodo04

void Metodo05 ( )
{
    printf ("Executa o Metodo05\n");
    int decresce ( int x, int* m, int y)
    {
		for(int i = 0; i < x; i = i + 1)
		{
		   for(int j = i + 1; j < x; j = j + 1)
		   {
			if(m[i] < m[j])
			{
				y = m[i];
				m[i] = m[j];
				m[j] = y;
			}//end if
		   }//end for
		   if(m[i] % 3 == 0 && m[i] % 2 == 0)
		   {
			 printf("%i",m[i]);
		   }
		}//end for 
   return x;	
	}//end function
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
}//end Metodo05

void Metodo06 ( )
{
    printf ("Executa a acao 3\n");
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
}//end Metodo06

void Metodo07 ( )
{
    printf ("Executa a acao 3\n");
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo08 ( )
{
    printf ("Executa a acao 3\n");
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo09 ( )
{
    printf ("Executa a acao 3\n");
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo10 ( )
{
    printf ("Executa a acao 3\n");
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo11 ( )
{
    printf ("Executa a acao 3\n");
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
void Metodo12 ( )
{
    printf ("Executa a acao 3\n");
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
  //
}
/**
  Acao principal.
*/
int main (int argc, char* argv [ ] )
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
  printf ( "1 - Mostrar essa quantidade em valores múltiplos de 3 em ordem crescente.\n" );
  printf ( "2 - .\n" );
  printf ( "3 - Mostrar essa quantidade em valores pares múltiplos de 3 em ordem decrescente.\n" );
  printf ( "4 - Mostrar essa quantidade em valores crescentes nos denominadores(sequência dos inversos) múltiplos de 3: 1/3 1/6 1/9 1/12 1/15.\n" );
  printf ( "5 - .\n" );
  printf ( "6 - .\n" );
  printf ( "7 - .\n" );
  printf ( "8 - .\n" );
  printf ( "9 - .\n" );
  printf ( "10 - .\n");
  printf ( "11 - .\n");
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
  case 11:
    Metodo11 (); //
   break;
  case 12:
    Metodo12 (); //
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

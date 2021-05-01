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
    printf ("Aperte ENTER para continuar!\n");
    getchar ();
}//end Metodo00

void Metodo01 ( )
{
    printf ("Executa o Metodo01\n");
		double LimiteInferior = 0.0;
		double LimiteSuperior = 0.0;
		double test = 0.0;
		int qtd = 0;
		int maiorValor = 0;
		int menorValor = 0;
		int contIn = 0;
		int contOut = 0;
		
		printf ("Insira o Limite Inferior: ");
		scanf  ("%lf", &LimiteInferior);
		
		printf ("Insira o Limite Superior: ");
		scanf  ("%lf", &LimiteSuperior);
		
		printf ("Insira a quantidade a ser testada: ");
		scanf  ("%d", &qtd);
			
			if (LimiteInferior > LimiteSuperior)
			{
					maiorValor = LimiteInferior;
					menorValor = LimiteSuperior;
			}//end if
			else
			{
					maiorValor = LimiteSuperior;
					menorValor = LimiteInferior;
			}//end else
			
				for (int i = 0; i < qtd; i = i + 1)
				{
						printf ("Digite um numero a ser testado: ");
						scanf  ("%lf", test);
						if (test >= menorValor && test <= maiorValor)
						{
							contIn = contIn + 1;
						}//end if
						else
						{
								contOut = contOut + 1;
						}//end else
				}//end for
					printf ("Numeros dentro do intervalo: %d", contIn);
					printf ("Numeros fora do intervalo: %d", contOut);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
      //
}//end Metodo01

void Metodo02 ( )
{
		printf ("Executa o Metodo02 \n");
		int verifica (char* C, int qtd)
{
	int x = 0;//FALSE
    //char* C = (char*) malloc (80 * sizeof (char));
    
    C = malloc (50 * sizeof (char));  //
    scanf ( "%s", C );                //
	
    for (int i = 0; i < strlen(C); i = i + 1)
	{
		
		if (C[i] >= 'A' && C[i] <= 'Z')
		{
			qtd = qtd + 1;
			x = 1;//Condição caso verdadeiro
		}//end if
	}//end for
	if (x == 0)
	{
		printf ("Nao ha letras maiusculas!\n");
	}//end if
   return ( qtd );
}//end função

		char* s_C;
        s_C = ((char*) malloc (80 * sizeof (char)));
		s_C = verifica;
        int qtd = 0;
    
			printf ("Insira uma sequencia de caracteres: ");
			scanf  ("%s", s_C);
			
			printf ("%d\n", qtd);
			printf ("%c\n", s_C);  
	return 0;    
	
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
 
}//end Metodo02

/*void Metodo03 ( )
{
    printf ("Executa o Metodo03\n");
    int verifica (char &C)
    {
		char C[50];
		int x = 0;//false
		int cont = 0;//contador

		printf ("Insira uma palavra do teclado!\n");
		scanf  ("%s", C);

		for (int i = 0; i < strlen(C); i = i + 1)
		{
			if (C[i] >= 'A' && C[i] <= 'Z')
			{
				x = 1;
				cont = cont + 1;
				printf ("%c\n", C[i]);
				printf ("%d\n", cont);
			}//end if
		}//end for

		if (x == 0)
		{
			printf ("Nao ha letras maiusculas!\n");
		}//end if
	}//end metodo
		char s_C;
		s_C = verifica;
		printf ("Insira uma sequencia de caracteres do teclado: ");
		scanf  ("%s", s_C);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
}//end Metodo03

void Metodo04 ( )
{
    printf ("Executa o Metodo04\n");
		void char (char* C)
		{
			C = malloc (sizeof (C));
			int x = 0;//false
			int cont = 0;
			
			printf ("Insira uma palavra!\n");
			scanf  ("%s", C);
			//verificação de letras maiusculas
			for (int i = 0; i < strlen(C); i = i + 1)
			{
				if ((C[i] >= 'A' && C[i] <= 'Z') || (C[i] >= 'a' && C[i] <= 'z'))
				{
					x = 1;
					cont = cont + 1;
					printf ("%c %d", C[i], cont);	
				}//end if
			}//end for

			if (x == 0)
			{
				printf ("Nao ha letras minusculas e/ou maiusculas!\n");
			}//end if
		}//end função	
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
 
}//end Metodo04

void Metodo05 ( )
{
    printf ("Executa a acao 3\n");
		char C [50];
		int x = 0;//False
		int cont = 0;

		printf ("Insira uma cadeia de caracteres!\n");
		scanf  ("%s", C);

		for (int i = 0; i < strlen(C); i = i + 1)
		{
			if (C[i] >= '0' && C[i] <= '9')
			{
				x = 1;
				cont = cont + 1;
				printf ("Digitos:  %c\n", C[i]);
			}//end if
		}//end for
			if (x == 0)
			{
				printf ("Nao ha digitos!\n");
			}//end if
			else
			{
				printf ("A quantidade de digitos sao: %d\n", cont);
			}//end else
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );

}//end Metodo05

void Metodo06 ( )
{
    printf ("Executa o Metodo06\n");
		char C [50];
		int x = 0;//false
		int cont = 0;

		printf ("Insira uma cadeia de caracteres!\n");
		scanf  ("%s", C);

		for (int i = 0; i < strlen(C); i = i + 1)
		{
			if (C[i] >= 48 && C[i] <= 57 || C[i] >= 65 && C[i] <= 90 || C[i] >= 97 && C[i] <= 122)
			{
				x = 1;
				printf ("%c", C[i]);
				
			}//end if
		}//end for

		if (x == 0)
		{
			cont = cont + 1;
			printf ("A quantidade de simbolos especiais sao: %d\n", cont);
		}//end if
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
 
}//end Metodo06

void Metodo07 ( )
{
    printf ("Executa o Metodo07\n");
    int d = 0;//Limite Inferior
    int a = 0;//Limite Superior
    int m = 0;//Múltiplo
    int numero = 0;
    int i = 0;//Quantidade


        numero = i = d = a = m = 0;

        printf("\nPROGRAMA MULTIPLOS\n\n");
        printf("De: ");
        scanf("%d", &d);
        printf("Ate: ");
        scanf("%d", &a);

        printf("Entre com a quantidade: ");
        scanf("%d", &i);

       // printf ( "d=%i a=%i i=%i\n", d, a, i );
    
       while (i > 0)
       {
        printf("Entre com a numero: ");
        scanf("%d\n", &numero);
        printf ( "%d\n", numero );
        if (numero % 3 == 0) 
        {    
            printf("Numero multiplo\n");
            m = m + 1;
        }   
        
        i = i-1;
       }
 
   
    printf("\nEntre %d e %d temos %d multiplos\n", d, a, m);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
    
}//end Metodo07

void Metodo08 ( )
{
    printf ("Executa a acao 3\n");
    int d = 0;//Limite Inferior
    int a = 0;//Limite Superior
    int m = 0;//Múltiplo
    int numero = 0;
    int i = 0;//Quantidade


        numero = i = d = a = m = 0;

        printf("\nPROGRAMA MULTIPLOS\n\n");
        printf("De: ");
        scanf("%d", &d);
        printf("Ate: ");
        scanf("%d", &a);

        printf("Entre com a quantidade: ");
        scanf("%d", &i);

        printf ( "d= %i a= %i i= %i\n", d, a, i );
    
       while (i > 0)
       {
        printf("Entre com a numero: ");
        scanf("%d\n", &numero);
        printf ( "%d\n", numero );
        if (numero % 5 == 0 && numero % 7 != 0) 
        {    
            printf("Numero multiplo\n");
            m = m + 1;
        }   
        
        i = i-1;
       }
 
   
    printf("\nEntre %d e %d temos %d multiplos\n", d, a, m);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );

}//end Metodo08

void Metodo09 ( )
{
    double d = 0.0;//Limite Inferior
    double a = 0.0;//Limite Superior
    int par = 0;//Par
    int numero = 0;
    int i = 0;//Quantidade


        numero = i = d = a = par = 0;

        printf("\nPROGRAMA PARES\n\n");
        printf("De: ");
        scanf("%lf", &d);
        printf("Ate: ");
        scanf("%lf", &a);

        printf("Entre com a quantidade: ");
        scanf("%d", &i);

        //printf ( "d= %i a= %i i= %i\n", d, a, i );
    
       while (i > 0)
       {
        printf("Entre com a numero: ");
        scanf("%d\n", &numero);
        printf ( "%d\n", numero );
        if (numero % 2 == 0) 
        {    
            printf ("Numero par: %d\n", par);
            par = par + 2;
        }   
        
        i = i - 1;
       }
    printf("\nEntre %lf e %lf temos %i pares\n", d, a, par);
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );

}//end Metodo09

void Metodo10 ( )
{
    printf ("Executa o Metodo10\n");
    
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
 
}//end Metodo10

void Metodo11 ( )
{
    printf ("Executa a acao 3\n");
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
  
}//end Metodo11

void Metodo12 ( )
{
    printf ("Executa a acao 3\n");
    printf ( "\nApertar ENTER para continuar.\n" );
    getchar( );
}//end Metodo12
*/
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
  printf ( "1 - .\n" );
  printf ( "2 - .\n" );
  printf ( "3 - .\n" );
  printf ( "4 - .\n" );
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
    Metodo00 ();
   break;
  case 1:
    Metodo01 ();
   break;
  case 2:
    Metodo02 ();
   break;
  /* case 3:
    Metodo03 ();
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
   break;    */    
  default:
    printf ("\nERRO 404 option not found!"); //
}
}
while ( opcao != 0 );
    printf ( "\nApertar ENTER para terminar.\n" );
    getchar( );
    
    return ( 0 );
} // fim main ( )
//Obs.: Não entendi ainda o formato de função e procedimento, está confuso ainda, não pude desenvolver o ED!

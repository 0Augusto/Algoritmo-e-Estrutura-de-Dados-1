#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>
#include "io.h"
/* ED07 - v0.0.1 - 16 / 04 / 2020    Author: Henrique Augusto Rodrigues  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o ED07    ED07    
    Windows: gcc -o ED07.exe  ED07 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./ED07   Windows:   ED07  */ 
   void Metodo00();
   void Metodo01();
   void Metodo02();
   void Metodo03();
   void Metodo04();
   void Metodo05();
   void Metodo06();
   void Metodo07();
   void Metodo08();
   void Metodo09();
   void Metodo10();
   void Metodo11();
   void Metodo12();
int main(){
   int x = 0;
   printf("ED06- v0.0.1");
   printf("\nAuthor: Henrique Augusto Rodrigues\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1 - gravar essa quantidade em múltiplos de 5, ímpares, em ordem crescente, começando em 5.\n");
      printf("2-\n");
      printf("3-\n");
      printf("4-\n");
      printf("5-\n");
      printf("6-\n");
      printf("7-\n");
      printf("8-\n");
      printf("9-\n");
      printf("10-\n");
      printf("11-\n");
      printf("12-\n");
      scanf("%i",&x);
      switch(x)
      {
         case 0:
            Metodo00();
            break;
         case 1:
            Metodo01();
            break;
         case 2:
            Metodo02();
            break;
         case 3:
            Metodo03();
            break;
         case 4:
            Metodo04();
            break;
         case 5:
            Metodo05();
            break;
         case 6:
            Metodo06();
            break;
         case 7:
            Metodo07();
            break;
         case 8:
            Metodo08();
            break;
         case 9:
            Metodo09();
            break;
         case 10:
            Metodo10();
            break;
         case 11:
            Metodo11();
            break;
         case 12:
            Metodo12();
            break;
         default:
            printf("O valor selecionado nao e valido tente outro\n");
            x=1;
      }
   }while(x!=0);
   printf("aperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}
void metodo00()
{
}
void Metodo01()
{
	FILE * arquivo;
	arquivo   = fopen ("Arquivo", "wt");//Abrir arquivo para leitura e gravação
	int valor = 0;
	int dados = 0;
	
	int array [ 100 ];
	int posicao = 0;
	
	int gravados = 0;
	
	FILE * Multiplos;
	Multiplos = fopen ("JacksonsFive", "wt");//Abrir arquivo para leitura e gravação
	//Identificação
	printf ("\nMetodo01\n");
		if (arquivo == NULL)
		{
			printf ("404 - X-FILE NOT FOUND!");
		}//end if
		else
		{
		//Se arquivo existir
		//tentativa de leitura do primeiro dado
		fscanf (arquivo, "%d", &valor);	
		while (! feof (arquivo))
		{
			//cont +1 dado
			array [dados] = valor; //Guarda o valor lido
			dados = dados + 1;
			//Ler próximo dado
			fscanf (arquivo, "%d", &valor);
		}//end while
			//Fechamento do arquivo
			fclose (arquivo);
			//Mostra os dados guardados
			for (posicao = 5; posicao < dados; posicao = posicao + 1)
			{
					if (array [posicao] % 5 == 0)
					{
							fprintf (Multiplos, "%d\n", array [posicao]);
							gravados = gravados + 1;
					}//end if
					
			}//end for
			//Fechamento dos multiplos
			fclose (Multiplos);
			//mostrar a quantidade de dados lidos
			printf ( "\ndados lidos    = %d", dados    );
			//mostrar a quantidade de multiplos de 5
			printf ( "\ndados gravados = %d", gravados );
  
		}//end else
}//end Metodo01

void metodo2()
{
   void arranjo(int arranjo[], char n[], int t);
   char nome[50];
   int x = 0;
   int g[10];
   printf("Digite o nome do arquivo que deseja testar\n");
   scanf("%s", nome);
   arranjo(g, nome, x);
}
void arranjo(int arranjo[], char n[], int t)
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE* arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");
   
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if ( i <=0)
      {
         for (comparador=0; comparador < i; comparador++ )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            if (aux >= 0 && (aux % 2  == 0)) 
            {
               t++;// se for par positivo muda a posição e o tamanho do arranjo
               arranjo[t-1]=aux;
            }
         }  
         printf("O tamanho do arquivo e %i e  os numeros pares positivos contidos nele sao:\n", i);
         for (comparador = 0; comparador < t; comparador++)
         {
            printf("%i - ", arranjo[comparador]);
         }
      }
      else
      {
         printf("Erro, o arquivo e maior que o esperado\n");
      }
   }

   fclose( arquivo );
}
void metodo3()
{
   int limite1 = 0;
   int limite2 = 0;
   int quantidade = 0;
   int t=0;
   int num[10];
   int aleatorio (int x, int y);
   FILE* arquivo = fopen("DADOS.TXT", "wt");
   printf("Digite o limite inferior para o numero aleatorio \n");
   scanf("%i" , &limite1);
   do 
   {
      printf("Digite o limite superior para o numero aleatorio \n");
      scanf("%i", &limite2);
      if( limite2 < limite1)
      {
         printf("O limite superior e menor que o infeiror (%i), tente outro \n", limite1);  
      }
   }while ( limite2 < limite1);
   printf("Os limites para o numero aleatorio sao [%i,%i]\n", limite1, limite2);
   printf("Digite a quantidade de numeros a serem gerados aleatoriamente (limite = 10) \n");
   scanf("%i", &quantidade);
   if(quantidade <=10)
   {
      srand(time(NULL));
      fprintf(arquivo, "%i\n", quantidade);
      for (quantidade = quantidade; quantidade > 0; quantidade--)
      {
         t++;
         num[t-1] = aleatorio (limite1, limite2);  
      }
      for ( quantidade = 0;quantidade < t; quantidade++)
      {
         fprintf(arquivo, "%i\n", num[quantidade]);
      }
   }
   else
   {
      printf("Erro, o numero e maior que 10");
   }
   fclose(arquivo);
}
int aleatorio (int x, int y)
{
   int aleat = 0;
   aleat = x + (rand() % y);
   return aleat;
}
void metodo4()
{  
   char c[80];
   int t = 0;
   int arranjo[10];
   int arranjomaior(char n[], int t, int arranjo[]);
   printf("Digite o nome do arquivo que deseja ler\n");
   scanf("%s", c);
   printf("Maior = %i",arranjomaior(c, t, arranjo));
}
int arranjomaior(char n[], int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   int maior (int x[], int y);
   int nmaior =0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE* arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");  
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if(i <=10)
      {
         for (comparador=0; comparador < i; comparador++ )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            arranjo[t]=aux;
            printf("%i\n", arranjo[t]);
            t++;// se for par positivo muda a posição
         }
         t= t-1;
         printf("%i\n", arranjo[t]);
         nmaior = maior (arranjo, t);
      }
      else
      {
         printf("Erro, o arquivo e maior que o esperado\n");
      }
   
      fclose (arquivo);
   }
   return nmaior;  
}   
int maior (int x[], int y)
{
   int maior = x[y];
   while (y > 0)
   {
      if(maior < x[y-1])
      {
         maior = x[y-1];
      }
      y--;
   }
   return maior;
}
void metodo5()
{  

   int t = 0;
   int arranjo[100 + 1];
}
int arranjomenor(int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int n = 0;//Quantidade
   int h = 0;
   double x = 0;
   int exp = 0;//expoente
   int aux = 0;//variavel aux para leitura do arquivo
   FILE* arquivo = fopen( h, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");  
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if(i <= 100)
      {
         for (comparador = 0; comparador < i; comparador = comparador + 1 )//repetir o tamanho do arquivo vezes
         {
			 n = pow(x, exp);
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            t = t + 1;// se for par positivo muda a posição 
            arranjo[t-1]=aux;
            printf("1/%i\n", x);
         }
      }
      else
      {
         printf("Error, o arquivo e maior que o esperado\n");
      }
      fclose (arquivo);
   }
   nmenor = menor (arranjo, t);
   return nmenor;  
}   
int menor (int x[], int y)
{
   int menor = x[y];
   while (y > 0)
   {
      if(menor > x[y-1])
      {
         menor = x[y-1];
      }
      y--;
   }
   return menor;
}
void metodo6()
{  
   char c[80];
   int t = 0;
   int arranjo[10];
   float arranjomedia(char n[], int t, int arranjo[]);
   printf("Digite o nome do arquivo que deseja ler\n");
   scanf("%s", c);
   printf("Media = %f",arranjomedia(c, t, arranjo));
}
float arranjomedia(char n[], int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   float media (int x[], int y);
   float nmedia = 0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE* arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");  
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if(i <= 10)
      {
         for (comparador=0; comparador < i; comparador++ )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            t++;// se for par positivo muda a posição do arranjo
            arranjo[t-1]=aux;
            printf("%i\n", arranjo[t-1]);
         }
         t = t-1;
         nmedia = media (arranjo, t);
      }
      else
      {
         printf("Erro, o arquivo e maior que a cadeia");
      }
      
      fclose (arquivo);
   }
   
   return nmedia;  
}   
float media (int x[], int y)
{
   float divisor = (y+1);
   float media = x[y];
   while (y > 0)
   {
      media = x[y-1] + media;
      y--;
   }
   return (media/divisor);
}

void metodo7()
{
   int t   = 0;
   int base = 0;
   int pot = 0;
   int arranjo[100 + 1];
   int contador   = 0;
   //bool ordem(int x[], int y);
   do
   {
   printf("Digite o tamanho do arranjo ate 100\n");
   scanf("%i", &t);
   }while(t > 100);
   for (contador = 0; contador < t; contador = contador + 1)
   {
      printf("Digite o valor [%i] do arranjo:\n", contador + 1);
      scanf("%i", &arranjo[contador]);   
   }
    base = pow(pot, t);
   return base;
}//end Metodo07

void metodo8()
{
   FILE* arquivo = fopen ("DADOS.TXT", "r");
   int t = 0;
   int* arranjo [];
   int comparador = 0;
   int procurado  = 0;
   int fibon      = 0;
   bool procurar (int x[], int procurado, int i);
   fscanf(arquivo, "%i", &t);
   if( t <= arranjo)
   {
      for (comparador = 0; comparador < t; comparador = comparador + 1)
      {
         fscanf(arquivo, "%i", &arranjo[comparador]);
      //printf("%i - ", arranjo[comparador]);
      }
      printf("Digite o valor que deseja procurar\n");
      scanf("%i", &procurado);
      int resposta = procurar (arranjo, procurado, t);
      if (resposta == 0)
      {
		  procurado = Fibon(t - 1) + Fibon(t - 2);
         printf("%s%i%s","O termos impar de Fibonacci [",procurado,"] procurado\n");
      }
      else
      {
         printf("%s%i%s","O arranjo contem o valor [",procurado,"] procurado\n");
      }
   }
   else 
   {
      printf("Erro, o arquivo e maior que o esperado");
   }
   
   fclose(arquivo);
}
bool procurar (int x[], int procurado, int i)
{
   bool resposta = 0;

   while (i-1 > -1 && resposta != 1)
   {
      resposta = (x[i-1] == procurado);
      i--;
   }
   return resposta;
}//end Metodo08

void Metodo9()
{
   char* c;
   char* palavra();
   int contador = 0;
   c = palavra();
   char mostrar[100 + 1];
   contador = 0;
   //printf("%s",c);
   FILE* arq = fopen (c, "rt");
   printf("As 10 primeiras palavras lidas no arquivo que nao comecam com a sao:\n");
   for(contador = 0 ; contador < 10; contador = contador + 1)
   {
      fgets(mostrar, 100, arq);
      printf("[%i]%s",contador + 1, mostrar);
   }

   fclose(arq);
}

char* palavra()
{
   FILE* arq = fopen ("sema.TXT", "wt");
   static char a[9] = "sema.TXT";
   FILE* arquivo = fopen("palavras.TXT","rt");
   char c[100];
   int contador = 0;
   int cont =0;
   do
   {
      fgets(c, 100, arquivo);
      if (c[0]!= 'a' && c[100]!= 'z')
      {
         fprintf(arq,"%s",c);
         fgets(c, 100, arquivo);
        //printf("[%i] %s",contador+1, c);
         contador = contador + 1;
      }
      cont = cont + 1;   
   }while(contador < 10 && cont < 100);
   fclose(arquivo);
   fclose(arq);
   return &(a[0]);
}//end Metodo09

void Metodo10()
{
   FILE* arquivo = fopen ("DADOS.TXT", "r");
   int t = 0;
   int arranjo [t];
   int comparador = 0;
   int procurado = 0;
   int resposta =0;
   int quantidade(int x[], int procurado, int i);
   fscanf(arquivo, "%i", &t);
   for (comparador = 0; comparador < t; comparador = comparador + 1)
   {
      fscanf(arquivo, "%i", &arranjo[comparador]);
      //printf("%i - ", arranjo[comparador]);
   }
   printf("Digite o valor que deseja procurar\n");
   scanf("%i", &procurado);
   resposta = quantidade (arranjo, procurado, t);
   if (resposta == 0)
   {
      printf("%s%i%s","O arranjo nao contem o valor [",procurado,"] procurado\n");
   }
   else
   {
      printf("%s%i%s%i%s","O arranjo contem o valor [",procurado,"] procurado ", resposta," vezes\n");
   }
   fclose(arquivo);
}
int quantidade (int x[], int procurado, int i)
{
   int posicao = 0;
   int resp    = 0;
   while (posicao < i)
   {
      if (x[posicao] == procurado)
      {
      resp = resp + 1;
      }
      posicao = posicao + 1;
   }
   return resp;
}//end Metodo10

void Metodo11()
{
   FILE* arquivo = fopen ("divisores.TXT", "wt");
   int* divisoresarray(int x, int y);
   int quantidadediv(int x);
   int n = 0;
   int t = 0;
   int* y = 0;
   int aux = 0;
   printf("Digite o numero que deseja imprimir seus divisores\n");
   scanf("%i", &n);
   t = quantidadediv(n);
   fprintf(arquivo,"%i\n", t);// imprimir o numero de divisores
   printf("O numero de divisores de %i e %i\n",n, t);// imprimir o numero de divisores
   int* cadeia= divisoresarray(n, t);
   printf("%s%i%s", "Os divisores de ", n, " sao\n");
   while (aux < t)
   {
      printf("%i - ", cadeia[aux]);
      fprintf(arquivo,"%i\n", cadeia[aux]);
      aux = aux + 1;
   }
   fclose(arquivo);
}
   
int* divisoresarray(int x, int y)
{
   int* cadeia= NULL;
   cadeia = (int*) malloc(100*sizeof(int));
   int contador = 0;
   int div = 1;
   while (div <= x)
   {
      if( x % div == 0)
      {
         cadeia[contador] = div;
         contador = contador + 1;
      }
      div = div + 1;
   }
   return cadeia;
}

int quantidadediv(int x)
{
   int contador = 0;
   int div = 1;
   while (div <= x)
   {
      if( x % div == 0)
      {
         contador = contador + 1; 
      }
      div = div + 1;
   }
   return contador;
}//end Metodo11

void Metodo12()
{
   char* c;
   char* palavra();
   int contador = 0;
   c = palavra();
   char mostrar[100 + 1];
   contador = 0;
   //printf("%s",c);
   FILE* arq = fopen (c, "rt");
   printf("As 10 primeiras palavras lidas no arquivo que nao comecam com a sao:\n");
   for(contador = 0 ; contador < 10; contador = contador + 1)
   {
      fgets(mostrar, 100, arq);
      printf("[%i]%s",contador + 1, mostrar);
   }

   fclose(arq);
}

char* palavra()
{
   FILE* arq = fopen ("sema.TXT", "wt");
   static char a[9] = "sema.TXT";
   FILE* arquivo = fopen("palavras.TXT","rt");
   char c[100];
   int contador = 0;
   int cont =0;
   do
   {
      fgets(c, 100, arquivo);
      if (c[0]!= 'a' && c[0]!= 'A')
      {
         fprintf(arq,"%s",c);
         fgets(c, 100, arquivo);
        //printf("[%i] %s",contador+1, c);
         contador = contador + 1;
      }
      cont = cont + 1;   
   }while(contador < 10 && cont < 100);
   fclose(arquivo);
   fclose(arq);
   return &(a[0]);
}//end Metodo12

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <conio.h>
/* exemplo08e2 - v0.0.1 - 12 / 5 / 2020    Author: Henrique Augusto Rodrigues - 675263  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o ED08    ED08    
    Windows: gcc -o ED08.exe  ED08 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./exemplo08e2   Windows:   exemplo08e2  */ 
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
   printf("exemplo08e2- v0.0.1");
   printf("\nAuthor: Henrique Augusto Rodrigues - 675263\n");
   do
   {
      printf("0-sair do programa\n");
      printf("1-ler tamanho do arranjo, e seus componentes pares e positivos.\n");
      printf("2-ler um arranjo de arquivo, ler o tamanho e seus componentes, sendo pares e positivos.\n");
      printf("3-ler os limites e criar numeros aleatorios e escreve-los em arquivo.\n");
      printf("4-procurar o valor maior em um arquivo, separados em um vetor.\n");
      printf("5-procurar o valor menor em um arquivo, separdos em um vetor.\n");
      printf("6-calcular a media dos numeros de um arquivo, separdos em um vetor.\n");
      printf("7-ler um arquivo e dizer se seus componentes estao ordenados.\n");
      printf("8-ler um arquivo, separar em um vetor e dizer se um numero procurado esta nele.\n");
      printf("9-ler um arquivo, separar em um vetor e dizer a posicao de um numero procurado.\n");
      printf("10-ler um arquivos, separar em um vetor e dizer quantas vezes um numero procurado aparece.\n");
      printf("11-ler um inteiro e separar em um vetor e arquivo seus divisores.\n");
      printf("12-ler de um arquivo e retornar as 10 primeiras palavras que nao comecam com a letra a.\n");
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
            x = 1;
      }
   }while(x!=0);
   printf("aperte ENTER para finalizar o programa");
   fflush ( stdin ); // limpar a entrada de dados     
   getchar( );  // aguardar por ENTER   
   return (0);
}
void metodo0()
{
	printf ("Para a execucao do programa!");
}
void metodo1()
{
   int t = 0;
   int comparador = 0;
   do
   {
      printf("Digite o tamanho do arranjo, sendo um valor maior 0\n");
      scanf("%i", &t);
      if (t <= 0)
      {
         printf("O valor (%i) escolhido eh menor do que 0 e nao pode ser considerado com tamanho de um arranjo, tente outro\n", t);
      }
   } while (t <= 0);
   int arranjo[t];
   while (comparador < t)
   {
      printf("Digite o elemento [%i] do vetor, sendo par e > 0\n", comparador + 1);
      scanf("%i", &arranjo[comparador]);
      if (arranjo[comparador] % 2 == 0 && arranjo[comparador] > 0 )
      {
         comparador = comparador + 1;
      } 
      else 
      {
         printf("O numero escolhido nao e par ou nao e positivo, tente outro\n");
      }
   }
   printf("Os elementos do arranjo sao:\n");
   for (comparador = 0; comparador < t; comparador = comparador + 1)
   {
      printf("%i - ", arranjo[comparador]);
   }
}
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
   int aux = 0;//variavel auxiliar para leitura do arquivo
   FILE * arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("O arquivo nao existe\n");
   
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if ( i <=0)
      {
         for (comparador=0; comparador < i; comparador = comparador + 1 )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            if (aux >= 0 && (aux % 2  == 0)) 
            {
               t = t + 1;//Caso par positivo muda a posição e o tamanho do arranjo
               arranjo[t-1]=aux;
            }//end if
         }//end for  
         printf("O tamanho do arquivo e %i e  os numeros pares positivos contidos nele sao:\n", i);
         for (comparador = 0; comparador < t; comparador = comparador + 1)
         {
            printf("%i - ", arranjo[comparador]);
         }//end for
      }//end if
      else
      {
         printf("Erro, o arquivo e maior que o esperado!\n");
      }
   }

   fclose( arquivo );
}
void metodo3()
{
   int limiteInferior = 0;
   int limiteSuperior = 0;
   int quantidade = 0;
   int t=0;
   int num[10];
   int aleatorio (int x, int y);
   FILE * arquivo = fopen("DADOS.TXT", "wt");
   printf("Digite o limite inferior para o numero aleatorio \n");
   scanf("%i" , &limiteInferior);
   do 
   {
      printf("Digite o limite superior para o numero aleatorio \n");
      scanf("%i", &limiteSuperior);
      if( limiteSuperior < limiteInferior)
      {
         printf("O limite superior e menor que o infeiror (%i), tente outro \n", limiteInferior);  
      }
   }while ( limiteSuperior < limiteInferior);
   printf("Os limites para o numero aleatorio sao [%i,%i]\n", limiteInferior, limiteSuperior);
   printf("Digite a quantidade de numeros a serem gerados aleatoriamente (limite = 10) \n");
   scanf("%i", &quantidade);
   if(quantidade <= 10)
   {
      srand(time(NULL));
      fprintf(arquivo, "%i\n", quantidade);
      for (quantidade = quantidade; quantidade > 0; quantidade = quantidade - 1)
      {
         t = t + 1;
         num[t-1] = aleatorio (limiteInferior, limiteSuperior);  
      }
      for ( quantidade = 0; quantidade < t; quantidade = quantidade + 1)
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
}//End Metodo03

void metodo4()
{  
   char c[80];
   char c[80] = '/0';
   int t = 0;
   int arranjo[10];
   int arranjomaior(char n[], int t, int arranjo[]);
   printf("Digite o nome do arquivo que deseja ler\n");
   scanf("%s", c);
   printf("Maior = %i", arranjomaior(c, t, arranjo));
}
int arranjomaior(char n[], int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   int maior (int x[], int y);
   int nmaior =0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE * arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("X-FILE do not exist!\n");  
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if(i <= 10)
      {
         for (comparador=0; comparador < i; comparador = comparador + 1 )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            arranjo[t] = aux;
            printf("%i\n", arranjo[t]);
            t = t + 1;//Caso seja par positivo muda a posição
         }
          t=  t- 1;
         printf("%i\n", arranjo[t]);
         nmaior = maior (arranjo, t);
      }
      else
      {
         printf("Erro, the X-FILE eh maior que o esperado!\n");
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
      y = y - 1;
   }
   return maior;
}//end Metodo04

void metodo5()
{  
   char c[80];
   //char c[80] = '/0';
   int t = 0;
   int arranjo[10];
   int arranjomenor(char n[], int t, int arranjo[]);
   printf("Digite o nome do arquivo que deseja ler\n");
   scanf("%s", c);
   printf("Menor = %i",arranjomenor(c, t, arranjo));
}
int arranjomenor(char n[], int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   int menor (int x[], int y);
   int nmenor =0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE * arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("The X-FILE does not exist!!\n");  
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if(i <= 10)
      {
         for (comparador=0; comparador < i; comparador = comparador + 1 )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);  // leitura do arquivo para o arranjo
            t = t + 1;//Caso par positivo, muda a posição 
            arranjo[t-1] = aux;
            printf("%i\n", arranjo[t-1]);
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
      y = y - 1;
   }
   return menor;
}//end Metodo05

void metodo6()
{  
   char c[80];
   //char c[80] = '/0';//Favor, conferir se posso utilizar dessa forma e nesse contexto!
   int t = 0;
   int arranjo[10];
   float arranjomedia(char n[], int t, int arranjo[]);
   printf("Digite o nome do arquivo que deseja ler\n");
   scanf("%s", c);
   printf("Media = %f", arranjomedia(c, t, arranjo));
}
float arranjomedia(char n[], int t, int arranjo[])
{
   int i = 0;// variavel para o tamanho do arquivo
   int comparador = 0;
   float media (int x[], int y);
   float nmedia = 0;
   int aux = 0;//variavel aux para leitura do arquivo
   FILE * arquivo = fopen( n, "rt");// definir como arquivo de leitura
   if (arquivo == NULL)
   {
      printf("The X-FILE do not exist!\n");  
   }
   else
   {
      fscanf(arquivo, "%d", &i);// leitura do tamanho do arquivo 
      if(i <= 10)
      {
         for (comparador=0; comparador < i; comparador = comparador + 1 )//repetir o tamanho do arquivo vezes
         {
            fscanf(arquivo, "%d", &aux);//Leitura do arquivo para o arranjo
            t = t + 1;//Caso par positivo, muda a posição do arranjo
            arranjo[t-1] = aux;
            printf("%i\n", arranjo[t-1]);
         }
         t = t - 1;
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
      y = y - 1;
   }
   return (media/divisor);
}//end Metodo06

void metodo7()
{
   int t = 0;
   int arranjo[20];
   int contador = 0;
   bool ordem(int x[], int y);
   do
   {
   printf("Digite o tamanho do arranjo menor ou igual a 20!\n");
   scanf("%i", &t);
   }while(t > 20);
   for (contador=0; contador < t; contador = comparador + 1)
   {
      printf("Digite o valor [%i] do arranjo:\n", contador + 1);
      scanf("%i", &arranjo[contador]);   
   }
   int resposta = ordem (arranjo, t);
   if (resposta == 1)
   {
      printf("%s","O arranjo nao esta ordenado!\n");
   }
   else
   {
      printf("%s","O arranjo esta ordenado!\n");
   }
}
bool ordem(int x[], int y)
{
   int contador = 0;
   bool resposta = 0;
   while (contador < y - 1 && resposta != 1)
   {
      resposta = (x[contador] > x[contador + 1]);
      contador = contador + 1;
   }
   return resposta;
}//end Metodo07

void Metodo8()
{
   FILE * arquivo = fopen ("DADOS.TXT", "r");
   int t = 0;
   int array [10];
   int compara = 0;
   int procurado = 0;
   bool procurar (int x[], int procurado, int i);
   fscanf(arquivo, "%i", &t);
   if( t <= 10)
   {
      for (compara = 0; compara < t; compara = compara + 1)
      {
         fscanf(arquivo, "%i", &array[comparador]);
      //printf("%i - ", array[compara]);
      }
      printf("Digite o valor que deseja procurar\n");
      scanf("%i", &procurado);
      int resposta = procurar (array, procurado, t);
      if (resposta == 0)
      {
         printf("%s%i%s","O arranjo nao contem o valor [",procurado,"] procurado\n");
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

   while (i - 1 > -1 && resposta != 1)
   {
      resposta = (x[i-1] == procurado);
      i = i - 1;
   }
   return resposta;
}//end Metodo08

void Metodo9()
{
   FILE * arquivo = fopen ("DADOS.TXT", "r");//Somente leitura
   int t = 0;
   int array [t];
   int compara = 0;
   int procurado = 0;
   int resposta =0;
   int posicao(int x[], int procurado, int i);
   fscanf(arquivo, "%i", &t);
   for (compara = 0; compara < t; compara = compara + 1)
   {
      fscanf(arquivo, "%i", &array[compara]);
      //printf("%i - ", arranjo[comparador]);
   }
   printf("Digite o valor que deseja procurar\n");
   scanf("%i", &procurado);
   resposta = posicao (array, procurado, t);
   if (resposta == 0)
   {
      printf("%s%i%s","O arranjo nao contem o valor [",procurado,"] procurado\n");
   }
   else
   {
      printf("%s%i%s%i","O arranjo contem o valor [",procurado,"] procurado na posicao ", resposta,"\n");
   }
   fclose(arquivo);
}
int posicao (int x[], int procurado, int i)
{
   bool resposta = 0;
   int posicao = 0;
   while (posicao < i && resposta != 1)
   {
      resposta = (x[posicao] == procurado);
      posicao = posicao + 1;
   }
   return posicao;
}//end Metodo09

void Metodo10()
{
   FILE * arquivo = fopen ("DADOS.TXT", "r");
   int t = 0;
   int arranjo [t];
   int comparador = 0;
   int procurado  = 0;
   int resposta   = 0;
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
      resp resp = reps + 1;
      }
      posicao = posicao + 1;
   }
   return resp;
}//end Metodo10
void Metodo11()
{
   FILE * arquivo = fopen ("divisores.TXT", "wt");
   int* divisoresarray(int x, int y);
   int quantidadediv(int x);
   int  n   = 0;
   int  t   = 0;
   int * y  = 0;
   int  aux = 0;
   printf("Digite o numero que deseja imprimir os divisores!\n");
   scanf("%i", &n);
   t = quantidadediv(n);
   fprintf(arquivo,"%i\n", t);// imprimir o numero de divisores
   printf("O numero de divisores de %i e %i\n",n, t);// imprimir o numero de divisores
   int * cadeia = divisoresarray(n, t);
   printf("%s%i%s", "Os divisores de ", n, " sao\n");
   while (aux < t)
   {
      printf("%i - ", cadeia[aux]);
      fprintf(arquivo,"%i\n", cadeia[aux]);
      aux = aux + 1;
   }
   fclose(arquivo);
}
   
int * divisoresarray(int x, int y)
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
   char * c;	
   //char * c = '\0';//Boa ideia?
   char * palavra();
   int contador = 0;
   c = palavra();
   char mostrar[100 + 1];
   contador = 0;
   //printf("%s",c);
   FILE* arq = fopen (c, "rt");
   printf("As 10 primeiras palavras lidas no arquivo que nao comecam com a sao:\n");
   for(contador = 0 ; contador < 10; contador = contador + 1)
   {
      fgets(mostrar ,100,arq);
      printf("[%i]%s",contador + 1, mostrar);
   }

   fclose(arq);
}

char * palavra()
{
   FILE* arq = fopen ("sema.TXT", "wt");
   static char a[9] = "sema.TXT";
   FILE* arquivo = fopen("palavras.TXT","rt");
   char c[100 + 1];
   int contador = 0;
   int cont =0;
   do
   {
      fgets(c,100, arquivo);
      if (c[0]!='a' && c[0]!='A')
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

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/* exemplo09e2 - v0.0.1 - 12 / 05 / 2020    Author: Henrique Augusto Rodrigues 
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o ED09    ED09    
    Windows: gcc -o ED09.exe  ED09 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./ED09   Windows:   ED09  */ 
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
int main()
{
   printf("ED08 - v0.0.1");
   printf("\nAuthor: Henrique Augusto Rodrigues\n")
   int x = 0;
   do
   {
      printf("0-Sair do programa\n");
      printf("1-Ler o numero de linhas, colunas e os termos de uma matriz e mostra-los na tela, salva-las em um arquivo e imprimir na tela informacoes do arquivo\n");
      printf("2-ler uma matriz e caso for quadrada imprimir sua diagonal principal\n");
      printf("3-ler uma matriz e caso for quadrada imprimir sua diagonal secundaria\n");
      printf("4-ler uma matriz e caso for quadrada imprimir os elementos abaixo da diagonal principal\n");
      printf("5-ler uma matriz e caso for quadrada imprimir os elementos acima da diagonal principal\n");
      printf("6-ler uma matriz e caso for quadrada imprimir os elementos abaixo da diagonal secundaria\n");
      printf("7-ler uma matriz e caso for quadrada imprimir os elementos acima da diagonal secundaria\n");
      printf("8-ler uma matriz e caso for quadrada testar se e triangular inferior\n");
      printf("9-ler uma matriz e caso for quadrada testar se e triangular superior\n");
      printf("10-ler colunas e linhas de uma matriz e escreve-la em um arquivo\n");
      
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
         default:
            printf("Comando invalido, tente outro\n");
            x = 1;
      }
   }while(x!=0);
   printf("Aperte enter para sair do programa\n");
   fflush( stdin);
   getchar();
   return (0);
}
void Metodo00()
{
	printf ("Cancela a execucao do programa!");
}
void Metodo01()
{
   int colunas = 0;
   int linhas  = 0;
   char nome[16];
   void mostrarmatriz(int x, int y, double m[x][y]);
   void arquivomatriz(int x, int y, double m[x][y], char c[]);
   do
   {
      printf("Digite o numero de linhas da matriz!\n");
      scanf("%i", &linhas);
      if(linhas <= 0)
      {
         printf("O numero de linhas e invalido, tente um valor nao nulo, positivo!\n");
      }
   }while(linhas <= 0);
   do
   {
      printf("Digite o numero de colunas da matriz!\n");
      scanf("%i", &colunas);
      if(colunas <= 0)
      {
         printf("O numero de colunas e invalido, tente um valor nao nulo, positivo!\n");
      }
   }while(colunas <= 0);
   double matriz [linhas][colunas];
   int aux1 = 0;
   int aux2 = 0;
   int continuar = 0;
   for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2< colunas; aux2 = aux2 + 1)
      {
         do
         {
            printf("Digite o termo [%i][%i] da matrix, sendo um valor positivo:\n",aux1 + 1, aux2 + 1);
            scanf("%lf", &matriz[aux1][aux2]);
            if(matriz[aux1][aux2] <= 0)
            {
               printf("O valor digitado nao e positivo tente outro!\n");
            }
         }while(matriz[aux1][aux2] <= 0);
      }
   }
   mostrarmatriz(linhas, colunas, matriz);
   printf("Digite 1 se quiser salvar a matrix em um arquivo\n");
   scanf("%i", &continuar);
   if(continuar == 1)
   {
      printf("Digite o nome do X-FILE!\n");
      scanf("%s", nome);
      arquivomatriz(linhas, colunas, matriz, nome);
   
   }
}
void mostrarmatriz(int x, int y, double m[x][y])
{
   printf("A matriz e:\n");
   for(int aux1 = 0; aux1 < x; aux1 = aux1 + 1)
   {
      for(int aux2 = 0; aux2 < y; aux2 = aux2 + 1)
      {
         printf("%lf\t", m[aux1][aux2]);
      }
      printf("\n");
   }
}
void arquivomatriz(int x, int y, double m[x][y], char c[])
{
   FILE * arquivo = fopen(c, "wt");
   void mostrararquivo(char c[]);
   for(int aux1 = 0; aux1 < x; aux1 = aux1 + 1)
   {
      for(int aux2 = 0; aux2 < y; aux2 = aux2 + 1)
      {
         fprintf(arquivo, "%lf\t", m[aux1][aux2]);
      }
      fprintf(arquivo,"\n");
   }
   fclose(arquivo);
   mostrararquivo(c);
}
void mostrararquivo(char c[])
{
   FILE * arquivo = fopen(c, "rt");
   char mostrar[100 + 1];
   fgets(mostrar,101, arquivo);
   while(!(feof(arquivo)))
   {
      printf("%s", mostrar);
      fgets(mostrar, 101, arquivo);
   }
   fclose(arquivo);
}//end Metodo02

void Metodo3()
{

   int colunas = 0;
   int linhas = 0;
   void mostrarmatriz(int x, int y, double m[x][y]);
   do
   {
      printf("Digite o numero de linhas da matrix!\n");
      scanf("%i", &linhas);
      if(linhas <= 0)
      {
         printf("O numero de linhas e invalido, tente um valor nao nulo e positivo!\n");
      }
   }while(linhas <= 0);
   do
   {
      printf("Digite o numero de colunas da matrix\n");
      scanf("%i", &colunas);
      if(colunas <= 0)
      {
         printf("O numero de colunas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(colunas <= 0);
   double matriz [linhas][colunas];
   int aux1 = 0;
   int aux2 = 0;
   for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2< colunas; aux2 = aux2 + 1)
      {
         do
         {
            printf("Digite o termo [%i][%i] da matriz, sendo um valor positivo:\n",aux1 + 1, aux2 + 1);
            scanf("%lf", &matriz[aux1][aux2]);
            if(matriz[aux1][aux2]<=0)
            {
               printf("O valor digitado nao e positivo tente outro\n");
            }
         }while(matriz[aux1][aux2] <= 0);
      }
   }
   mostrarmatriz(linhas, colunas, matriz);
   if( linhas == colunas)
   {
      printf("Eh uma matriz quadrada e sua diagonal principal eh:\n");
      for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
      {
         printf("%lf", matriz[aux1][aux1]);
         printf("\n");
         for (aux2 = 0; aux2 <= aux1; aux2 = aux2 + 1)
         {
            printf("\t");
         } 
      }
      
   }
   else 
   {
      printf("Nao e uma matriz quadrada, entao nao existe diagonal principal\n");
   
   }
   printf("\n");
}//end Metodo03

void Metodo04()
{

   int colunas = 0;
   int linhas = 0;
   void mostrarmatriz(int x, int y, double m[x][y]);
   do
   {
      printf("Digite o numero de linhas da matriz\n");
      scanf("%i", &linhas);
      if(linhas <= 0)
      {
         printf("O numero de linhas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(linhas <= 0);
   do
   {
      printf("Digite o numero de colunas da matriz\n");
      scanf("%i", &colunas);
      if(colunas <= 0)
      {
         printf("O numero de colunas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(colunas <= 0);
   double matriz [linhas][colunas];
   int aux1 = 0;
   int aux2 = 0;
   for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2< colunas; aux2 = aux2 + 1)
      {
         do
         {
            printf("Digite o termo [%i][%i] da matriz, sendo um valor positivo:\n", aux1 + 1, aux2 + 1);
            scanf("%lf", &matriz[aux1][aux2]);
            if(matriz[aux1][aux2] <= 0)
            {
               printf("O valor digitado nao e positivo tente outro\n");
            }
         }while(matriz[aux1][aux2]<=0);
      }
   }
   mostrarmatriz(linhas, colunas, matriz);
   if (linhas == 1 && colunas ==linhas)
   {
      printf("E uma matriz [1][1], e nao ha elementos abaixo da digonal secundaria\n");
   }
   else
   {
      if( linhas == colunas)
      {
         printf("Matrix eh quadrada e sua diagonal secundaria eh:\n");
         aux2 = 0;
         for(aux1 = colunas-1; aux1 >= 0; aux1 = aux1 - 1)
         {
            printf("%lf", matriz[aux2][aux1]);
            printf("\n");
            aux2 = aux2 + 1;
         }
      
      }
      else 
      {
         printf("Nao eh uma matrix quadrada, entao nao existe diagonal secundaria!\n");
      
      }
      printf("\n");
   }
}//end Metodo04

void Metodo05()
{

   int colunas = 0;
   int linhas  = 0;
   void mostrarmatriz(int x, int y, double m[x][y]);
   do
   {
      printf("Digite o numero de linhas da matrix!\n");
      scanf("%i", &linhas);
      if(linhas <= 0)
      {
         printf("Numero de linhas invalido, tente um valor nao nulo, positivo\n");
      }
   }while(linhas <= 0);
   do
   {
      printf("Digite o numero de colunas da matrix!\n");
      scanf("%i", &colunas);
      if(colunas <= 0)
      {
         printf("Numero de colunas invalido, tente um valor nao nulo, positivo\n");
      }
   }while(colunas <= 0);
   double matriz [linhas][colunas];
   int aux1 = 0;
   int aux2 = 0;
   for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2< colunas; aux2 = aux2 + 1)
      {
         do
         {
            printf("Digite o termo [%i][%i] da matriz, sendo um valor positivo:\n", aux1 + 1, aux2 + 1);
            scanf("%lf", &matriz[aux1][aux2]);
            if(matriz[aux1][aux2] <= 0)
            {
               printf("O valor digitado nao e positivo tente outro!\n");
            }
         }while(matriz[aux1][aux2] <= 0);
      }
   }
   mostrarmatriz(linhas, colunas, matriz);
   if (linhas == 1 && colunas == linhas)
   {
      printf("E uma matrix [1][1], enta nao ha elementos abaixo da digonal principal!\n");
   }
   else
   {
      if( linhas == colunas)
      {
         printf("E uma matriz quadrada e os elementos abaixo da diagonal principal sao:\n");
         for(aux1 = 1; aux1 < linhas; aux1 = aux1 + 1)
         {
            for (aux2 = 0; aux2 < aux1; aux2 = aux2 + 1)
            {
               printf("%lf ", matriz[aux1][aux2]);
            }
            printf("\n");
         }
      
      }
      else 
      {
         printf("Nao e uma matrix quadrada, entao nao existe diagonal principal\n");
      
      }
      printf("\n");
   }
}//end Metodo05

void Metodo06()
{
   int colunas = 0;
   int linhas  = 0;
   void mostrarmatriz(int x, int y, double m[x][y]);
   do
   {
      printf("Digite o numero de linhas da matrix\n");
      scanf("%i", &linhas);
      if(linhas <= 0)
      {
         printf("Numero de linhas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(linhas <= 0);
   do
   {
      printf("Digite o numero de colunas da matriz!\n");
      scanf("%i", &colunas);
      if(colunas <= 0)
      {
         printf("Numero de colunas invalido, tente um valor nao nulo, positivo\n");
      }
   }while(colunas <= 0);
   double matriz [linhas][colunas];
   int aux1 = 0;
   int aux2 = 0;
   for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2 < colunas; aux2 = aux2 + 1)
      {
         do
         {
            printf("Digite o termo [%i][%i] da matriz, sendo um valor positivo:\n", aux1 + 1, aux2 + 1);
            scanf("%lf", &matriz[aux1][aux2]);
            if(matriz[aux1][aux2] <= 0)
            {
               printf("O valor digitado nao e positivo tente outro\n");
            }
         }while(matriz[aux1][aux2] <= 0);
      }
   }
   mostrarmatriz(linhas, colunas, matriz);
   if (linhas == 1 && colunas == linhas)
   {
      printf("E uma matriz [1][1], e nao ha elementos abaixo da digonal principal!\n");
   }
   else
   {
      if( linhas == colunas)
      {
         printf("E uma matriz quadrada e os elementos acima da diagonal principal sao:\n");
         for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
         {
            for (aux2 = aux1 + 1; aux2 < colunas; aux2 = aux2 + 1)
            {
               printf("%lf ", matriz[aux1][aux2]);
            }
         }
      
      }
      else 
      {
         printf("Nao e uma matriz quadrada, entao nao existe diagonal principal\n");
      
      }
   }
   printf("\n");
}//end Metodo06

void Metodo07()
{
   int colunas = 0;
   int linhas = 0;
   void mostrarmatriz(int x, int y, double m[x][y]);
   do
   {
      printf("Digite o numero de linhas da matriz\n");
      scanf("%i", &linhas);
      if(linhas <= 0)
      {
         printf("O numero de linhas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(linhas <= 0);
   do
   {
      printf("Digite o numero de colunas da matriz\n");
      scanf("%i", &colunas);
      if(colunas <= 0)
      {
         printf("O numero de colunas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(colunas <= 0);
   double matriz [linhas][colunas];
   int aux1 = 0;
   int aux2 = 0;
   int aux3 = 0;
   for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2< colunas; aux2 = aux2 + 1)
      {
         do
         {
            printf("Digite o termo [%i][%i] da matriz, sendo um valor positivo:\n",aux1 + 1, aux2 + 1);
            scanf("%lf", &matriz[aux1][aux2]);
            if(matriz[aux1][aux2] <= 0)
            {
               printf("O valor digitado nao e positivo digite outro!\n");
            }
         }while(matriz[aux1][aux2] <= 0);
      }
   }
   mostrarmatriz(linhas, colunas, matriz);
   if (linhas == 1 && colunas ==linhas)
   {
      printf("E uma matriz [1][1], e nao ha elementos abaixo da digonal secundaria\n");
   }
   else
   {
      if( linhas == colunas)
      {
         printf("E uma matriz quadrada e os elementos abaixo da diagonal secundaria sao:\n");
         aux2 = colunas - 1;
         for(aux1 = 1; aux1 < linhas; aux1 = aux1 + 1)
         {
            aux3 = aux2 - 1;
            while(aux2<colunas)
            {
               printf("%lf ", matriz[aux1][aux2]);
               aux2 = aux2 + 1;
            }
            aux2 = aux3;
            
         }
      
      }
      else 
      {
         printf("Nao e uma matriz quadrada, entao nao existe diagonal secundaria\n");
      
      }
   }
   printf("\n");
}//end Metodo08

void Metodo08()
{
   int colunas = 0;
   int linhas = 0;
   void mostrarmatriz(int x, int y, double m[x][y]);
   do
   {
      printf("Digite o numero de linhas da matrix\n");
      scanf("%i", &linhas);
      if(linhas <= 0)
      {
         printf("O numero de linhas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(linhas <= 0);
   do
   {
      printf("Digite o numero de colunas da matriz\n");
      scanf("%i", &colunas);
      if(colunas <= 0)
      {
         printf("O numero de colunas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(colunas <= 0);
   double matriz [linhas][colunas];
   int aux1 = 0;
   int aux2 = 0;
   int aux3 = 0;
   for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2< colunas; aux2 = aux2 + 1)
      {
         do
         {
            printf("Digite o termo [%i][%i] da matriz, sendo um valor positivo:\n", aux1 + 1, aux2 + 1);
            scanf("%lf", &matriz[aux1][aux2]);
            if(matriz[aux1][aux2] <= 0)
            {
               printf("O valor digitado nao e positivo tente outro\n");
            }
         }while(matriz[aux1][aux2]<=0);
      }
   }
   mostrarmatriz(linhas, colunas, matriz);
   if (linhas == 1 && colunas ==linhas)
   {
      printf("E uma matriz [1][1], e nao ha elementos acima da digonal secundaria\n");
   }
   else
   {
      if( linhas == colunas)
      {
         printf("E uma matriz quadrada e os elementos acima da diagonal secundaria sao:\n");
         aux3 = colunas - 1;
         for(aux1 = 0; aux1 < linhas - 1; aux1 = aux1 + 1)
         {
            for(aux2=0; aux2 < aux3; aux2 = aux2 + 1)
            {
               printf("%lf ", matriz[aux1][aux2]);
            }
            aux3 = aux3 + 1;
         }
      
      }
      else 
      {
         printf("Nao e uma matrix quadrada, entao nao existe diagonal secundaria\n");
      
      }
   }
   printf("\n");
}//end Metodo08

void Metodo09()
{

   int colunas = 0;
   int linhas  = 0;
   bool resp   = 0;
   void mostrarmatriz(int x, int y, double m[x][y]);
   bool teste( int x , int y,double m[x][y]);
   do
   {
      printf("Digite o numero de linhas da matriz\n");
      scanf("%i", &linhas);
      if(linhas <= 0)
      {
         printf("O numero de linhas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(linhas <= 0);
   do
   {
      printf("Digite o numero de colunas da matriz\n");
      scanf("%i", &colunas);
      if(colunas <= 0)
      {
         printf("O numero de colunas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(colunas <= 0);
   double matriz [linhas][colunas];
   int aux1 = 0;
   int aux2 = 0;
   for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2< colunas; aux2 = aux2 + 1)
      {
       
         printf("Digite o termo [%i][%i] da matriz\n", aux1 + 1, aux2 + 1);
         scanf("%lf", &matriz[aux1][aux2]);
      }
   }
   mostrarmatriz(linhas, colunas, matriz);
   if( linhas == colunas)
   {
      resp = teste(linhas, colunas, matriz);
      if (resp == 0)
      {
         printf("A matriz e triangular inferior\n");
      
      }
      else
      {
         printf("A matriz nao e triangular inferior\n");
      }
      
   }
   else 
   {
      printf("Nao e uma matriz quadrada, entao nao existe diagonal principal\n");
   
   }
   printf("\n");
}
bool teste( int x , int y, double m[x][y])
{
   bool resposta = 0;
   int aux1      = 0;
   int aux2      = 0;
   while ((aux1 < x) && (resposta == 0))
   {
      aux2 = (aux1 + 1);
      while( (aux2 < y) && (resposta == 0))
      {
         resposta = (m[aux1][aux2] != 0);
         aux2 = aux2 + 1;
      }
      aux1 = aux1 + 1;
   }

   return resposta;
}//end Metodo09

void Metodo10()
{

   int colunas = 0;
   int linhas = 0;
   bool resp = 0;
   void mostrarmatriz(int x, int y, double m[x][y]);
   bool teste2( int x , int y,double m[x][y]);
   do
   {
      printf("Digite o numero de linhas da matrix\n");
      scanf("%i", &linhas);
      if(linhas <= 0)
      {
         printf("Numero de linhas invalido, tente um valor nao nulo, positivo!\n");
      }
   }while(linhas <= 0);
   do
   {
      printf("Digite o numero de colunas da matrix\n");
      scanf("%i", &colunas);
      if(colunas <= 0)
      {
         printf("O numero de colunas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(colunas <= 0);
   double matriz [linhas][colunas];
   int aux1 = 0;
   int aux2 = 0;
   for(aux1 = 0; aux1 < linhas; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2< colunas; aux2 = aux2 + 1)
      {
       
         printf("Digite o termo [%i][%i] da matriz\n", aux1 + 1, aux2 + 1);
         scanf("%lf", &matriz[aux1][aux2]);
      }
   }
   mostrarmatriz(linhas, colunas, matriz);
   if( linhas == colunas)
   {
      resp = teste2(linhas, colunas, matriz);
      if (resp == 0)
      {
         printf("A matriz e triangular superior\n");
      
      }
      else
      {
         printf("A matriz nao e triangular superior\n");
      }
      
   }
   else 
   {
      printf("Nao e uma matriz quadrada, entao nao existe diagonal principal, bug na matrix, avise Morpheu!\n");
   
   }
   printf("\n");
}
bool teste2( int x , int y, double m[x][y])
{
   bool resposta = 0;
   int aux1      = 1;
   int aux2      = 0;
   while ((aux2 < x) && (resposta == 0))
   {
      while( (aux1 < y) && (resposta == 0))
      {
         
         resposta = (m[aux2][aux1] != 0);
         aux1 = aux1 + 1;
      }
      aux2 = aux2 + 1;
      aux1 = aux2 + 1;
   }

   return resposta;
}

int** retornmatriz(int x)
{
   int aux1 = 0;
   int aux2 = 0;
   int num  = x * x;
   int** matriz = NULL;
   matriz = (int**)malloc(x*sizeof(int*));
   for(int i = 0; i <x; i++)
   {
      matriz[i] = (int*)malloc(x*sizeof(int));
   }
   for(aux1 = 0; aux1 < x; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2 < x; aux2 = aux2 + 1)
      {
         matriz[aux2][aux1] = num;
         num = num - 1;
      }
   }
   return matriz;
}
void arquivoe2(int LeC, int** m)
{
   FILE* arquivo = fopen("matrizq2.txt", "wt");
   for(int aux1 = 0; aux1 < LeC; aux1++)
   {
      for(int aux2 = 0; aux2 < LeC; aux2++)
      {
       
         fprintf(arquivo,"%i\t", m [aux1][aux2]);
      
      }
      fprintf(arquivo,"\n");
   }

   fclose(arquivo);
}//end Metodo10

void Metodo11()
{
   int LeC = 0;
   void arquivoe2(int LeC, int** m);
   int** retornmatriz(int x);
   do
   {
      printf("Digite o numero de linhas e colunas da matriz\n");
      scanf("%i", &LeC);
      if(LeC <= 0)
      {
         printf("O numero de linhas e colunas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(LeC <= 0); 
   int aux1 = 0;
   int aux2 = 0;
   int** matriz = retornmatriz(LeC);
   for(aux1 = 0; aux1 < LeC; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2 < LeC; aux2 = aux2 + 1)
      {
       
         printf("%i\t", matriz [aux1][aux2]);
      
      }
      printf("\n");
   }
   arquivoe2( LeC, matriz);
}  
int** retornmatriz1(int x)
{
   int aux1 = 0;
   int aux2 = 0;
   int num  = x *x;
   int** matriz = NULL;
   matriz = (int**) malloc(x *sizeof(int*));
   for(int i = 0; i < x; i = i + 1)
   {
      matriz[i] = (int*)malloc(x*sizeof(int));
   }
   for(aux1 = 0; aux1 < x; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2 < x; aux2 = aux2 + 1)
      {
         matriz[aux1][aux2] = num;
         num = num - 1;
      }
   }
   return matriz;
}
void arquivoe1(int LeC, int** m)
{
   FILE * arquivo = fopen("matrizq1.txt", "wt");
   for(int aux1 = 0; aux1 < LeC; aux1++)
   {
      for(int aux2 = 0; aux2 < LeC; aux2++)
      {
       
         fprintf(arquivo,"%i\t", m [aux1][aux2]);
      
      }
      fprintf(arquivo,"\n");
   }

   fclose(arquivo);
}
void metodo12()
{
   int LeC = 0;
   void arquivoe2(int LeC, int** m);
   int** retornmatriz1(int x);
   do
   {
      printf("Digite o numero de linhas e colunas da matriz\n");
      scanf("%i", &LeC);
      if(LeC <= 0)
      {
         printf("O numero de linhas e colunas e invalido, tente um valor nao nulo, positivo\n");
      }
   }while(LeC <= 0); 
   int aux1 = 0;
   int aux2 = 0;
   int** matriz = retornmatriz1(LeC);
   for(aux1 = 0; aux1 < LeC; aux1 = aux1 + 1)
   {
      for(aux2 = 0; aux2 < LeC; aux2 = aux2 + 1)
      {
       
         printf("%i\t", matriz [aux1][aux2]);
      
      }
      printf("\n");
   }
   arquivoe2( LeC, matriz);
}//end Metodo11  

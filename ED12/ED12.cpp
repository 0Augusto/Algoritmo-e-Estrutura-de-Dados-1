#include <iostream>
#include <iomanip>
#include <fstream>
#include <ifstream>
#include <ofstream>
#include <stringstream>

using namespace std;

/* ED12 - v0.0.1 - 25 / 05 / 2020    Author: Henrique Augusto Rodrigues - 0  
    Para compilar em terminal (janela de comandos):    
    Linux      : gcc -o ED12    ED12    
    Windows: gcc -o ED12.exe  ED12 
 
   Para executar em terminal (janela de comandos):   
  Linux      :  ./ED12   Windows:   ED12  */ 
void Metodo00()
{

}//end Metodo00

void Metodo01()
{
	int lines;
    int columns;

    int line = 0;
    int column = 0;
    
    cout << "Digite o numero de linhas para a matriz: " << endl;
    
    cin >> linhas;
    cout << "Digite o numero de colunas para a matriz: " << endl;
    cin >> colunas;
    
    cout << endl;
    if(lines > 0 && columns > 0)
    {
        Matrix<int> matriz(lines, columns);
        for (line = 0; line < lines; line = line + 1)
        {
            for (int column = 0; column < columns; column = columns + 1)
            {
                matriz.set(line, column, matriz.gerarInt(0,100));
            }//end for2
        }//end for1
        matriz.fprint("Metodo01.txt");
    }//end if
    else
    {
        cout << "ERROR: Valores invalidos para lines or columns. Fixed bug" << endl;
    }//end else
	
}//end Metodo01

void Metodo02()
{
    Matrix<int> matriz1(0, 0), matriz2(0,0);
    matriz1.fread("Metodo01.txt");
    int constante;
    
    cout << "Digite uma constante para escalar toda a matriz: " << endl;
    cin >> constante;
    
    matriz1.scale(constante);
    matriz1.print();
    
}//end Metodo02

void Metodo03()
{
	bool Identidade = 1;
	Matrix<int> matriz1(0, 0), matriz2(0,0);
	matriz1.fread("Metodo01.txt");
		  if(matriz1.Identidade())
		  {
			cout << "A matriz eh identidade" << endl;
		  }//end if
		  else
		  {
			cout << "A matriz nao eh identidade" << endl;
		  }//end else
  
}//end Metodo03

void Metodo04()
{
  Matrix<int> matrix(0, 0);
  Matrix<int> matrix1(0, 0);
  matriz1.fread("Metodo01.txt");
  matriz2.fread("Metodo02.txt");

  cout << "Difere = " << (matrix == matrix1) << endl;
}//end Metodo04

void Metodo05()
{
   void aranjarq(arranjos * y, char c[]);
   bool organizado(arranjos x);
   arranjos arranjo;
   aranjarq ( &arranjo,"DADOS1.TXT");
   bool resp = organizado(arranjo);  
   if (resp == 1)
   {
      printf("O arquivo esta organizado\n");
   }//end if
   else
   {
      printf("O arquivo nao esta organizado\n");
   }//end else 
}//end Metodo05

void Metodo06()
{
  Matrix<int> matriz1(0, 0);
  matriz1.fread("Metodo01.txt");
  matriz1.addRows(0, 1, 2);
  matriz1.print();
}//end Metodo06

void Metodo07()
{
   Matrix<int> matriz1(0, 0);
  matriz1.fread("Metodo01.txt");
  matriz1.subRows(0, 1, 1);
  matriz1.print();
}//end Metodo07

class Proc
{
public:
    int n;
    int x;
    int linha = 0;
    int Proc(int lines, int x)
    {
        int matrix[lines][lines];
        //abrir arquivos
        fstream arquivo;
        arquivo.open("Procurar.txt", ios::in);
        //Passar valor para a matriz
        for (int i = 0; i < n; i = i + 1)
        {
            cout << endl;
            for (int j = 0; j < n; j = j + 1)
            {
                arquivo >> matrix[i][j];
                cout << matrix[i][j];
            }
        }
        cout << endl;
        //procurar valor
        for(int i = 0; i < lines; i = i + 1)
        {
            for(int j = 0; j < n; j = j + 1)
            {
                if(matrix[i][j] == x)
                {
                    linha = i;
                    
                }//end if
            }//end for
        }//end for
        return linha;
    }//end proc
};

void Metodo08()
{
    Proc v;
    int result = 0;
    cout << "Digite um valor para definir as dimencoes da matriz quadrada: ";
    cin >> v.lines;
    cout << "Digite o valor que deseja procurar: ";
    cin >> v.x;
    //chamar classe
    result = v.Procurar(v.lines, v.x);
    cout << "O valor " << v.x << " esta na linha " << result << " da matriz!" << endl;
    cout << endl;
    system("pause");
}//end Metodo08
class Encontra
{
public:
    int n;
    int x;
    int linha = 0;

    int Encontra(int lines, int x)
    {
        int matrix[lines][lines];
        //abrir arquivos
        fstream arquivo;
        arquivo.open("Procurar.txt", ios::in);
        //Passar valor para a matriz
        for (int i = 0; i < lines; i = i + 1)
        {
            cout << endl;
            for (int j = 0; j < lines; j = j + 1)
            {
                arquivo81 >> matrix[i][j];
                cout << matrix[i][j];
            }//end for2
        }//end for1
        cout << endl;
        //procurar valor
        for(int i = 0; i < n; i = i + 1)
        {
            for(int j = 0; j < n; j = j + 1)
            {
                if(matrix[i][j] == x)
                {
                    linha = j;
                    break;
                }//end if
            }//end for2
        }//end for1
        return linha;
    }//end Encontra
};//end Class

void Metodo09()
{
    Econtra v;
    int result = 0;
    cout << "Digite um valor para ser a dimensao da Matrix: ";
    cin >> v.lines;
    cout << "Digite o valor e espere para atender o telefone: ";
    cin >> v.x;
    //chamar classe
    result = v.Econtra(v.lines, v.x);
    cout << "O valor " << v.x << " esta na coluna " << result << " da matrix!" << endl;
    cout << endl;
    system("pause");
}//end Metodo09

void Metodo10()
{
   Matrix<int> matriz1(0, 0);
  Matrix<int> transposta(0, 0);
  matriz1.fread("Metodo01.txt");
  transposta = matriz1.transpose();
  transposta.print();
}//end Metodo10

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
int main()
{
   printf("ED12 - v0.0.1");
   printf("\nAuthor: Henrique Augusto Rodrigues - 0\n");
   int x = 0;
   do
   {
      cout << "0 -  Para parar a execucao do programa." << endl;
      cout << "1 -  Gerar ,atriz aleatoria." << endl;
      cout << "2 -  Multiplica uma matriz por uma constante." << endl;
      cout << "3 -  Verificar se eh matriz identidade." << endl;
      cout << "4 -  Testr igualdade de matriz." << endl;
      cout << "5 -  Soma duas matrizes." << endl;
      cout << "6 -  Soma a primeira e a segunda linha por uma constante." << endl;
      cout << "7 -  " << endl;
      cout << "8 -  " << endl;
      cout << "9 -  " << endl;
      cout << "10 - " << endl;
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
            printf("Comando invalido, tente outro\n");
            x = 1;
      }
   }while(x!=0);
   printf("Aperte enter para sair do programa\n");
   fflush( stdin);
   getchar();
   return (0);
}

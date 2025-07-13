#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int readint(const string &text) {
    int result = 0;
    cout << text;
    cin >> result;
    return result;
}

void Metodo00() {
    cout << "Aperte zero(0) para encerrar a execucao do programa!" << endl;
    cout << "Aperte enter para continuar!" << endl;
    cin.ignore();
    cin.get();
}

void Metodo01() {
    cout << "Executa o programa 0111 - Programa = v0.1" << endl;
    
    int lado = 0;
    int area = 0;
    
    cout << "Insira o valor do lado do quadrado: ";
    cin >> lado;
    
    area = pow(lado, 2) / 2;
    
    cout << "A metade da area do quadrado eh: " << area << endl;
    cin.ignore();
    cin.get();
}

void Metodo02() {
    cout << "Executa o programa 0112 - Programa = v0.1" << endl;
    
    int l = 0;
    cout << "Insira o lado do quadrado: " << endl;
    cin >> l;
    
    int area = pow(2 * l, 2);
    int peri = 4 * (2 * l);
    
    cout << "A area do quadrado com o dobro do lado eh: " << area << endl;
    cout << "O perimetro do quadrado com o dobro do lado eh: " << peri << endl;
    cin.ignore();
    cin.get();
}

void Metodo03() {
    cout << "Executa o programa 0113 - Programa = v0.1" << endl;
    int l, a = 0;
    
    cout << "Insira a largura do retangulo: " << endl;
    cin >> l;
    cout << "Insira a altura do retangulo: " << endl;
    cin >> a;
    
    int area = (l * a) / 3;
    
    cout << "O terço da area do retangulo eh: " << area << endl;
    cin.ignore();
    cin.get();
}

void Metodo04() {
    cout << "Executa o programa 0114 - Programa = v0.1" << endl;
    int l, c = 0;
    
    cout << "Insira a largura do retangulo: " << endl;
    cin >> l;
    cout << "Insira o comprimento do retangulo: " << endl;
    cin >> c;
    
    int P = 2 * (2*l + 2*c);
    
    cout << "O perimetro com o dobro dos lados eh: " << P << endl;
    cin.ignore();
    cin.get();
}

void Metodo05() {
    cout << "Executa o programa 0115 - Programa = v0.1" << endl;
    
    double h, b = 0.0;
    cout << "Insira a altura do triangulo: " << endl;
    cin >> h;
    cout << "Insira a base do triangulo: " << endl;
    cin >> b;
    
    double area = (h * b) / 2.0;
    
    cout << "A area do triangulo eh: " << area << endl;
    cin.ignore();
    cin.get();
}

void Metodo06() {
    cout << "Executa o programa 0116 - Programa = v0.1" << endl;
    double L = 0.0;
    double altura = 0.0;
    double area = 0.0;
    double perimetro = 0.0;
    
    cout << "Insira um valor real do lado do triangulo: " << endl;
    cin >> L;
    
    altura = (sqrt(3)/2) * L;
    area = (pow(L, 2) * sqrt(3)) / 4;
    perimetro = 3 * L;
    
    cout << "A altura eh: " << altura << endl;
    cout << "A area eh: " << area << endl;
    cout << "O perimetro eh: " << perimetro << endl;
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

void Metodo07() {
    cout << "Executa o programa 0117 - Programa = v0.1" << endl;
    
    double lado = 0.0;
    cout << "Insira o valor do lado do cubo: " << endl;
    cin >> lado;
    
    double novo_lado = lado / 4.0;
    double volume = pow(novo_lado, 3);
    
    cout << "O volume do cubo com 1/4 do lado eh: " << volume << endl;
    cin.ignore();
    cin.get();
}

void Metodo08() {
    cout << "Executa o programa 0118 - Programa = v0.1" << endl;
    
    double C = 0.0;
    double L = 0.0;
    double A = 0.0;
    
    cout << "Insira o comprimento C: " << endl;
    cin >> C;
    cout << "Insira a largura L: " << endl;
    cin >> L;
    cout << "Insira a altura A: " << endl;
    cin >> A;
    
    double volume = (C/2) * (L/2) * (A/2);
    
    cout << "O volume do paralelepipedo com metade das medidas eh: " << volume << endl;
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

void Metodo09() {
    cout << "Executa o programa 0119 - Programa = v0.1" << endl;
    
    double r = 0.0;
    const double pi = 3.14159265;
    
    cout << "Insira um valor real para o raio: " << endl;
    cin >> r;
    
    double area = pi * pow(2*r, 2);
    
    cout << "A area do circulo com dobro do raio eh: " << area << endl;
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

void Metodo10() {
    cout << "Executa o programa 0120 - Programa = v0.1" << endl;
    
    double r = 0.0;
    const double pi = 3.14159265359;
    
    cout << "Insira o valor do raio da esfera: " << endl;
    cin >> r;
    
    double volume = (4.0/3.0) * pi * pow(r/8, 3);
    
    cout << "O volume da esfera com 1/8 do raio eh: " << volume << endl;
    cin.ignore();
    cin.get();
}

void Metodo11() {
    cout << "Executa o programa Exemplo01E1 - Programa = v0.1" << endl;
    
    double a = 0.0;
    cout << "Insira o valor da area de um quadrado: " << endl;
    cin >> a;
    
    double L = sqrt(a);
    
    cout << "O lado do quadrado eh: " << L << endl;
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

void Metodo12() {
    cout << "Executa o programa Exemplo01E2 - Programa = v0.1" << endl;
    
    double v = 0.0;
    const double pi = 3.14159265;
    
    cout << "Insira o volume da esfera:" << endl;
    cin >> v;
    
    double r = cbrt((3.0 * v) / (4.0 * pi));
    double a = 4.0 * pi * pow(r, 2);
    
    cout << "O raio da esfera eh: " << r << endl;
    cout << "A area da superficie eh: " << a << endl;
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

int main() {
    int opcao = 0;
    
    cout << "Henrique Augusto Rodrigues - versao 1.0 - 2020" << endl;
    cout << " - ED01" << endl << endl;

    do {
        cout << endl;
        cout << "Opcoes: " << endl;
        cout << "0 - Terminar" << endl;
        cout << "1 - Calcular metade da area de um quadrado" << endl;
        cout << "2 - Calcular area e perimetro com lado dobrado" << endl;
        cout << "3 - Calcular um terco da area de um retangulo" << endl;
        cout << "4 - Calcular perimetro com lados dobrados" << endl;
        cout << "5 - Calcular area de um triangulo" << endl;
        cout << "6 - Calcular propriedades de triangulo equilatero" << endl;
        cout << "7 - Calcular volume de cubo com 1/4 do lado" << endl;
        cout << "8 - Calcular volume com metade das medidas" << endl;
        cout << "9 - Calcular area com dobro do raio" << endl;
        cout << "10 - Calcular volume com 1/8 do raio" << endl;
        cout << "11 - Calcular lado a partir da area" << endl;
        cout << "12 - Calcular raio e area superficial" << endl;
        
        opcao = readint("Escolha uma opcao: ");
        
        switch (opcao) {
            case 0: Metodo00(); break;
            case 1: Metodo01(); break;
            case 2: Metodo02(); break;
            case 3: Metodo03(); break;
            case 4: Metodo04(); break;
            case 5: Metodo05(); break;
            case 6: Metodo06(); break;
            case 7: Metodo07(); break;
            case 8: Metodo08(); break;
            case 9: Metodo09(); break;
            case 10: Metodo10(); break;
            case 11: Metodo11(); break;
            case 12: Metodo12(); break;
            default: cout << "\nERRO 404 option not found!" << endl;
        }
    } while (opcao != 0);
    
    cout << "\nApertar ENTER para terminar." << endl;
    cin.ignore();
    cin.get();
    
    return 0;
}

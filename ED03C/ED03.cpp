#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int readint(const string &text) {
    int result = 0;
    cout << text;
    cin >> result;
    cin.ignore(); // Limpar o buffer após a leitura
    return result;
}

void Metodo00() {
    cout << "Aperte ENTER para continuar!" << endl;
    cin.ignore();
    cin.get();
}

void Metodo01() {
    cout << "Executa o programa" << endl;
    string entrada;
    bool encontrouMaiuscula = false;

    cout << "Digite uma sequencia de caracteres do teclado!" << endl;
    getline(cin, entrada);

    for (char c : entrada) {
        if (isupper(c)) {
            encontrouMaiuscula = true;
            cout << entrada << endl;
            break;
        }
    }

    if (!encontrouMaiuscula) {
        cout << "Nao ha letras maiusculas!" << endl;
    }
    
    cout << "\nApertar ENTER para continuar." << endl;
    cin.get();
}

void Metodo02() {
    cout << "Executa o programa" << endl;
    string entrada;
    int qtdMaiusculas = 0;

    cout << "Digite uma sequencia de caracteres do teclado!" << endl;
    getline(cin, entrada);

    for (char c : entrada) {
        if (isupper(c)) {
            qtdMaiusculas++;
            cout << c << endl;
            cout << qtdMaiusculas << endl;
        }
    }

    if (qtdMaiusculas == 0) {
        cout << "Nao ha letras maiusculas!" << endl;
    }
    
    cout << "\nApertar ENTER para continuar." << endl;
    cin.get();
}

void Metodo03() {
    cout << "Executa o Metodo03" << endl;
    string entrada;
    int contMaiusculas = 0;

    cout << "Insira uma palavra do teclado!" << endl;
    getline(cin, entrada);

    for (int i = entrada.length() - 1; i >= 0; i--) {
        if (isupper(entrada[i])) {
            contMaiusculas++;
            cout << entrada[i] << endl;
            cout << contMaiusculas << endl;
        }
    }

    if (contMaiusculas == 0) {
        cout << "Nao ha letras maiusculas!" << endl;
    }
    
    cout << "\nApertar ENTER para continuar." << endl;
    cin.get();
}

void Metodo04() {
    cout << "Executa a acao 4" << endl;
    string entrada;
    int contLetras = 0;

    cout << "Insira uma palavra!" << endl;
    getline(cin, entrada);

    for (char c : entrada) {
        if (isalpha(c)) {
            contLetras++;
            cout << c << " " << contLetras << " ";
        }
    }

    if (contLetras == 0) {
        cout << "Nao ha letras minusculas e/ou maiusculas!" << endl;
    }
    
    cout << "\nApertar ENTER para continuar." << endl;
    cin.get();
}

void Metodo05() {
    cout << "Executa a acao 5" << endl;
    string entrada;
    int contDigitos = 0;

    cout << "Insira uma cadeia de caracteres!" << endl;
    getline(cin, entrada);

    for (int i = entrada.length() - 1; i >= 0; i--) {
        if (isdigit(entrada[i])) {
            contDigitos++;
            cout << "Digitos: " << entrada[i] << endl;
        }
    }

    if (contDigitos == 0) {
        cout << "Nao ha digitos!" << endl;
    } else {
        cout << "A quantidade de digitos sao: " << contDigitos << endl;
    }
    
    cout << "\nApertar ENTER para continuar." << endl;
    cin.get();
}

void Metodo06() {
    cout << "Executa o Metodo06" << endl;
    string entrada;
    int contEspeciais = 0;

    cout << "Insira uma cadeia de caracteres!" << endl;
    getline(cin, entrada);

    for (char c : entrada) {
        if (!isalnum(c)) {
            contEspeciais++;
            cout << c;
        }
    }

    if (contEspeciais > 0) {
        cout << "\nA quantidade de simbolos especiais sao: " << contEspeciais << endl;
    } else {
        cout << "Nao ha simbolos especiais!" << endl;
    }
    
    cout << "\nApertar ENTER para continuar." << endl;
    cin.get();
}

void Metodo07() {
    cout << "Executa o Metodo07" << endl;
    int limiteInferior, limiteSuperior, quantidade;
    int multiplos = 0;

    cout << "\nPROGRAMA MULTIPLOS\n" << endl;
    cout << "De: ";
    cin >> limiteInferior;
    cout << "Ate: ";
    cin >> limiteSuperior;
    cout << "Entre com a quantidade: ";
    cin >> quantidade;

    for (int i = 0; i < quantidade; i++) {
        int numero;
        cout << "Entre com o numero: ";
        cin >> numero;
        
        if (numero % 3 == 0 && numero >= limiteInferior && numero <= limiteSuperior) {
            cout << "Numero multiplo: " << numero << endl;
            multiplos++;
        }
    }

    cout << "\nEntre " << limiteInferior << " e " << limiteSuperior;
    cout << " temos " << multiplos << " multiplos de 3" << endl;
    
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

void Metodo08() {
    cout << "Executa o Metodo08" << endl;
    int limiteInferior, limiteSuperior, quantidade;
    int multiplos = 0;

    cout << "\nPROGRAMA MULTIPLOS\n" << endl;
    cout << "De: ";
    cin >> limiteInferior;
    cout << "Ate: ";
    cin >> limiteSuperior;
    cout << "Entre com a quantidade: ";
    cin >> quantidade;

    for (int i = 0; i < quantidade; i++) {
        int numero;
        cout << "Entre com o numero: ";
        cin >> numero;
        
        if (numero % 5 == 0 && numero % 7 != 0 && 
            numero >= limiteInferior && numero <= limiteSuperior) {
            cout << "Numero multiplo: " << numero << endl;
            multiplos++;
        }
    }

    cout << "\nEntre " << limiteInferior << " e " << limiteSuperior;
    cout << " temos " << multiplos << " multiplos de 5 nao multiplos de 7" << endl;
    
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

void Metodo09() {
    cout << "Executa o Metodo09" << endl;
    double limiteInferior, limiteSuperior;
    int quantidade, pares = 0;

    cout << "\nPROGRAMA PARES\n" << endl;
    cout << "De: ";
    cin >> limiteInferior;
    cout << "Ate: ";
    cin >> limiteSuperior;
    cout << "Entre com a quantidade: ";
    cin >> quantidade;

    for (int i = 0; i < quantidade; i++) {
        int numero;
        cout << "Entre com o numero: ";
        cin >> numero;
        
        if (numero % 2 == 0 && numero >= limiteInferior && numero <= limiteSuperior) {
            pares++;
            cout << "Numero par: " << numero << endl;
        }
    }

    cout << "\nEntre " << limiteInferior << " e " << limiteSuperior;
    cout << " temos " << pares << " numeros pares" << endl;
    
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

void Metodo10() {
    cout << "Executa o Metodo10" << endl;
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

void Metodo11() {
    cout << "Executa o Metodo11" << endl;
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

void Metodo12() {
    cout << "Executa o Metodo12" << endl;
    cout << "\nApertar ENTER para continuar." << endl;
    cin.ignore();
    cin.get();
}

int main() {
    int opcao = 0;
    
    cout << "Henrique Augusto Rodrigues - versao 1.0 - 2020" << endl;
    cout << "675263 - XXX" << endl << endl;

    do {
        cout << endl;
        cout << "Opcoes: " << endl;
        cout << "0 - Terminar" << endl;
        cout << "1 - Mostrar palavra se contiver maiuscula" << endl;
        cout << "2 - Contar e mostrar maiusculas" << endl;
        cout << "3 - Contar maiusculas do fim para inicio" << endl;
        cout << "4 - Contar letras (maiusculas/minusculas)" << endl;
        cout << "5 - Contar digitos do fim para inicio" << endl;
        cout << "6 - Mostrar simbolos especiais" << endl;
        cout << "7 - Multiplos de 3 em intervalo" << endl;
        cout << "8 - Multiplos de 5 nao multiplos de 7" << endl;
        cout << "9 - Numeros pares em intervalo" << endl;
        cout << "10 - Metodo10" << endl;
        cout << "11 - Metodo11" << endl;
        cout << "12 - Metodo12" << endl;
        
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
    cin.get();
    
    return 0;
}

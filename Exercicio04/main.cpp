
#include <iostream>
#include <string>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    return (float)a / b;
}

int main() {
    int opcao;
    int a, b;

    cout << "Bem-Vindo à calculadora digital!" << endl;
    cout << "Digite o que você deseja calcular:" << endl;
    cout << "1. Soma" << endl;
    cout << "2. Subtração" << endl;     
    cout << "3. Multiplicação" << endl;
    cout << "4. Divisão" << endl;
    cin >> opcao;

    switch(opcao) {
        case 1:
            cout << "Digite o primeiro número: ";   
            cin >> a;
            cout << "Digite o segundo número: ";
            cin >> b;
            cout << "A soma é: " << soma(a, b) << endl;
            break;

        case 2:
            cout << "Digite o primeiro número: ";   
            cin >> a;
            cout << "Digite o segundo número: ";
            cin >> b;
            cout << "A subtração é: " << subtracao(a, b) << endl;
            break;

        case 3:
            cout << "Digite o primeiro número: ";   
            cin >> a;
            cout << "Digite o segundo número: ";
            cin >> b;
            cout << "A multiplicação é: " << multiplicacao(a, b) << endl;
            break;

        case 4:
            cout << "Digite o primeiro número: ";   
            cin >> a;
            cout << "Digite o segundo número: ";
            cin >> b;
            if (b != 0) {
                cout << "A divisão é: " << divisao(a, b) << endl;
            } else {
                cout << "Erro: Divisão por zero não é permitida." << endl;
            }
            break;

        default:
            cout << "Opção inválida." << endl;
            break;
    }

    return 0;
}


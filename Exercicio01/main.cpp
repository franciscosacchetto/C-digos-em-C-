#include <iostream>
#include <string>
using namespace std; 

    int main()
    {
        int a = 10; 
        string nome = "João";
        int idade;
        cout << "Hello Word!" << endl; //printf normal
        cout << "O valor de a é: " << a << endl; //printf com variavel
        cout << "O nome é: " << nome << endl; //printf com string
        cout << "Digite seu idade: " << endl;
        cin >> idade; //leitura de variavel
        cout << "Você tem " << idade << " anos" << endl; //printf com variavel lida
        if(idade >= 10)
        {
            cout <<"Você já esta bem crescidinho!" << endl;
        }
        else
        {
            cout <<"Tem muito o que aprender ainda" << endl;
        }
        for(int i = 0; i < idade; i++)
        {
            cout <<"Você tem " << idade << "anos." << endl;
        }
        return 0; //retorno da função main
    }
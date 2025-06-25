#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
    public:
    string nome;
    string tipo;
    int saude;
    int ataque;

    Pokemom(string n, string t, int s, int a)
    {
        nome = n;
        tipo = t;
        saude = s;
        ataque = a;
    }

    void AtaquePokemon(int dano)
    {
        saude -= dano;
        if (saude < 0) 
        {
            saude = 0; 
            cout << nome << " foi derrotado!" << endl;
            return;
        }
    }

    void exibirdados()
    {
        cout<< "Nome: "<< nome << endl;  
        cout << "Tipo: " << tipo << endl;   
        cout << "Saúde: " << saude << endl;
        cout << "Ataque: " << ataque << endl;
    }

};

int main ()
{
    int escolha, escolha2
    cout<<"Bem-Vindo a batalha Pokemon!"<<endl;
    cout<<"Vamos batalhar com os Pokemons!"<<endl;
    cout<<"Você tem um pokemon ou quer utilizar um do ginazio?" << endl;
    cout<<"Digite 1 para utilizar o seu Pokemon ou 2 para utilizar um do ginasio: "<< endl;
    cin >> escolha;
    if(escolha == 1)
    {
        string nome, tipo;
        int saude, ataque;
        cout<<"Você escolheu batalhar com o seu Pokemon!" << endl;
        cout<<"DIgite o nome dele: " << endl;
        getline(cin, nome);
        cout<<"Digite o tipo dele: " << endl;
        getline(cin, tipo);    
        cout<<"Digite a saúde dele: " << endl;
        cin >> saude;
        cout<<"Digite o ataque dele: " << endl;
        cin >> ataque;
        Pokemom p1(nome, tipo, saude, ataque);
        p1.exibirdados();

    }
    else
    {
        cout<<"Você escolheu batalhar com um Pokemon do ginazio!" << endl;
        cout<< "As opções são as seguintes: " << endl;
        cout<<"1 - Pikachu" << endl;
        cout<<"2 - Ratata" << endl;
        cout<<"Digite 1 par aescolhes o Pikachu ou 2 para escolher o Ratata: " << endl;
        cin >> escolha2;
        if(escolha2 == 1)
        {
            cout<<"Você escolheu o Pikachu!" << endl;
        }
        else if(escolha2 == 2)
        {
            cout<<"Você escolheu o Ratata!" << endl;
        }
        else
        {
            cout<<"Opção inválida! Tente novamente." << endl;
            return 0;
        }
    
    }
    Pokemon p1;
        p1.nome = "Pikachu";
        p1.tipo = "Elétrico";
        p1.saude = 135;
        p1.ataque = 55;
        p1.exibirdados();
        cout<<"------------------------------------"<<endl;
        Pokemon p2;
        p2.nome = "Ratata";
        p2.tipo = "Normal";
        p2.saude = 100;
        p2.ataque = 30;
        p2.exibirdados();
        cout<<"Vamos Comecar a batalha!" <<endl;
        cout<<"------------------------------------"<<endl;
    while(p1.saude > 0 && p2.saude > 0)
    {
        cout<<"Pikachu Atacou!" << endl;
        p2.AtaquePokemon(p1.ataque);
        cout<<"Ratata recebeu dano!" << endl;   
        p1.exibirdados();
        cout<<"------------------------------------"<<endl;
        p2.exibirdados();
        if(p2.saude <= 0)
            {
                cout<<"Ratata foi derrotado!" << endl;
                cout<<"Pikachu Venceu a batalha!" << endl;
                break;
            }   
        cout<<"------------------------------------"<<endl;
        cout<<"Ratata Atacou!" << endl;
        p1.AtaquePokemon(p2.ataque);
        cout<<"Pikachu recebeu dano!" << endl;
        p2.exibirdados();
         cout<<"------------------------------------"<<endl;
        p1.exibirdados();
        cout<<"------------------------------------"<<endl;
        if(p1.saude <= 0)
            {
                cout<<"Pikachu foi derrotado!" << endl;
                cout<<"Ratata Venceu a batalha!" << endl;
                break;
            }  
    }

}
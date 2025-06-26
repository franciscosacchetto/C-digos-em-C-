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
    int defesa;

    Pokemon(string n, string t, int s, int a, int d)
    {
        nome = n;
        tipo = t;
        saude = s;
        ataque = a;
        defesa = d;
    }

    // fogo > planta
    // planta > água
    // água > fogo
    int AtaquePokemon(int dano, Pokemon pokemon1, Pokemon pokemon2)
    {
        dano = (dano - (defesa/2))* tipos(pokemon1, pokemon2);
        if(dano < 0) 
        {
            dano = 0; 
        }
        saude -= dano;
        if (saude < 0) 
        {
            saude = 0; 
            cout << nome << " foi derrotado!" << endl;
            return dano;
        }
        return dano;
    }

    float tipos( Pokemon pokemon1, Pokemon pokemon2)
    {
        if(pokemon1.tipo == "Fogo" && pokemon2.tipo == "Planta")
        {
            cout << "Super efetivo!" << endl;
            return 1.5; 
        }
        else if(pokemon1.tipo == "Agua" && pokemon2.tipo == "Fogo")
        {
            cout << "Super efetivo!" << endl;
            return 1.5; 
        }
        else if(pokemon1.tipo == "Planta" && pokemon2.tipo == "Agua")
        {
            cout << "Super efetivo!" << endl;
            return 1.5; 
        }
        else
        {
            return 1.0;
        }

    }
    void exibirdados()
    {
        cout<< "Nome: "<< nome << endl;  
        cout << "Tipo: " << tipo << endl;   
        cout << "Saúde: " << saude << endl;
        cout << "Ataque: " << ataque << endl;
        cout << "Defesa: " << defesa << endl;
    }
};
int main ()
{
    int escolha, escolha2;
    cout<<"Bem-Vindo a batalha Pokemon!"<<endl;
    cout<<"Vamos batalhar com os Pokemon!"<<endl;
    cout<<"Você tem um pokemon ou quer utilizar um do ginazio?" << endl;
    cout<<"Digite 1 para utilizar o seu Pokemon ou 2 para utilizar um do ginásio: "<< endl;
    cin >> escolha;
    cin.ignore();
    Pokemon p1("","", 0, 0, 0);
    if(escolha == 1)
    {
        string nome, tipo;
        int saude, ataque, defesa;
        cout<<"Você escolheu batalhar com o seu Pokemon!" << endl;
        cout<<"Digite o nome dele: " << endl;
        getline(cin, nome);
        cout<<"Digite o tipo dele: " << endl;
        getline(cin, tipo);    
        cout<<"Digite a saúde dele: " << endl;
        cin >> saude;
        cout<<"Digite o ataque dele: " << endl;
        cin >> ataque;
        cout<<"Digite a defesa dele: " << endl;
        cin >> defesa;
        p1 = Pokemon (nome, tipo, saude, ataque, defesa);
        p1.exibirdados();

    }
    else
    {
        cout<<"Você escolheu batalhar com um Pokemon do ginásio!" << endl;
        cout<< "As opções são as seguintes: " << endl;
        cout<<"1 - Bulbasaur" << endl;
        cout<<"2 - Charmander" << endl;
        cout<<"Digite 1 para escolher o Bulbasaur ou 2 para escolher o Charmander: " << endl;
        cin >> escolha2;
        if(escolha2 == 1)
        {
            cout<<"Você escolheu o Bulbasaur!" << endl;
            p1 = Pokemon ("Bulbasaur", "Planta", 135, 30, 15);
            p1.exibirdados();

        }
        else if(escolha2 == 2)
        {
            cout<<"Você escolheu o Charmander!" << endl;
            p1 = Pokemon("Charmander", "Fogo", 150, 25, 5);
            p1.exibirdados();

        }
        else
        {
            cout<<"Opção inválida! Tente novamente." << endl;
            return 0;
        }
    }
    cout<<"Muito Bem!Você usará o "<< p1.nome <<" e eu usarei o Pokemon do ginásio! O Squirtle !" << endl;
   Pokemon p2("Squirtle", "Agua", 100, 20,10);
    p2.exibirdados();
    while(p1.saude > 0 && p2.saude > 0)
    {
        int danop1 = p1.AtaquePokemon(p1.ataque, p1, p2);
        int danop2 = p2.AtaquePokemon(p2.ataque, p2, p1);
        cout<< p1.nome <<" Atacou!" << endl;
        p2.AtaquePokemon(p1.ataque, p1, p2);
        cout<<p2.nome << " recebeu dano!" << endl;   
        cout<<p2.nome << " recebeu "<< danop1 << " pontos de dano de "<< p1.nome << "!" << endl;
        p1.exibirdados();
        p2.exibirdados();
        if(p2.saude <= 0)
            {
                cout<<p2.nome << " foi derrotado!" << endl;
                cout<<p1.nome<<" Venceu a batalha!" << endl;
                break;
            }   
        cout<<p2.nome<<" Atacou!" << endl;
        p1.AtaquePokemon(p2.ataque, p2, p1);
        cout<<p1.nome <<" recebeu dano!" << endl;
                cout<<p2.nome << " recebeu "<< danop2 << " pontos de ataque de "<< p1.nome << "!" << endl;

        p2.exibirdados();
        p1.exibirdados();
        if(p1.saude <= 0)
            {
                cout<<p1.nome<<" foi derrotado!" << endl;
                cout<<p2.nome <<" Venceu a batalha!" << endl;
                break;
            }  
    }

}

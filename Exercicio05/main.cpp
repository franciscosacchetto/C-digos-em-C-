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
        defesa = d
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
    Pokemon p1("","", 0, 0,0);
    if(escolha == 1)
    {
        string nome, tipo;
        int saude, ataque;
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
        p1 = Pokemon (nome, tipo, saude, ataque);
        p1.exibirdados();

    }
    else
    {
        cout<<"Você escolheu batalhar com um Pokemon do ginásio!" << endl;
        cout<< "As opções são as seguintes: " << endl;
        cout<<"1 - Pikachu" << endl;
        cout<<"2 - Charmander" << endl;
        cout<<"Digite 1 par aescolhes o Pikachu ou 2 para escolher o Ratata: " << endl;
        cin >> escolha2;
        if(escolha2 == 1)
        {
            cout<<"Você escolheu o Pikachu!" << endl;
            p1 = Pokemon ("Pikachu", "Elétrico", 135, 30,15);
            p1.exibirdados();

        }
        else if(escolha2 == 2)
        {
            cout<<"Você escolheu o Charmander!" << endl;
            p1 = Pokemon("Charmander", "Fogo", 150, 25,5);
            p1.exibirdados();

        }
        else
        {
            cout<<"Opção inválida! Tente novamente." << endl;
            return 0;
        }
    
    }
    cout<<"Muito Bem!Você usará o "<< p1.nome <<" e eu usarei o Pokemon do ginásio! O Ratata!" << endl;
   Pokemon p2("Ratata", "Normal", 100, 20,10);
    p2.exibirdados();
    while(p1.saude > 0 && p2.saude > 0)
    {
        cout<< p1.nome <<" Atacou!" << endl;
        p2.AtaquePokemon(p1.ataque);
        cout<<p2.nome << " recebeu dano!" << endl;   
        p1.exibirdados();
        cout<<"------------------------------------"<<endl;
        p2.exibirdados();
        if(p2.saude <= 0)
            {
                cout<<p2.nome << " foi derrotado!" << endl;
                cout<<p1.nome<<" Venceu a batalha!" << endl;
                break;
            }   
        cout<<"------------------------------------"<<endl;
        cout<<p2.nome<<" Atacou!" << endl;
        p1.AtaquePokemon(p2.ataque);
        cout<<p1.nome <<" recebeu dano!" << endl;
        p2.exibirdados();
         cout<<"------------------------------------"<<endl;
        p1.exibirdados();
        cout<<"------------------------------------"<<endl;
        if(p1.saude <= 0)
            {
                cout<<p1.nome<<" foi derrotado!" << endl;
                cout<<p2.nome <<" Venceu a batalha!" << endl;
                break;
            }  
    }

}
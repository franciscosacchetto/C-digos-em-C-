#include <iostrem>
#include <string>
using namespace std;

class Servivo
{
    public:
    string nome;
    int idade;

    Servivo(string n, int i)
    {
        nome = n;
        idade = i;
    }
};

class Pessoa: public Servivo
{
    protected:
    bool racional;
    bool faz fotossíntese;
    bool caça;
}
class Animal: public Servivo
{
    protected:
    bool racional;
    bool faz fotossíntese;
    bool caça;
}
class Planta: public Servivo
{
    protected:
    bool racional;
    bool faz fotossíntese;
    bool caça;

}
exibir()
{
    cout << " Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;

}
int main()
{
    cout<<"Bem-Vindo ao Estudo de herança!"<<endl;
    
}
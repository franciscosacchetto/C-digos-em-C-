#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout<< "Digite um número para que eu verifique se ele é par ou ímpar: "<< endl;
    cin>> n;
    if(n % 2 == 0)
    {
        cout<<"O número "<< n << "é par!"<< endl;
    }
    else
    {
        cout<<"O número "<< n << "é ímpar!" << endl;
    }
}
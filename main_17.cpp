//Strings de entrada do usuário
#include<iostream>
#include <string>

using namespace std;

int main(){
    
//system("cls");

    
    string nomeComapleto;
    cout << "Escreva o seu Nome: ";
    getline (cin, nomeComapleto);
    cout << "O seu Nome é: " << nomeComapleto;
    return 0;
}
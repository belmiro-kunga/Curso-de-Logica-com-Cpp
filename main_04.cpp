//Entrada do usuário
#include<iostream>

using namespace std;

int main(){
    
system("cls");
/*
    int x; 
        cout<< "Digite um Numero: ";
        cin >> x;

        cout<< "O Numero difitado e: " << x;

*/
    int x, y;
    int soma;
    cout<< "Digite um Numero; ";
    cin>> x;

    cout<< "Digite outro Numero: ";
    cin >> y;
    soma = x - y;
    cout<< " A soma entre " << x <<" e " <<  y  << " e de " << soma; 
    return(0);
}
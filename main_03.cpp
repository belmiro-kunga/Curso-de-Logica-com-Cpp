//Entrada do usuário
#include <iostream>
#include <string>

using namespace std;

int main(){
    
system("cls");
//Declarar a as Variaveis
    int idade  = 0;
    char nome[20] = "";
    char bairro[15] = "";
    string endereco = "";

//Entrada de dados
cout<<"informe o seu Nome: ";
    cin>>nome;  
    cout<<"Informe a sua idade: ";
    cin>>idade;
    cout<<"informe o seu Bairro: ";  
    cin>>bairro;  
    fflush(stdin);
    cout<<"informe o seu Endereco: ";  
    getline(cin, endereco );


    //Impressão dos dados
    cout<<"\n\n/*************** Imprimir dados do usuario***********/";
    cout<<"\n-> Idade: "  << idade <<" anos"; 
    cout<<"\n-> Nome: "  << nome <<","; 
    cout<<"\n-> Bairro: "  << bairro <<","; 
    cout<<"\n-> Endereco: "  << endereco <<"\n\n"; 
    return(0);
}
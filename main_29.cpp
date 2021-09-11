//Criar referências
//Endereço de memória C++
#include<iostream>

using namespace std;

int main(){
    
system("cls");
    string comida = "Arroz";
    string &Alimento = comida;

   
    cout<< &comida <<"\n";
   //  cout<<comida <<"\n";
   // cout<< Alimento;
    return(0);
}
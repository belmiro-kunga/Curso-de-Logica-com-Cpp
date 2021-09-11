//Parâmetros padrão C++
#include<iostream>
#include <string>
using namespace std;

void meuApais(string pais = " Angola "){
    cout << pais << "\n";
}
    
int main (){
    meuApais();
     meuApais("Congo");
      meuApais("Namibia");
    return 0;
}
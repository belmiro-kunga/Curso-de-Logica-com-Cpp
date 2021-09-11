//Funções C++ - Passar por referência
#include<iostream>

using namespace std;

void trocaNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int priNome = 10;
    int segNome = 30;
    
    cout<< "Antes troca: "<< "\n";
    trocaNums(priNome, segNome);

    cout << "Antes troca: "<<"\n";
    cout << priNome << segNome << "\n";

    return(0);
}
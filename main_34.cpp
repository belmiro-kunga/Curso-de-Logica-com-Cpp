//C++ Múltiplos Parâmetros
#include<iostream>

using namespace std;

void myfunc(string nome, int idade){
    cout << nome << " este e o nome " << idade << " e este e a idade \n";
}

int main(){
    
system("cls");

myfunc("Belmiro", 3);
myfunc("Manuel", 13);
myfunc("kunga", 15);

    cout<<"";

    return(0);
}
//Strings em C++
#include<iostream>
#include<string>

using namespace std;

int main(){
    
//system("cls");
    string primeiroNome = "Belmiro ";
    string segundoNome = "Kunga";
    //cout<<primeiroNome + " " + segundoNome;
    cout<<primeiroNome.append ( segundoNome );

    

    return(0);
}
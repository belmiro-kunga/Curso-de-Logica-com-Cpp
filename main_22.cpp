//C++ Switch
#include<iostream>

using namespace std;

int main(){
    /*
    int day = 4;
    switch (day){
        case 1:
            cout<< "Segunda-Feira";
            break;
        case 2:
            cout<< "Terca-Feira";
            break;
        case 3:
            cout<< "Quarta-Feira";
            break;
        case 4:
            cout<< "Quinta-Feira";
            break;
        case 5:
            cout<< "Sexta-Feira";
            break;
        case 6:
            cout<< "Sabado";
            break;
        case 7:
            cout<< "Domingo";
            break;
    }
    */



    int day = 4;
    switch (day){
        case 5:
            cout << "Hoje e Sabado";
            break;
        case 7:
            cout << "Hoje e Domingo";
            break;
        default:
        cout << "Hoje nao e sabado nem Domingo";
    }
}
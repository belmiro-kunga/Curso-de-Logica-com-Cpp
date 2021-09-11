//Omite o tamanho da matriz
#include<iostream>

using namespace std;


int main(){
    
system("cls");

string cars[7] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    cars [5] =  "Batata";
    cars [6] =  "Banana";

    //cout<<cars[5]<< "\n";
    //cout<<cars[6];
    for (int i = 0; i < 7; i++){
        cout<< cars[i] << "\n";
    }

    return(0);
}
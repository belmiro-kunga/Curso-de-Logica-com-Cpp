
/*//Condições C++ e Declarações If e else e elseif//*/
#include<iostream>

using namespace std;

int main(){
    
//system("cls");
    //int x = 10;
    //int y = 9;

    //if(x > y){
    //    cout<< "x e maior que y";    }
    /*
    int time = 20;
    if (time < 1){
        cout<< "Bom dia. ";
    }else{
        cout << "Boa tarde. ";
    }
    */


    int time = 22;

    if (time < 10){

        cout<< "Bom dia. ";

    }else if(time < 20){
        cout<< "Boa tarde. ";
    }else{
        cout<<"Boa Noite.";
    }
    return(0);
}
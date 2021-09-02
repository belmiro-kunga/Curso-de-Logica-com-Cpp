//Forma Curta If... Else (Operador Ternário)
#include<iostream>

using namespace std;

int main(){
    
//system("cls");

    int time = 23;
/* if(time < 18){
        cout<< "Bom Dia. ";
    }else{
        cout<< "Boa Tarde. ";
    }*/
    string result = (time < 23)? "Bom Dia. " : "Boa Tarde. ";
    cout<<result;

    return(0);
}
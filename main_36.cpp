//C++ A palavra-chave de retorno
#include<iostream>

using namespace std;

/*
int myfunc( int x , int y){
    return x + y;
}
*/

int myfunc( int x , int y){
    return x + y;
}
int main(){
    int i = myfunc(20, 14);

    cout<< i;
    //cout << myfunc(5 , 6);


    return(0);
}
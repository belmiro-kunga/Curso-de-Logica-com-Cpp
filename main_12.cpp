//Operadores Lógicos
#include<iostream>

using namespace std;
//&& <= e ,||  <= ou,  ! <= não

int main(){
    int s = 70;  
    int f = 23;
    //cout<< (s > f && s < 100);
    //cout<< (70 > 23 || 70 > 100);
    cout<< (!(70 == 23 && 70 < 100));
    
    return(0);
}
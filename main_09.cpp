//OPERADORES ARITMÉTICOS

/*

+	Soma		        x + y	
-	Subtração		    x - y	
*	Multiplicação		x * y	
/	Divisão		        x / y	
%	Modulo		        x % y	
++	Incremento	    	++x	
--	Decremento           --x	

*/
#include<iostream>

using namespace std;

int main(){
    
    int soma = 10 + 50;
    int subtra = 11 - 5;
    int mult = 14 * 44;
    int div = 45 / 44;
    int incrementar = 0;
    ++incrementar;
    int decremento = 10;
    --decremento;
    int modulo = 5;
    int modulo2 = 2;

    cout<<soma << "\n";
    cout<<subtra << "\n";
    cout<<mult << "\n";
    cout<<div << "\n";
    cout<<incrementar << "\n";
    cout<<decremento << "\n";
    cout<< modulo % modulo2;

    return(0);
}
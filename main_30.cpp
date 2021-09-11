//Criando ponteiros
#include <iostream>

using namespace std;

    /*


    Ponteiros ou apontadores, são variáveis que armazenam 
    o endereço de memória de outras variáveis. Dizemos que 
    um ponteiro “aponta” para uma varíável quando contém o 
    endereço da mesma. Os ponteiros podem apontar para qualquer 
    tipo de variável. Portanto temos ponteiros para int, float, 
    double, 
    */
int main()
{

    system("cls");
    string  comida = "Pizza";

    string* pont  = &comida;
    *pont =" Arroz ";// Mudar o end a variavel e o nome tambem

    cout <<  comida <<"\n>>";

    cout <<  &comida <<"\n>>";
    cout <<  pont <<"\n";
     cout <<  *pont;

    return (0);
}
#include <iostream>
#include <stdlib.h>
using namespace std;

bool esNumerico(char x);
bool esMayuscula(char x);
bool esMinuscula(char x);
bool esLetra(char x);
bool esCacraterEspecial(char x);


int main(void){
    char c;

    cout<<"Ingresa tu caracter ";
    cin>>c;

    cout<<esNumerico(c)<<endl;
    cout<<esMayuscula(c)<<endl;
    cout<<esMinuscula(c)<<endl;
    cout<<esLetra(c)<<endl;
    cout<<esCacraterEspecial(c)<<endl;

    return 0;
}

bool esNumerico(char x){
    return (x>=48 && x<=57);
}
bool esMayuscula(char x){
    return (x>=65 && x<=90);
}
bool esMinuscula(char x){
    return (x>=97 && x<=122);
}
bool esLetra(char x){
    return (esMayuscula(x) || esMinuscula(x));
}
bool esCacraterEspecial(char x){
    return (!esNumerico(x) && !esLetra(x));
}

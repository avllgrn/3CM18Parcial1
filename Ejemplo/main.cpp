#include <iostream>
#include <stdlib.h>
using namespace std;

class PilaChar{
private:
    class Nodo{
    public:
        char dato;
        Nodo* inferior;
        Nodo(void){
            dato = 0.0;
            inferior = NULL;
            //cout<<"Nodo construido..."<<endl;
        };
        Nodo(char d, Nodo* i){
            dato = d;
            inferior = i;
            //cout<<"Nodo construido..."<<endl;
        };
        ~Nodo(void){
            //cout<<"Nodo destruido..."<<endl;
        };
    };    Nodo* tope;
public:
    PilaChar(void){
        tope = NULL;
    };
    ~PilaChar(void){
        liberaPila();
    };
    void push(char dato){
        tope = new Nodo(dato, tope);
    };
    char pop(void){
        Nodo* aux;
        char d;
        d = tope->dato;
        aux = tope;
        tope = tope->inferior;
        delete aux;
        return d;
    };
    bool estaVacia(void){
        return tope == NULL;
    };
    void liberaPila(void){
        while(!estaVacia()){
            cout<< pop() << endl;
        }
    };
};

int main(void){
    string Cadena;
    PilaChar P;
    int i,nCadena;

    cout<<"Ingresa tu numero ";
    getline(cin,Cadena);
    nCadena = Cadena.size();

    //Se genera una pila,
    for(i=0; i<nCadena; i++)
        P.push(Cadena.at(i));//a partir de cada caracter numerico de la original;

    //Se comparan todos y cada uno de los caracteres de la cadena
    //con todos y cada uno de los caracteres en la pila,
    for(i=0; i<nCadena; i++)
        if(Cadena[i] != P.pop())//a menos de que se encuentre uno diferente
            break;

    if(P.estaVacia())
        cout<<"ES capicua"<<endl;
    else
        cout<<"NO es capicua"<<endl;
    cout<<endl<<endl;
    system("pause");
    system("cls");
    cout<<"El destructor vacia la pila, dado el caso."<<endl<<endl;

    return 0;
}

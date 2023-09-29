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

bool esNumerico(char x);
bool esMayuscula(char x);
bool esMinuscula(char x);
bool esLetra(char x);
bool esCacraterEspecial(char x);

int main(void){
    string Cadena, Aux;
    PilaChar P;
    int i,nCadena,nAux;
    char c;

    cout<<"Ingresa tu cadena ";
    getline(cin,Cadena);
    nCadena = Cadena.size();

    //Se genera una cadena auxiliar y una pila,
    for(i=0; i<nCadena; i++){
        c = Cadena.at(i);//a partir de cada caracter de la original;
        if(!esCacraterEspecial(c)){//pero, solo con los caracteres no especiales
            c = toupper(c);//y convertidos a mayusculas
            Aux.push_back(c);
            P.push(c);
        }
    }
    nAux = Aux.size();

    //Se comparan todos y cada uno de los caracteres de la cadena auxiliar
    //con todos y cada uno de los caracteres en la pila,
    for(i=0; i<nAux; i++)
        if(Aux[i] != P.pop())//a menos de que se encuentre uno diferente
            break;

    if(P.estaVacia())
        cout<<"ES palindromo"<<endl;
    else
        cout<<"NO es palindromo"<<endl;
    cout<<endl<<endl;
    system("pause");
    system("cls");

    cout<<"El destructor vacia la pila, dado el caso."<<endl<<endl;
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

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class PilaInt{
private:
    class Nodo{
    public:
        int dato;
        Nodo* inferior;
        Nodo(void){
            dato = 0.0;
            inferior = NULL;
            //cout<<"Nodo construido..."<<endl;
        };
        Nodo(int d, Nodo* i){
            dato = d;
            inferior = i;
            //cout<<"Nodo construido..."<<endl;
        };
        ~Nodo(void){
            //cout<<"Nodo destruido..."<<endl;
        };
    };
    Nodo* tope;
public:
    PilaInt(void){
        tope = NULL;
    };
    ~PilaInt(void){
        liberaPila();
    };
    void push(int dato){
        tope = new Nodo(dato, tope);
    };
    int pop(void){
        Nodo* aux;
        int d;
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



class ColaInt{
private:
    class Nodo{
    public:
        int dato;
        Nodo* detras;
        Nodo(void){
            dato = 0;
            detras = NULL;
            //cout<<"Nodo construido..."<<endl;
        };
        Nodo(int dat, Nodo* det){
            dato = dat;
            detras = det;
            //cout<<"Nodo construido..."<<endl;
        };
        ~Nodo(void){
            //cout<<"Nodo destruido..."<<endl;
        };
    };
    Nodo* primero;
    Nodo* ultimo;
public:
    ColaInt(void){
        primero = NULL;
        ultimo = NULL;
    };
    ~ColaInt(void){
        liberaCola();
    };
    void push(int dato){
        if(estaVacia()){
            ultimo = new Nodo(dato,NULL);
            primero = ultimo;
        }
        else{
            ultimo->detras = new Nodo(dato,NULL);
            ultimo = ultimo->detras;
        }
    };
    int pop(void){
        int dato;
        Nodo* aux;
        if(primero==ultimo && !estaVacia()){
            dato = primero->dato;
            delete primero;
            primero = NULL;
            ultimo = NULL;
        }
        else{
            dato = primero->dato;
            aux = primero;
            primero = primero->detras;
            delete aux;
        }
        return dato;
    };
    bool estaVacia(void){
        return
                primero == NULL
                &&
                ultimo == NULL
        ;
    };
    void liberaCola(void){
        while(!estaVacia()){
            cout<< pop() << " ";
        }
    };
};

int main(void){
    srand(time(NULL));
    PilaInt P,POriginal,Aux;
    ColaInt C;
    int i,n;
    int x;

    cout<<"Cuantos? ";cin>>n;

    for(i=0; i<n; i++){//Se genera una Pila con numeros aleatorios (y una copia de ella)
        x = rand()%100;
        P.push(x);
        POriginal.push(x);
    }
    cout<<"POriginal"<<endl;
    POriginal.liberaPila();
    cout<<endl<<endl;


    while(!P.estaVacia()){//Se vacia la pila
        x = P.pop();
        if(x%2==0)//Los numeros pares se almacenan en una Cola
            C.push(x);
        else
            Aux.push(x);//Los impares se almacenan en otra pila
    }

    while(!Aux.estaVacia())//Se reconstruye la original, ya sin numeros pares
        P.push(Aux.pop());

    cout<<"P"<<endl;
    P.liberaPila();
    cout<<endl<<endl;

    cout<<"C"<<endl;
    C.liberaCola();
    cout<<endl<<endl;


    return 0;
}

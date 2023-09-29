#include <iostream>
#include <stdlib.h>
using namespace std;

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
    ColaInt C;

    C.push(1);
    C.push(2);
    C.push(3);
    C.push(4);
    C.push(5);

    return 0;
}

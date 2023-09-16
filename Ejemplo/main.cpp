#include <iostream>
#include <stdlib.h>
using namespace std;

class Nodo{
public:
    int dato;
    Nodo* inferior;
    Nodo(void){
        dato = 0;
        inferior = NULL;
        cout<<"Nodo construido..."<<endl;
    };
    Nodo(int d, Nodo* i){
        dato = d;
        inferior = i;
        cout<<"Nodo construido..."<<endl;
    };
    ~Nodo(void){
        cout<<"Nodo destruido..."<<endl;
    };
};

class Pila{
private:
    Nodo* tope;
public:
    Pila(void){
        tope=NULL;  //Pila inicialmente vacia
    };
    void push(int dato){
        tope = new Nodo(dato, tope);   //Se construye Nodo dinamicamente
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
};

int main(void){
    cout<<"Inicio del main"<<endl<<endl;
    Pila P;

    P.push(3);  //Se inserta dato en Pila
    P.push(5);  //Se inserta dato en Pila
    P.push(7);  //Se inserta dato en Pila
    P.push(-4); //Se inserta dato en Pila
    system("pause");
    system("cls");

    cout<<"Nodos con valor y direccion de otro NODO:"<<endl<<endl;

    cout<<P.pop()<<endl<<endl;    //Se elimina nodo de la Pila
    cout<<P.pop()<<endl<<endl;    //Se elimina nodo de la Pila
    cout<<P.pop()<<endl<<endl;    //Se elimina nodo de la Pila
    cout<<P.pop()<<endl<<endl;    //Se elimina nodo de la Pila

    cout<<"Fin del main"<<endl<<endl;//No quedo ningun nodo en memoria

    return 0;
}

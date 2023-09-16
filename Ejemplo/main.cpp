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

int main(void){
    cout<<"Inicio del main"<<endl<<endl;

    Nodo* tope=NULL;            //Pila vacia
    Nodo* aux;

    tope = new Nodo(3, tope);   //Se construye Nodo dinamicamente (push)
    tope = new Nodo(5, tope);   //Se construye Nodo dinamicamente (push)
    tope = new Nodo(7, tope);   //Se construye Nodo dinamicamente (push)
    tope = new Nodo(-4, tope);  //Se construye Nodo dinamicamente (push)
    system("pause");
    system("cls");

    cout<<"Nodos con valor y direccion de otro NODO:"<<endl<<endl;

    cout<<"tope = "<<tope<<endl
        <<"tope->dato = "<<tope->dato<<endl
        <<"tope->inferior = "<<tope->inferior<<endl;
    //Se elimina nodo en el tope
    aux=tope;
    tope = tope->inferior;
    delete aux;
    cout<<endl<<endl;

    cout<<"tope = "<<tope<<endl
        <<"tope->dato = "<<tope->dato<<endl
        <<"tope->inferior = "<<tope->inferior<<endl;
    //Se elimina nodo en el tope
    aux=tope;
    tope = tope->inferior;
    delete aux;
    cout<<endl<<endl;

    cout<<"tope = "<<tope<<endl
        <<"tope->dato = "<<tope->dato<<endl
        <<"tope->inferior = "<<tope->inferior<<endl;
    //Se elimina nodo en el tope
    aux=tope;
    tope = tope->inferior;
    delete aux;
    cout<<endl<<endl;

    cout<<"tope = "<<tope<<endl
        <<"tope->dato = "<<tope->dato<<endl
        <<"tope->inferior = "<<tope->inferior<<endl;
    //Se elimina nodo en el tope
    aux=tope;
    tope = tope->inferior;
    delete aux;
    cout<<endl<<endl;

    cout<<"Fin del main"<<endl<<endl;//No quedo ningun nodo en memoria

    return 0;
}

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

    Nodo D(3, NULL);    //Se construye Nodo inicializado
    Nodo C(5, &D);      //Se construye Nodo inicializado
    Nodo B(7, &C);      //Se construye Nodo inicializado
    Nodo A(-4, &B);     //Se construye Nodo inicializado
    system("pause");
    system("cls");

    cout<<"Nodos con valor y direccion de otro NODO:"<<endl<<endl;

    cout<<"&A = "<<&A<<endl
        <<"A.dato = "<<A.dato<<endl
        <<"A.inferior = "<<A.inferior<<endl<<endl;

    cout<<"&B = "<<&B<<endl
        <<"B.dato = "<<B.dato<<endl
        <<"B.inferior = "<<B.inferior<<endl<<endl;

    cout<<"&C = "<<&C<<endl
        <<"C.dato = "<<C.dato<<endl
        <<"C.inferior = "<<C.inferior<<endl<<endl;

    cout<<"&D = "<<&D<<endl
        <<"D.dato = "<<D.dato<<endl
        <<"D.inferior = "<<D.inferior<<endl<<endl;

    system("pause");
    system("cls");
    cout<<"Fin del main"<<endl<<endl;//Se destruyen los objetos

    return 0;
}

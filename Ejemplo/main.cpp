#include <iostream>
#include <stdlib.h>
using namespace std;

class Nodo{
public:
    int dato;
    Nodo* inferior;
    Nodo(void){
        cout<<"Nodo construido..."<<endl;
    };
    ~Nodo(void){
        cout<<"Nodo destruido..."<<endl;
    };
};

int main(void){
    cout<<"Inicio del main"<<endl<<endl;

    Nodo A, B, C, D;    //Se construyen Nodos con basura
    system("pause");
    system("cls");

    cout<<"Nodos con contenido basura:"<<endl<<endl;

    cout<<"A.dato = "<<A.dato<<endl
        <<"A.inferior = "<<A.inferior<<endl<<endl;

    cout<<"B.dato = "<<B.dato<<endl
        <<"B.inferior = "<<B.inferior<<endl<<endl;

    cout<<"C.dato = "<<C.dato<<endl
        <<"C.inferior = "<<C.inferior<<endl<<endl;

    cout<<"D.dato = "<<D.dato<<endl
        <<"D.inferior = "<<D.inferior<<endl<<endl;

    system("pause");
    system("cls");
    cout<<"Fin del main"<<endl<<endl;//Se destruyen los objetos

    return 0;
}

#include <iostream>
#include <stdlib.h>
using namespace std;

class NodoFloat{
public:
    float dato;
    NodoFloat* inferior;
    NodoFloat(void){
        dato = 0;
        inferior = NULL;
        cout<<"NodoFloat construido..."<<endl;
    };
    NodoFloat(float d, NodoFloat* i){
        dato = d;
        inferior = i;
        cout<<"NodoFloat construido..."<<endl;
    };
    ~NodoFloat(void){
        cout<<"NodoFloat destruido..."<<endl;
    };
};

class PilaFloat{
private:
    NodoFloat* tope;
public:
    PilaFloat(void){
        tope=NULL;  //PilaFloat inicialmente vacia
    };
    ~PilaFloat(void){
        liberaPila();
    };
    void push(float dato){
        tope = new NodoFloat(dato, tope);   //Se construye NodoFloat dinamicamente
    };
    float pop(void){
        NodoFloat* aux;
        float d;
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
    cout<<"Inicio del main"<<endl<<endl;
    PilaFloat PF;

    PF.push(3.4);  //Se inserta dato en PilaFloat
    PF.push(5.6);  //Se inserta dato en PilaFloat
    PF.push(7.8);  //Se inserta dato en PilaFloat
    PF.push(-4.5); //Se inserta dato en PilaFloat
    system("pause");
    system("cls");

    cout<<"Se libera la pila antes del fin del programa"<<endl<<endl;//No quedo ningun NodoFloat en memoria
    PF.liberaPila();
    system("pause");
    system("cls");

    cout<<"Se rellena nuevamente la pila antes del fin del programa"<<endl<<endl;
    PF.push(33.44);  //Se inserta dato en PilaFloat
    PF.push(55.66);  //Se inserta dato en PilaFloat
    PF.push(77.88);  //Se inserta dato en PilaFloat
    PF.push(-44.55); //Se inserta dato en PilaFloat
    system("pause");
    system("cls");

    cout<<"Fin del main. Despues, el destructor libera la memoria:"<<endl<<endl;
    return 0;//No quedo ningun NodoFloat en memoria, despues del main
}

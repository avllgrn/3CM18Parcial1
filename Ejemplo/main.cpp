#include <iostream>
#include <stdlib.h>
using namespace std;


class PilaFloat{
private:
    //La clase solo existe dentro de PilaFloat (nadie fuera de PilaFloat puede usar esta clase Nodo)
    class Nodo{
    public:
        float dato;
        Nodo* inferior;
        Nodo(void){
            dato = 0.0;
            inferior = NULL;
            cout<<"Nodo construido..."<<endl;
        };
        Nodo(float d, Nodo* i){
            dato = d;
            inferior = i;
            cout<<"Nodo construido..."<<endl;
        };
        ~Nodo(void){
            cout<<"Nodo destruido..."<<endl;
        };
    };
    Nodo* tope; //Una Pila solo tiene un apuntador al Nodo de hasta arriba de ella
public:
    PilaFloat(void){
        tope = NULL;  //PilaFloat inicialmente vacia
    };
    ~PilaFloat(void){
        liberaPila();   //Se manda liberar todos los nodos
    };
    void push(float dato){
        tope = new Nodo(dato, tope);   //Se construye Nodo dinamicamente
    };
    float pop(void){
        Nodo* aux;
        float d;
        d = tope->dato;
        aux = tope;                 //Se libera dinamicamente
        tope = tope->inferior;      //la memoria solicitada
        delete aux;                 //con new, en push
        return d;
    };
    bool estaVacia(void){
        return tope == NULL;        //Si tope tiene NULL, esta vacia
    };
    void liberaPila(void){
        while(!estaVacia()){        //Mientras haya nodos
            cout<< pop() << endl;   //Libera cada nodo de la pila
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

    cout<<"Se libera la pila antes del fin del programa"<<endl<<endl;//No quedo ningun Nodo en memoria
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
    return 0;//No quedo ningun Nodo en memoria, despues del main
}

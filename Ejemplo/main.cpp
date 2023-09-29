#include <iostream>
#include <stdlib.h>
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
    };    Nodo* tope;
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

int main(void){
    PilaInt P;
    int n,x;

    cout<<"Ingresa n ";
    cin>>n;
    x = n;

    while(n>0){//La conversion se almacena en una Pila
        P.push(n%2);
        n = n/2;
    }
    n = x;

    cout<<endl<<endl
        <<n<<" = ";

    while(!P.estaVacia())//La conversion se muestra, vaciando la Pila
        cout<<P.pop();

    cout<<endl<<endl;

    return 0;
}

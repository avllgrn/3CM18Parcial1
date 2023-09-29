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
    srand(time(NULL));
    PilaInt P1, P2, Aux;
    int i,n,x;

    cout<<"Ingresa n ";
    cin>>n;

    //Se rellena con n numeros aleatorios la pila original
    for(i=0; i<n;i++)
        P1.push(rand()%100);

    //Se destruye la pila original en una auxiliar
    while(!P1.estaVacia())
        Aux.push(P1.pop());

    //Se reconstruye la pila original y se genera su copia
    while(!Aux.estaVacia()){
        x = Aux.pop();
        P1.push(x);
        P2.push(x);
    }

    //Se muestran las tres pilas (destruyendolas)
    system("cls");
    cout<<"P1 -> ";
    while(!P1.estaVacia())
        cout<<"\t"<<P1.pop()<<endl;
    cout<<endl;

    cout<<"P2 -> ";
    while(!P2.estaVacia())
        cout<<"\t"<<P2.pop()<<endl;
    cout<<endl;

    cout<<"Aux -> ";
    while(!Aux.estaVacia())
        cout<<"\t"<<Aux.pop()<<endl;
    cout<<endl;



    cout<<endl<<endl;

    return 0;
}

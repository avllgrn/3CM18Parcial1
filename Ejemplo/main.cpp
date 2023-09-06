#include <iostream>
#include <stdlib.h>
using namespace std;

class Punto{
public:
    double x;
    double y;
};

class Complejo{
public:
    double real;
    double imaginario;
};

class Fraccion{
public:
    int numerador;
    int denominador;
};

int main(void){
    Punto P;    //Se construye objeto tipo Punto
    Complejo C; //Se construye objeto tipo Complejo
    Fraccion F; //Se construye objeto tipo Fraccion

    cout << "P ocupa\t  "<< sizeof(P) << " bytes" << endl;//Memoria reservada para objeto
    cout << "C ocupa\t  "<< sizeof(C) << " bytes" << endl;//Memoria reservada para objeto
    cout << "F ocupa\t  "<< sizeof(F) << " bytes" << endl;//Memoria reservada para objeto
    cout<<endl<<endl;
    system("pause");
    system("cls");


    cout << "P = ("<<P.x<<", "<<P.y<<")"<< endl;//Se muestran los atributos del objeto (con datos basura)
    cout<<endl<<endl;
    cout << "C = "<<C.real<<" + "<<C.imaginario<<"i"<<endl;//Se muestran los atributos del objeto (con datos basura)
    cout<<endl<<endl;
    cout << "F = "<< F.numerador<<" / "<<F.denominador<<endl;//Se muestran los atributos del objeto (con datos basura)
    cout<<endl<<endl;
    system("pause");
    cout<<endl<<endl;

    P.x = 1.2;          //Asignacion de una dato a atributo de objeto
    P.y = 3.4;          //Asignacion de una dato a atributo de objeto
    C.real = 5.6;       //Asignacion de una dato a atributo de objeto
    C.imaginario = 7.8; //Asignacion de una dato a atributo de objeto
    F.numerador = 9;    //Asignacion de una dato a atributo de objeto
    F.denominador = 10; //Asignacion de una dato a atributo de objeto

    cout << "P = ("<<P.x<<", "<<P.y<<")"<< endl;//Se muestran los atributos del objeto (ya no hay basura)
    cout<<endl<<endl;
    cout << "C = "<<C.real<<" + "<<C.imaginario<<"i"<<endl;//Se muestran los atributos del objeto (ya no hay basura)
    cout<<endl<<endl;
    cout << "F = "<< F.numerador<<" / "<<F.denominador<<endl;//Se muestran los atributos del objeto (ya no hay basura)
    cout<<endl<<endl;

    return 0;
}

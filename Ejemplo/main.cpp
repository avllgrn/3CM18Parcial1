#include <iostream>
#include <stdlib.h>
using namespace std;

class Punto{
public:
    double x;
    double y;
    void pideTusDatos(void);
    void muestraTusDatos(void);
};
void Punto::pideTusDatos(void){
    cout<<"Dame mi x ";cin>>x;
    cout<<"Dame mi y ";cin>>y;
}
void Punto::muestraTusDatos(void){
    cout<<"("<<x<<", "<<y<<")"<<endl;
}

int main(void){
    Punto A;//Se construye objeto tipo Punto
    Punto B;//Se construye objeto tipo Punto
    Punto C;//Se construye objeto tipo Punto

    cout << "A ocupa\t  "<< sizeof(A) << " bytes" << endl;//Memoria reservada para objeto
    cout << "B ocupa\t  "<< sizeof(B) << " bytes" << endl;//Memoria reservada para objeto
    cout << "C ocupa\t  "<< sizeof(C) << " bytes" << endl;//Memoria reservada para objeto
    cout<<endl<<endl;
    system("pause");
    system("cls");


    cout<<"A";
    A.muestraTusDatos();//Se muestran los atributos del objeto (con datos basura)
    cout<<endl<<endl;
    cout<<"B";
    B.muestraTusDatos();//Se muestran los atributos del objeto (con datos basura)
    cout<<endl<<endl;
    cout<<"C";
    C.muestraTusDatos();//Se muestran los atributos del objeto (con datos basura)
    cout<<endl<<endl;
    system("pause");
    cout<<endl<<endl;

    A.x = 1.6;      //Asignacion de una dato a atributo de objeto
    A.y = 2.8;      //Asignacion de una dato a atributo de objeto
    B.x = 3.6;      //Asignacion de una dato a atributo de objeto
    B.y = 4.8;      //Asignacion de una dato a atributo de objeto
    C.x = 5.6;      //Asignacion de una dato a atributo de objeto
    C.y = 6.8;      //Asignacion de una dato a atributo de objeto

    cout<<"A";
    A.muestraTusDatos();//Se muestran los atributos del objeto (ya no hay basura)
    cout<<endl<<endl;
    cout<<"B";
    B.muestraTusDatos();//Se muestran los atributos del objeto (ya no hay basura)
    cout<<endl<<endl;
    cout<<"C";
    C.muestraTusDatos();//Se muestran los atributos del objeto (ya no hay basura)
    cout<<endl<<endl;

    return 0;
}

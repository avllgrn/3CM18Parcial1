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

    cout<<"A"<<endl;
    A.pideTusDatos();//Se solicitan al usuario atributos del objeto
    cout<<endl<<endl;
    cout<<"B"<<endl;
    B.pideTusDatos();//Se solicitan al usuario atributos del objeto
    cout<<endl<<endl;
    cout<<"C"<<endl;
    C.pideTusDatos();//Se solicitan al usuario atributos del objeto
    cout<<endl<<endl;

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

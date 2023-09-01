#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){

    int varInt;             //Declaracion de variable
    float varFloat;         //Declaracion de variable
    char varChar;           //Declaracion de variable
    long long varLongLong;  //Declaracion de variable
    double varDouble;       //Declaracion de variable

    cout << "varInt ocupa\t  "<< sizeof(varInt) << " bytes" << endl;        //Memoria reservada para variable
    cout << "varFloat ocupa\t  "<< sizeof(varFloat) << " bytes" << endl;    //Memoria reservada para variable
    cout << "varChar ocupa\t  "<< sizeof(varChar) << " bytes" << endl;      //Memoria reservada para variable
    cout << "varLongLong ocupa "<< sizeof(varLongLong) << " bytes" << endl; //Memoria reservada para variable
    cout << "varDouble ocupa\t  "<< sizeof(varDouble) << " bytes" << endl;  //Memoria reservada para variable
    cout<<endl<<endl;
    system("pause");
    system("cls");


    cout << "varInt\t\t= "<< varInt << endl;            //Contenido (dato basura) en la variable
    cout << "varFloat\t= "<< varFloat << endl;          //Contenido (dato basura) en la variable
    cout << "varChar\t\t= "<< varChar << endl;          //Contenido (dato basura) en la variable
    cout << "varLongLong\t= "<< varLongLong << endl;    //Contenido (dato basura) en la variable
    cout << "varDouble\t= "<< varDouble << endl;        //Contenido (dato basura) en la variable
    cout<<endl<<endl;
    system("pause");
    system("cls");

    varInt = 5;         //Asignacion de una dato a una variable
    varFloat = 6.7;     //Asignacion de una dato a una variable
    varChar = '@';      //Asignacion de una dato a una variable
    varLongLong = 7;    //Asignacion de una dato a una variable
    varDouble = 8.9;    //Asignacion de una dato a una variable

    cout << "varInt\t\t= "<< varInt << endl;            //Contenido (dato) en la variable
    cout << "varFloat\t= "<< varFloat << endl;          //Contenido (dato) en la variable
    cout << "varChar\t\t= "<< varChar << endl;          //Contenido (dato) en la variable
    cout << "varLongLong\t= "<< varLongLong << endl;    //Contenido (dato) en la variable
    cout << "varDouble\t= "<< varDouble << endl;        //Contenido (dato) en la variable
    cout<<endl<<endl;
    system("pause");
    system("cls");


    int* ptrInt;            //Declaracion de apuntador a un int
    float* ptrFloat;        //Declaracion de apuntador a un float
    char* ptrChar;          //Declaracion de apuntador a un char
    long long* ptrLongLong; //Declaracion de apuntador a un long long
    double* ptrDouble;      //Declaracion de apuntador a un double

    cout << "ptrInt ocupa\t  "<< sizeof(ptrInt) << " bytes" << endl;                //Memoria reservada para apuntador
    cout << "ptrFloat ocupa\t  "<< sizeof(ptrFloat) << " bytes" << endl;            //Memoria reservada para apuntador
    cout << "ptrChar ocupa\t  "<< sizeof(ptrChar) << " bytes" << endl;              //Memoria reservada para apuntador
    cout << "ptrLongLong ocupa "<< sizeof(ptrLongLong) << " bytes" << endl;         //Memoria reservada para apuntador
    cout << "ptrDouble ocupa\t  "<< sizeof(ptrDouble) << " bytes" << endl << endl;  //Memoria reservada para apuntador

    cout << "ptrInt\t\t= "<< ptrInt << endl;            //Contenido (direccion basura) en el apuntador
    cout << "ptrFloat\t= "<< ptrFloat << endl;          //Contenido (direccion basura) en el apuntador
    cout << "ptrChar\t\t= "<< (void*)ptrChar << endl;   //Contenido (direccion basura) en el apuntador
    cout << "ptrLongLong\t= "<< ptrLongLong << endl;    //Contenido (direccion basura) en el apuntador
    cout << "ptrDouble\t= "<< ptrDouble << endl;        //Contenido (direccion basura) en el apuntador
    cout<<endl<<endl;
    system("pause");
    system("cls");

    ptrInt = &varInt;           //Asignacion de una direccion a un apuntador
    ptrFloat = &varFloat;       //Asignacion de una direccion a un apuntador
    ptrChar = &varChar;         //Asignacion de una direccion a un apuntador
    ptrLongLong = &varLongLong; //Asignacion de una direccion a un apuntador
    ptrDouble = &varDouble;     //Asignacion de una direccion a un apuntador

    cout << "varInt =\t"<< varInt << endl;          //Contenido (dato) de la variable
    cout << "&varInt =\t"<< &varInt << endl;        //Direccion de la variable
    cout << "ptrInt =\t"<< ptrInt << endl;          //Contenido (direccion) en el apuntador
    cout << "&ptrInt =\t"<< &ptrInt << endl;        //Direccion del apuntador
    cout << "*ptrInt =\t"<< *ptrInt << endl << endl;//Contenido en la variable a la que se apunta

    cout << "varFloat =\t"<< varFloat << endl;          //Contenido (dato) de la variable
    cout << "&varFloat =\t"<< &varFloat << endl;        //Direccion de la variable
    cout << "ptrFloat =\t"<< ptrFloat << endl;          //Contenido (direccion) en el apuntador
    cout << "&ptrFloat =\t"<< &ptrFloat << endl;        //Direccion del apuntador
    cout << "*ptrFloat =\t"<< *ptrFloat << endl << endl;//Contenido en la variable a la que se apunta

    cout << "varChar =\t"<< varChar << endl;          //Contenido (dato) de la variable
    cout << "&varChar =\t"<< (void*)&varChar << endl; //Direccion de la variable
    cout << "ptrChar =\t"<< (void*)ptrChar << endl;   //Contenido (direccion) en el apuntador
    cout << "&ptrChar =\t"<< (void*)&ptrChar << endl; //Direccion del apuntador
    cout << "*ptrChar =\t"<< *ptrChar << endl << endl;//Contenido en la variable a la que se apunta

    cout << "varLongLong =\t"<< varLongLong << endl;          //Contenido (dato) de la variable
    cout << "&varLongLong =\t"<< &varLongLong << endl;        //Direccion de la variable
    cout << "ptrLongLong =\t"<< ptrLongLong << endl;          //Contenido (direccion) en el apuntador
    cout << "&ptrLongLong =\t"<< &ptrLongLong << endl;        //Direccion del apuntador
    cout << "*ptrLongLong =\t"<< *ptrLongLong << endl << endl;//Contenido en la variable a la que se apunta

    cout << "varDouble =\t"<< varDouble << endl;          //Contenido (dato) de la variable
    cout << "&varDouble =\t"<< &varDouble << endl;        //Direccion de la variable
    cout << "ptrDouble =\t"<< ptrDouble << endl;          //Contenido (direccion) en el apuntador
    cout << "&ptrDouble =\t"<< &ptrDouble << endl;        //Direccion del apuntador
    cout << "*ptrDouble =\t"<< *ptrDouble << endl;        //Contenido en la variable a la que se apunta
    cout<<endl<<endl;

    return 0;
}

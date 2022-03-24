#include <iostream>
using namespace std;
/**
Problema 4
La poblacion estudiantil en la Escuela Tecnica de Atlanta se
incrementa a razon de 8% anual. Si la poblacion estudiantil
actual es de 1400 alumnos. Cuantos tendra dentro de diez
años?
**/
//Autor: EdgarVerjan
//Fecha: 23/03/2022
int main() {
    double x;
    x=2400;
    for(int i=0; i<10; i++){
        x=(x*0.08)+x;
    }
    cout<<"Cantidad de alumnos en diez años: "<<endl;
    cout<<x<<endl;
}

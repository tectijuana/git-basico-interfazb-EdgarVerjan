#include <iostream>
using namespace std;
/**
Problema 10
Suponer que la retencion de impuestos de un salario semanal se
calcula de la manera siguiente: 15% de la diferencia entre el
salario total de un empleado y $10 multiplicado por el numero
de persones que el sostiene. Introducir los valores del sueldo
total de un empleado y el numero de personas que de el
dependen; imprimir el impuesto que se retiene por empleado.
**/
//Autor: EdgarVerjan
//Fecha: 23/03/2022
int main() {
    double u,v,w,x,y,z,a;

    cout<<"Sueldo total: "<<endl;
    cin>>u;
    cout<<"Numero de personas que de el dependen: "<<endl;
    cin>>v;
    w=u*0.15;
    x=v*10;
    y=w+x;
    cout<<"El importe de la orden es de: "<<endl;
    cout<<y<<endl;
}

#include <iostream>
using namespace std;
/**
Problema 5
Un cliente ordena cuatro libros, que al menudeo cuesta $8.95,
con un descuento del 20%; tres discos en $3.50 con un descuento
del 15% y un tocadisto de $59.95, que no tiene descuento. Hay
ademas un descuento del 2% sobre el pedido total si se paga
pronto. Calcular el importe de la orden.
**/
//Autor: EdgarVerjan
//Fecha: 23/03/2022
int main() {
    double u,v,w,x,y,z,a;
    u=8.95*4;
    v=3.5*3;
    w=59.95;
    y=u*0.2;
    z=v*0.15;
    x=(u-y)+(v-z)+w;
    a=x-(x*0.02);
    cout<<"El importe de la orden es de: "<<endl;
    cout<<a<<endl;
}

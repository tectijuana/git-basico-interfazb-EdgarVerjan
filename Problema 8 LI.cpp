#include <iostream>
using namespace std;
/**
Problema 8
Juanita lopez trabaja en cuatro ocupaciones que le pagan un
sueldo diferente por hora. Determinar su ingreso en una
semana si trabajo las horas siguientes con razones indicadas:
trabajo A, 12 h, con $3.20 por h; trabajo B, 10 h a $4.10 la
h; trabajo C, 8 h, a $3.80 la h y trabajo D, 13 h a $2.95 la h.
**/
//Autor: EdgarVerjan
//Fecha: 23/03/2022
int main() {
    double u,v,w,x,y,z,a;
    u=12*3.2;
    v=10*4.1;
    w=8*3.8;
    y=13*2.95;
    a=u+v+w+y;
    cout<<"El ingreso semanal de Juanita Lopez es de: "<<endl;
    cout<<a<<endl;
}

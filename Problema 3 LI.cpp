#include <iostream>
using namespace std;
/**
Problema 3
Una cierta compañia de fletes tiene las siguientes tarifas
entre Boston y Los Angeles:
$75 por ton para las primeras 10 tons; $35 por ton para cada
ton arriba de 10. Cuanto costara los siguientes cargamentos
de 12, 36, 8, 100, 1260?
**/
//Autor: EdgarVerjan
//Fecha: 23/03/2022
int main() {
    double u,v,w,x,y,z,a;
    u=75*10;
    v=75*8;
    x=(2*35)+u;
    y=(26*35)+u;
    z=(90*35)+u;
    a=(1250*35)+u;
    cout<<"Costo del cargamento de 12: "<<endl;
    cout<<x<<endl;
    cout<<"Costo del cargamento de 36: "<<endl;
    cout<<y<<endl;
    cout<<"Costo del cargamento de 8: "<<endl;
    cout<<v<<endl;
    cout<<"Costo del cargamento de 100: "<<endl;
    cout<<z<<endl;
    cout<<"Costo del cargamento de 1260: "<<endl;
    cout<<a<<endl;
}

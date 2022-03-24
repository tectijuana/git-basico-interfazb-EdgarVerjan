#include <iostream>
using namespace std;
/**
Problema 2
Una casa editora suministra textos escolares. Ofrece descuentos
en ordenes de 30 o mas volumenes del mismo titulo. Un cierto
texto tiene los siguientes precios:
Abajo de 30 copias: $6.95 por libro
Treinta o mas copias: $6.00 oir copia
Calcular el costo por escuela que haya ordenado los siguientes
pedidos:
Escuela A: 35 copias
Escuela B: 12 copias
Escuals C: 70 copias
Escuela D: 20 copias
**/
//Autor: EdgarVerjan
//Fecha: 23/03/2022
int main() {
    double u,v,w,x,y,z;
    u=6.95;
    v=6;
    w=35*v;
    x=12*u;
    y=70*v;
    z=20*u;
    cout<<"Costo de las copias de Escuela A: "<<endl;
    cout<<w<<endl;
    cout<<"Costo de las copias de Escuela B: "<<endl;
    cout<<x<<endl;
    cout<<"Costo de las copias de Escuela C: "<<endl;
    cout<<y<<endl;
    cout<<"Costo de las copias de Escuela D: "<<endl;
    cout<<z<<endl;
}

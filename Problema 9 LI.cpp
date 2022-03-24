#include <iostream>
using namespace std;
/**
Problema 9
Calcular el ingreso global por semana de una persona, dados
sus tasa por h, sueldo por hora de tiempo extraordinario,
numero de horas trabajadas normales y extraordinarias.
**/
//Autor: EdgarVerjan
//Fecha: 23/03/2022
int main() {
    double u,v,w,x,y,z,a;

    cout<<"Cual es tu sueldo por horas normales: "<<endl;
    cin>>u;
    cout<<"Cual es tu sueldo por horas extraordinarias: "<<endl;
    cin>>v;
    cout<<"Cuantas horas normales trabajaste esta semana: "<<endl;
    cin>>w;
    cout<<"Cuantas horas extraordinarias trabajaste esta semana: "<<endl;
    cin>>x;
    y=(u*w)+(v*x);
    cout<<"El sueldo por semana es de: "<<endl;
    cout<<y<<endl;
}

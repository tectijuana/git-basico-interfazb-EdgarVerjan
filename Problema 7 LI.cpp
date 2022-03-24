#include <iostream>
using namespace std;
/**
Problema 7
Escribir un programa que contabilice su cuenta de cheques.
Debe sumar depositos, restar cheques girados, sustraer los
cargos bancarios e imprimir balances mensuales.
**/
//Autor: EdgarVerjan
//Fecha: 23/03/2022
int main() {
    double u,v,w,x,y,z,a,b,c;
    v=0;
    w=0;
    b=0;
    cout<<"Cuantos depositos fueron: "<<endl;
    cin>>x;
    for(int i=0; i<x; i++){
        cout<<"De cuanto fue el deposito"<<endl;
        cin>>u;
        v=u+v;
    }
    cout<<"Cuantos cheques girados fueron: "<<endl;
    cin>>y;
    for(int i=0; i<y; i++){
        cout<<"De cuanto fue el cheque girado"<<endl;
        cin>>a;
        w=a+w;
    }
    cout<<"Cuantos cargos bancarios fueron: "<<endl;
    cin>>z;
    for(int i=0; i<z; i++){
        cout<<"De cuanto fue el cargo bancario"<<endl;
        cin>>c;
        b=c+b;
    }
    cout<<"Tus balances mensuales son: "<<endl;
    cout<<"Tus depositos dan un total de: "<<endl;
    cout<<v<<endl;
    cout<<"Tus cheques girados dan un total de: "<<endl;
    cout<<w<<endl;
    cout<<"Tus cargos bancarios dan un total de: "<<endl;
    cout<<b<<endl;
}

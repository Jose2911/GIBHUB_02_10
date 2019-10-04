#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include "FuncionesImpar.h"

using namespace std;

void ejer01(){
    entero elementos=0;
    range pos=0;
    entero nuevo=0;
    cout<<"Ingrese el numero de elementos :";cin>>elementos;
    entero* lista = Lista_crear(elementos);
    mostrar_lista(lista, elementos);
    while(pos!=-1){
        cout<<"Ingrese posicion a cambiar (-1 para finalizar ):";cin>>pos;
        if (pos!=-1){
            cout<<"Ingrese el nuevo valor :";cin>>nuevo;
            nueva_lista(lista, pos, nuevo);
            mostrar_lista(lista, elementos);
        } else
            break;
    }
}

void ejer03(){
    entero numero=0;
    cout<<"N:";cin>>numero;
    entero* lista=new entero[numero];
    for(entero i=0; i<numero;i++){
        cout<<"N"<<i+1<<":";cin>>lista[i];
        }
    float p=promedio(lista, numero);
    float result=varianza(p, lista,numero);
    cout<<"Varianza :"<<p;
}

int main() {
    ejer03();
    return 0;
}
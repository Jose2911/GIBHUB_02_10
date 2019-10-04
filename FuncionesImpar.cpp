//
// Created by Usuario on 4/10/2019.
//
#include <iostream>
#include "FuncionesImpar.h"
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
using namespace std;

//EJERCICIO 01
device dev;
entero randint(range first, range last) {
    distribution dist(first, last);
    return dist(dev);
}
entero* Lista_crear(range elementos){
    entero* lista = new entero[elementos];
    for (entero i = 0; i<elementos; i++)
        lista[i]=randint(0,100);
    return lista;
}
void nueva_lista(entero*& lista, range pos, range nuevo){
    lista[pos]=nuevo;
    return; lista;
}
void mostrar_lista(entero* lista, range elementos){
    for(range i = 0; i<elementos;i++)
        cout<<lista[i]<<" ";
    cout<<endl;
}
//EJERCICIO 03

float promedio(entero* lista, entero numero){
    float suma=0;
    for (entero i = 0; i < numero; i++){
        suma=lista[i]+suma;
    }
    float prom=suma/numero;
    return  prom;
}
float varianza(float p, entero* lista,entero numero){
    float suma=0;
    for(entero i =0; i< numero;i++)
        suma=pow((p-lista[i]),2);
    float total = suma/(numero-1);
    return total;

}


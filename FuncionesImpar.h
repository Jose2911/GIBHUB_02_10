//
// Created by Usuario on 4/10/2019.
//
#ifndef GIBHUB_02_10_FUNCIONESIMPAR_H
#define GIBHUB_02_10_FUNCIONESIMPAR_H

#include <random>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
using namespace std;
typedef size_t range;
typedef int entero;
typedef random_device device;
typedef uniform_int_distribution<range> distribution;

entero randint(range first, range last);
entero* Lista_crear(range elementos);
void nueva_lista(entero*& lista, range pos, range nuevo);
void mostrar_lista(entero* lista, range elementos);

float promedio(entero* lista, entero numero);
float varianza(float p, entero* lista,entero numero);


#endif //GIBHUB_02_10_FUNCIONESIMPAR_H

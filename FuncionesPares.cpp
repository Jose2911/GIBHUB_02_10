//
// Created by Usuario on 4/10/2019.
//
#include <iostream>
#include <vector>
using namespace std;
typedef int t;

void rec_2a() {
    t a ;
    cout<<"Ingrese el tamaño de su array: "<<endl;
    cin>>a;
    t *p= new t[a];
    cout<<"Ingrese los numeros: "<<endl;
    for(t i=0;i<a;i++)
    cin>>p[i];
    delete [] p;}
void busc_2a(t *p,t n) {
    t *k= new t[2];
    k[0]=p[0];
    k[1]=p[n-1];
    for (t i=0;i<n;i++){
        if(k[0]>p[i])
            k[0]=p[i];
        else if (k[1]<p[i])
            k[1]=p[i];
    }
    for(t i=0;i<2;i++)
        cout<<k[i]<<" ";
    delete [] k;

}



#include<iostream>
#include"arreglodinamico.h"
using namespace std;

int main()
{
    ArregloDinamico arreglo;
    arreglo.insertar_final("Luis");
    arreglo.insertar_final("Gerardo");
    arreglo.insertar_final("y");
    arreglo.insertar_final("estudio");
    arreglo.insertar_final("informatica");
    arreglo.insertar_final(":)");
    arreglo.insertar_inicio("soy");
    arreglo.insertar_inicio("Hola");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    
    return 0;
}

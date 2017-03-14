#include <iostream>
#include "stack.h"

using namespace std;

int contador = 0;
int *_auxiliar_Num_point;

void push(int obj) {

    int *numero;
    numero = _auxiliar_Num_point;

    if (contador > 0) numero = (int *) realloc(numero, contador * sizeof(int));
    else numero = (int *) malloc(sizeof(int));

    if(!numero) {
        cout << "Erro na alocação!" << endl;
        return;
    }

    numero[contador] = obj;
    _auxiliar_Num_point = numero;
    contador++;

    cout << "Número " << obj << " adicionado com sucesso!" << endl;

}

int pop() {

    if(isEmpty() == true) {
        cout << "Error!" << endl;
        return NULL;
    }

    int obj = _auxiliar_Num_point[contador-1];

    contador--;

    if (contador > 0) _auxiliar_Num_point = (int *) realloc(_auxiliar_Num_point, contador * sizeof(int));
    else _auxiliar_Num_point = (int *) malloc(sizeof(int));

    return obj;
}

int size() {
    if(isEmpty() == true) return 0;
    return (contador);
}

bool isEmpty() {
    return contador == 0;
}

int top() {
    if (isEmpty() == true) return 0;
    return _auxiliar_Num_point[contador];
}

void display() {
    cout << "[ ";
    for (int i = 0; i < contador; ++i) {
        cout << _auxiliar_Num_point[i];
        if(i != contador-1) {
            cout << ", ";
        }
    }
    cout << " ]" << endl << endl;
}

void liberaMemoria() {
    free(_auxiliar_Num_point);
}


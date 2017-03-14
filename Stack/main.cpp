#include <iostream>
#include "stack.h"

using namespace std;

int main() {


    push(5);
    display();
    push(3);
    display();
    cout << "Você eliminou o número: " << pop() << endl;
    display();
    push(7);
    display();
    cout << "Você eliminou o número: " << pop() << endl;
    display();
    cout << "Elemento do tipo da lista: " << top() << endl;
    display();
    cout << "Você eliminou o número: " << pop() << endl;
    display();
    cout << "Você eliminou o número: " << pop() << endl;
    display();
    cout << "Esta vázio?" << (isEmpty() == true ? "ESTA VÁZIO" : "NÃO ESTÁ VÁZIO") << endl;
    display();
    push(9);
    display();
    push(7);
    display();
    push(3);
    display();
    push(5);
    display();
    cout << "Quantidade de elementos: " << size() << endl;
    display();
    cout << "Você eliminou o número: " << pop() << endl;
    display();
    push(8);
    display();
    cout << "Você eliminou o número: " << pop() << endl;
    display();
    cout << "Você eliminou o número: " << pop() << endl;
    display();

    liberaMemoria();

}
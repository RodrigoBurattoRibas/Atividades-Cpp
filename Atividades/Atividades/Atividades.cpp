#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int atual = 0, ultimo = 0, transicao = 0, vezes = 0;

    cout << "Digite a quantida de vezes que o calculo de Fibonacci será feito:" << endl;
    cin >> vezes;

    cout << atual << ",";

    if (atual == 0) {
        atual++;
    }
    for (int i = 1; i < vezes; i++) {
        cout << atual << ",";
        transicao = atual;
        atual = atual + ultimo;
        ultimo = transicao;
    }
    return 0;
}
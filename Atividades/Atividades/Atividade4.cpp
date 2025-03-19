#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 0, cont = 0;

    cout << "Digite um n�mero inteiro e eu direi a quantidade de d�gitos que ele cont�m:" << endl;
    cin >> num;

    if (num <= 0) {
        cout << "Digite apenas n�meros positivos.";
        return 0;
    }
    while (num > 0) {
        num = num / 10;
        cont++;
    }
    cout << "Esse n�mero tem " << cont << " n�meros.";
    return 0;
}
//Atividade 5
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 0, cont = 0;

    cout << "Digite um número (inteiro e positivo), que eu somarei os valores individuais dos dígitos." << endl;
    cin >> num;

    if (num < 0) {
        cout << "Digite apenas números positivos.";
        return 0;
    }

    while (num > 0) {
        cont += num % 10;
        num /= 10;
        cout << cont << endl;
    }
    cout << "O total individual desse número é: " << cont;
    return 0;
}
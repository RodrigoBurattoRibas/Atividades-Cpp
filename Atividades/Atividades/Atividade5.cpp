//Atividade 5
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 0, cont = 0;

    cout << "Digite um n�mero (inteiro e positivo), que eu somarei os valores individuais dos d�gitos." << endl;
    cin >> num;

    if (num < 0) {
        cout << "Digite apenas n�meros positivos.";
        return 0;
    }

    while (num > 0) {
        cont += num % 10;
        num /= 10;
        cout << cont << endl;
    }
    cout << "O total individual desse n�mero �: " << cont;
    return�0;
}
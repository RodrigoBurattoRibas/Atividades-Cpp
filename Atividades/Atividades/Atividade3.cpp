#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int pri = 0;

    cout << "Digite um n�mero para eu verificar se ele � primo ou n�o (digite apenas n�meros inteiros positivos)" << endl;
    cin >> pri;

    if (pri <= 0) {
        cout << "N�o � v�lido";
    }
    else if (pri % 2 != 0 && pri % 3 != 0 || pri == 2 || pri == 3) {
        cout << "� primo";
    }
    else {
        cout << "N�o � primo";
    }
    return 0;
}
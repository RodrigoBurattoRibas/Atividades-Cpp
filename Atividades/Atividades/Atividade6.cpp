//Atividade 6
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string palavra;

    cout << "Digite uma palavra:" << endl;
    cin >> palavra;

    for (int a = 0; a < palavra.size(); a++) {
        if (palavra[a] != palavra[palavra.size() - a - 1]) {
            cout << "N�o � um pal�ndromo.";
            return 0;
        }
    }
    cout << "A palavra � um pal�ndromo.";
    return 0;
}
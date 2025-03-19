#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numelo = 0, n = 0;

    cout << "Repeticoes" << endl;
    cin >> numelo;

    for (int i = 0; i <= numelo; i += 2) {
        n += i;
    }
    cout << n;
    return 0;
}
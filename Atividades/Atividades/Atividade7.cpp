//Atividade 7
#include <iostream>
#include <typeinfo>
#include <time.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num[101] = {};
    srand(time(NULL));

    for (int i = 0; i < 99; i++) {
        num[i] = rand() % 100 + 1;
    }

    for (int i = 0; i <= 99; i++) {
        for (int j = 0; j <= 99; j++) {
            if (num[i] < num[j]) {
                num[100] = num[i];
                num[i] = num[j];
                num[j] = num[100];
            }
        }
    }
    for (int i = 0; i <= 99; i++) {
        cout << num[i] << endl;
    }
    return 0;
}
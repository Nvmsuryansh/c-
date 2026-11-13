#include <iostream>
using namespace std;

void Prime(int n) {

    for (int j = 2; j <= n; j++) {

        bool isPrime = true;

        for (int i = 2; i < j; i++) {
            if (j % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << j << " ";
        }
    }
}

int main() {
    Prime(100);
    return 0;
}

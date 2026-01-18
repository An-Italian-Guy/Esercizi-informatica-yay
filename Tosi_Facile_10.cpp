#include <iostream>
using namespace std;

void max(int v[], int n, int& x) {
    if (n <= 0) return;
    x = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > x) x = v[i];
    }
}

int main() {
    int vettore[5] = {3, 7, 2, 9, 5};

    int x;

    max(vettore, 5, x);

    cout << "Il massimo è: " << x << endl;
    return 0;
}

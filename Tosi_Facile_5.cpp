#include <iostream>
using namespace std;

void media(int v[], int n, double &m) {
    if (n == 0) {
        m = 0;
        return;
    }

    double somma = 0;
    for (int i = 0; i < n; i++) {
        somma = somma + v[i];
    }
    m = somma / n;
}

int main() {
    int v[] = {2, 4, 6, 8, 10};
    int n = 5;
    double m;

    media(v, n, m);

    cout << "La media è: " << m << endl;

    return 0;
}

#include <iostream>
using namespace std;

bool presente(int v[], int dim, int x) {
    for (int i = 0; i < dim; i++) {
        if (v[i] == x) return true;
    }
    return false;
}

void aggiungi(int f[], int &used, int dim, int x) {
    if (used < dim) {
        f[used] = x;
        used++;
    }
}

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    int t[7] = {1, 3, 5, 7, 5, 11, 13};
    int dst[12];
    int cont = 0;

    for (int i = 0; i < 5; i++) {
        if (!presente(dst, cont, v[i])) {
            aggiungi(dst, cont, 12, v[i]);
        }
    }

    for (int i = 0; i < 7; i++) {
        if (!presente(dst, cont, t[i])) {
            aggiungi(dst, cont, 12, t[i]);
        }
    }

    for (int i = 0; i < cont; i++) {
        cout << dst[i] << " ";
    }
    cout << endl;
}

#include <iostream>
using namespace std;

void inverti(int v[], int t[], int n) {
    for (int i = 0; i < n; i++) {
        t[i] = v[n - 1 - i];
    }
}

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    int t[5];

    inverti(v, t, 5);

    for (int i = 0; i < 5; i++) {
        cout << t[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;
bool equipollenti(int a[], int n, int b[], int m) {
    if (n != m) return false;

    for (int i = 0; i < n; i++) {
        int countA = 0;
        int countB = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) countA++;
            if (a[i] == b[j]) countB++;
        }
        if (countA != countB) return false;
    }

    for (int i = 0; i < m; i++) {
        int countA = 0;
        int countB = 0;
        for (int j = 0; j < m; j++) {
            if (b[i] == b[j]) countB++;
            if (b[i] == a[j]) countA++;
        }
        if (countA != countB) return false;
    }

    return true;
}

int main() {
//ho messo gia' io i valori per evitare di rifare altri 2 for per rimettere i valori
    int v1[7] = {1, 2, 2, 3, 3, 3, 4};
    int v2[7] = {3, 2, 1, 3, 2, 3, 4};

    if (equipollenti(v1, 7, v2, 7))
        cout << "I vettori sono equipollenti"<< endl;
    else
        cout << "I vettori NON sono equipollenti"<<endl;

    return 0;
}

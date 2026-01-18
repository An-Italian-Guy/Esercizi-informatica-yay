#include <iostream>
using namespace std;

int moda(int v[], int n) {
    int valore_moda = v[0];
    int max_ripetizioni = 0;

    for (int i = 0; i < n; i++) {
        int contatore = 0;

        for (int j = 0; j < n; j++) {
            if (v[i] == v[j]) {
                contatore++;
            }
        }

        if (contatore > max_ripetizioni) {
            max_ripetizioni = contatore;
            valore_moda = v[i];
        }
    }

    return valore_moda;
}
int main (){

    int dim;
    cout << "quanto e' grande l'array?" << endl;
    cin >> dim;
    int v[dim];
    for (int i = 0; i < dim; i++) {
        cout << "inserisci i valori nell'array" << endl;
        cin >> v[i];
    }

    cout << "il valore piu' presente e': " << moda(v, dim) <<endl;

}
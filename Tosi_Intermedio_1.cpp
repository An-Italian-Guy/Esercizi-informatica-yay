#include <iostream>
using namespace std;

bool is_a_set(int v[], int n) {
    int unici[n];
    int size = 0;

    for (int i = 0; i < n; i++) {
        bool trovato = false;

        for (int j = 0; j < size; j++) {
            if (v[i] == unici[j]) {
                trovato = true;
            }
        }

        if (trovato) {
            return false;
        }

        unici[size] = v[i];
        size++;
    }

    return true;
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

if (is_a_set(v, dim)) {
cout << "gli elementi nell'array sono unici" << endl;
}else {
cout << "gli elementi nell'array non sono unici" << endl;
}

}

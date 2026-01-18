#include <iostream>
using namespace std;

void passoavanti(int v[], int n) {


    for (int i = n - 1; i > 0; i--) {
        v[i] = v[i - 1];
    }

    v[0] = 0;
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

    passoavanti(v, dim);
    for (int i = 0; i < dim; i++) {
        cout << v[i] << " ";}
    cout << endl;

}

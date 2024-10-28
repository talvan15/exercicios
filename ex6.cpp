#include <iostream>
using namespace std;

int maiores(int vet[], int tam, int x){
    int cont = 0;
    for(int i = 0; i < tam; i++){
        if (vet[i] > x)
        {
            cont++;
        }
        
    }

    return cont;
}

int main()
{
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tam = sizeof(vet) / sizeof(vet[0]);
    int x;
    cout << "Digite um numero entre 1 e 10: " << endl;
    cin >> x;

    int numeros_maiores = maiores(vet, tam, x );
    cout << "Existem " << numeros_maiores << " numeros maiores que " << x << " no vetor! " << endl;

    cout << endl;

    return 0;
}
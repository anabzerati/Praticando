/*Objetivo: encontrar a maior soma de elementos de um subconjunto de um array*/

/*Solução imediata: O(n^3)*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int maior = 0, n, array[n];

    for (int a = 0; a < n; a++) {
        for (int b = a; b < n; b++) { //a e b limitam os índices do array
            int soma = 0;
            for (int k = a; k <= b; k++) { //percorre o subarray buscando a maior soma
                soma += array[k];
            }
            maior = max(maior, soma);
        }
    }

    cout << maior << "\n";

    return 0;
}

/*O(n^2)*/
int main2(){
    int maior = 0, n, array[n];

    for (int a = 0; a < n; a++) {
        int soma = 0;
        for (int b = a; b < n; b++) { //enquanto delimita os índices, busca a maior soma
            soma += array[b];
            maior = max(maior, soma);
        }
    }

    cout << maior << "\n";

    return 0;
}

/*0(1)*/
int main3(){
    int maior = 0, n, array[n], soma = 0;

    for (int k = 0; k < n; k++) {
        soma = max(array[k], soma+array[k]); //subset só com array[k] ou com os anteriores + array[k]
        maior = max(maior, soma);
    }

    cout << maior << "\n";

    return 0;
}
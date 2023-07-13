//Objetivo: encontrar a menor quantidade de moedas para representar um valor

#include <bits/stdc++.h>
using namespace std;

//conjunto de moedas: {1,2,5,10,20,50,100,200} -> solução: pegar a maior
int calcula(int total, int conjunto[]){
    int quant = 0;
    int tam = sizeof(conjunto) / sizeof(int);

    for (int i = tam - 1; i >= 0; i --) //começamos pela maior moeda
        while (i <= total) { //enquato o valor for maior que a moeda
            total -= i;
            quant++;
        }

    cout << quant;
}

//problema: não funciona com qualquer conjunto e valor. Ex: conjunto {1, 3, 4} e valor 6 -> pegariamos {4, 1, 1} para resolver mas há solução menor {3, 3}
//solução: calcular a soma recursivamente se baseando em valores menores
//solve(x) = ∞ se x < 0, 0 se x = 0, e MINc∈coins solve(x− c)+1 se x > 0
//basicamente, verifica se vale mais a pena usar um valor i ou um j + 1
int calcula2(int total, int conjunto[]) {
    if (total < 0) 
        return 9999; //"infinito"

    if (total == 0) 
        return 0;

    int best = 9999;
    int tam = sizeof(conjunto) / sizeof(int);

    for (int i = 0; i < tam; i ++) {
        best = min(best, calcula(total - i, conjunto)+1); //pega menor das soluções para cada moeda do conjunto
    }

    return best;
} 

/*
The idea of dynamic programming is to use memoization to efficiently calculate values of a recursive function. This means that the values of the function are stored in an array after calculating them. 
For each parameter, the value of the function is calculated recursively only once, and after this, the value can be directly retrieved from the array.
*/
#define N 5
bool ready[N];
int value[N];

int calcula3(int total, int conjunto[]) {
    if (total < 0) 
        return 9999;
    if (total == 0) 
        return 0;
    if (ready[total]) //se já tiver calculado
        return value[total];

    int best = 9999;
    int tam = sizeof(conjunto) / sizeof(int);

    for (int i = 0; i < tam; i ++) {
        best = min(best, calcula3(total - i, conjunto)+1);
    }

    value[total] = best;
    ready[total] = true;

    return best;
}

//podemos construir o vetor de valores iterativamente também
int constroi(int total, int conjunto[]){
    int tam = sizeof(conjunto) / sizeof(int);
    int i;

    value[0] = 0;
    for (int x = 1; x <= N; x++) {
        value[x] = 9999;
        for (i = 0; i < tam; i ++) {
            if (x-i >= 0) {
                value[x] = min(value[x], value[x-i]+1);
            }
        }
    }
}

//OBS: contar número de soluções: Let solve(x) denote the number of ways we can form the sum x. For example, if coins = {1,3,4}, then solve(5) = 6 and the recursive formula is
//solve(x) = solve(x−1) + solve(x−3) + solve(x−4). (com condições x < 0 -> 0 e x == 0 -> 1 na recursão)

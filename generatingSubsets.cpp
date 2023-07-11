/*
Complete search is a general method that can be used to solve almost any algorithm problem. The idea is to generate all possible solutions to the problem
using brute force, and then select the best solution or count the number of solutions, depending on the problem.
*/

//Generating subsets
//n = tamanho total do set, subset = contem os elementos do subset
//A ideia é, para cada elemento do conjunto original, gerar um subset com e um sem ele
#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> subset;
void search(int k) {
    if (k == n) {
        // process subset
    } else {
        search(k+1); //buscamos sem k
        subset.push_back(k); //adicionamos k
        search(k+1); //buscamos com k agora
        subset.pop_back(); 
    }
}

/*
Another way to generate subsets is based on the bit representation of integers. Each subset of a set of n elements can be represented as a sequence of n bits,
which corresponds to an integer between 0...2^(n-1). The ones in the bit sequence indicate which elements are included in the subset.
For example, the bit representation of 25 is 11001, which corresponds to the subset {0,3,4}.

The following code goes through the subsets of a set of n elements
    for (int b = 0; b < (1<<n); b++) { // 1<< n = 1000... (n vezes 0)
        // process subset
    }

The following code shows how we can find the elements of a subset that corresponds to a bit sequence. When processing each subset, the code builds a
vector that contains the elements in the subset.
    for (int b = 0; b < (1<<n); b++) { //percorremos todos os subsets
        vector<int> subset;
        for (int i = 0; i < n; i++) { //percorremos todos os elementos do set
            if (b&(1<<i))   //elementos do subset b AND elemento i (1000 i vezes) = se o AND não for zero (ou seja, i está presente no subset b), adiciona
                subset.push_back(i);
        }
    }
*/

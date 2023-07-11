/*
The permutations of {0,1,2} are (0,1,2), (0,2,1), (1,0,2), (1,2,0), (2,0,1) and (2,1,0). Two approaches: use recursion or go through the permutations iteratively.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> permutation;
int n = 5, chosen[5];

void search() {
    if (permutation.size() == n) { //permutação já tem todos os elementos
        // process permutation
    } else {
        for (int i = 0; i < n; i++) {
            if (chosen[i]) 
                continue; //busca um número que ainda não está no conjunto de permutação
            chosen[i] = true; 
            permutation.push_back(i); //adiciona ele
            search(); //recursão -> busca os demais
            chosen[i] = false; 
            permutation.pop_back(); //tira ele 
        }
    }
}

/*
Another method for generating permutations is to begin with the permutation {0,1,...,n − 1} and repeatedly use a function that constructs the next permutation in increasing order. The C++ standard library contains the function
next_permutation that can be used for this:
*/
for (int i = 0; i < n; i++) {
    permutation.push_back(i);
}
do {
    // process permutation
} while (next_permutation(permutation.begin(),permutation.end())); //This function rearranges the elements into the next lexicographical greater permutation. 
                                                                   //For example, if you have the elements [1, 2, 3], the next greater lexicographical permutation will be [1, 3, 2].
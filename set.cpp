/*
Set = coleção de elementos, conjunto. Não possui elementos repetidos.
Operações básicas: inserção, busca e remoção.
The C++ standard library contains two set implementations: The structure set is based on a balanced binary tree and its operations work in O(logn) time.
The structure unordered_set uses hashing, and its operations work in O(1) time on average.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int> s; //ou unordered_set<int> s (não ordena em ordem crescente)

    s.insert(3);
    s.insert(2);
    s.insert(5);

    //count(x) - conta quantos elementos x tem no set (0 ou 1)
    cout << s.count(3) << "\n"; // 1
    cout << s.count(4) << "\n"; // 0

    s.erase(3); //remove 3
    s.insert(4); //insere 4

    cout << s.count(3) << "\n"; // 0
    cout << s.count(4) << "\n"; // 1

    
    cout << s.size() << "\n"; //imprime quantidade de elementos
    for (auto x : s) { //não é possível acessar elementos por um índice (como nos arrays/vectors)
        cout << x << "\n";
    }

    return 0;
}

/*
OBS: multiset: como um set, mas que permite múltiplas instâncias de um mesmo elemento
EX: multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    cout << s.count(5) << "\n"; // 3
    s.erase(5);
    cout << s.count(5) << "\n"; // 0 - apaga todos os elementos com esse valor

    s.erase(s.find(5));
    cout << s.count(5) << "\n"; // 2 - apaga apenas um dos elementos com esse valor
*/
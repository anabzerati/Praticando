/*
Vector - array dinâmico (tamanho pode ser alterado durante a execução)
Vectors use contiguous storage locations for their elements, which means that their elements can also be accessed using offsets on regular pointers to its elements, and just as 
efficiently as in arrays. But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.
*/

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    std::vector<int> v;

    v.push_back(3); // [3]
    v.push_back(2); // [3,2]
    v.push_back(5); // [3,2,5]

    cout << v[0] << "\n"; //acesso por índice normal

    //Para iterar sobre ele:
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    //OU
    for (auto x : v) {
        cout << x << "\n";
    }

    cout << v.back() << "\n"; // imprime último elemento (5)
    v.pop_back(); //remove último elemento
    cout << v.back() << "\n"; // 2

    return 0;
}
/*
Map = generalized array that consists of key-value-pairs. While the keys in an ordinary array are always the consecutive integers 0,1,...,n−1, where n is
the size of the array, the keys in a map can be of any data type and they do not have to be consecutive values.
The C++ standard library contains two map implementations: the structure map is based on a balanced binary treeand accessing elements takes O(logn) time, 
while the structure unordered_map uses hashing and accessing elements takes O(1) time on average.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> m;

    m["a"] = 4;
    m["b"] = 3;
    m["d"] = 9;

    cout << m["b"] << "\n"; // 3

    cout << m["c"] << "\n"; // não há m[c] - retorna 0

    if (m.count("a")) {
        // key exists
    }

    //para iterar sobre o map
    for (auto x : m) { 
        cout << x.first << " " << x.second << "\n"; //para imprimir par
    }

    return 0;
}
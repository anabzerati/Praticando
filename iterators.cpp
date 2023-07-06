/*
Iterator = variable that points to an element in a data structure. Begin (points to the first element) and End (points to the position after the last element) 
define a range that contains all elements in a data structure.
Used in C++ standard library functions that are given a range of elements in a data structure (to process all elements in a data structure, the iterators begin 
and end are given for the function).
*/

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    vector<int> v;

    sort(v.begin(), v.end()); //ordena elementos 
    reverse(v.begin(), v.end()); //inverte a ordem dos elementos
    random_shuffle(v.begin(), v.end()); //bagunça

    /*
        Para array normal:
        int n, a[n];
        sort(a, a+n); //ponteiro para primeira e última posição
        reverse(a, a+n);
        andom_shuffle(a, a+n);
    */

   set<int> s{1, 2, 3};
   set<int>::iterator it = s.begin(); //auto it = s.begin();

    cout << *it << "\n"; //* acessa o conteúdo do ponteiro

    //para iterar sobre os elementos
    for (auto it = s.begin(); it != s.end(); it++) { //pode-se usar ++ e -- para mover o iterador
        cout << *it << "\n";
    }

    it = s.end(); 
    it--;
    cout << *it << "é o último elemento do set\n"; //imprime maior elemento do set (último) - set ordenado

    //para buscar elemento no set
    int x = 10;
    it = s.find(x); //it aponta para a posição de x
    if (it == s.end()) { //s.end() = fora do set -> x não foi encontrado
        cout << x << " não é elemento do set\n";
    } else{
        cout << x << " é elemento do set\n";
    }

    return 0;
}

/*
OBS: The function lower_bound(x) returns an iterator to the smallest element in the set whose value is at least x, and the function upper_bound(x) returns an iterator
to the smallest element in the set whose value is larger than x. In both functions, if such an element does not exist, the return value is end.
*/
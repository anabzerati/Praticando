/*Para arrays ordenados -> binary search

OBS: lower_bound returns a pointer to the first array element whose value is at least x.
     Upper_bound returns a pointer to the first array element whose value is larger than x.
     Equal_range returns both above pointers.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    int array[n];

    auto k = lower_bound(array, array + n, x) - array; //busca x no array
    if (k < n && array[k] == x) {
        // x está no índice k
    }

    auto a = lower_bound(array, array + n, x); //primeira aparição
    auto b = upper_bound(array, array + n, x); //uma posição após a última aparição (primeiro número maior)
    cout << b - a << "\n"; //quantidade de elementos de valor x no array

    //outra maneira equivalente e mais curta:
    auto r = equal_range(array, array + n, x);
    cout << r.second - r.first << "\n";

    return 0;
}
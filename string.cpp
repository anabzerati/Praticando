/*
The string structure is also a dynamic array that can be used almost like a vector. In addition, there is special syntax for strings that is not available in
other data structures. Strings can be combined using the + symbol. The function substr(k, x) returns the substring that begins at position k and has length x, and
the function find(t) finds the position of the first occurrence of a substring t.
*/

#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    string a = "ana";
    string b = a+a; //concatena "ana" com "ana"

    cout << b << "\n"; 

    b[5] = 'v'; //anaana -> anaanv
    cout << b << "\n"; 
    
    string c = b.substr(3,2); //substring que começa na posiçãi 3 e tem tamanho 4
    cout << c << "\n"; 

    return 0;
}
/*
Bitset = array whose each value is either 0 or 1.
Vantagem sobre array normal: require less memory than ordinary arrays (each element in a bitset only uses one bit of memory). 
The values of a bitset can be efficiently manipulated using bit operators (optimize algorithms).
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    bitset<10> s;

    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;

    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0

    bitset<10> s2(string("0010011010")); // from right to left

    cout << s2[4] << "\n"; // 1
    cout << s2[5] << "\n"; // 0

    cout << s2.count() << "\n"; // 4

    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));

    cout << (a&b) << "\n"; // 0010010000 (and)
    cout << (a|b) << "\n"; // 1011111110 (or)
    cout << (a^b) << "\n"; // 1001101110 (xor)

    return 0;
}
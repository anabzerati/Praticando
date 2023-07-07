/*
Given two lists of size n, calculate the number of elements that belong in both of them
*/

#include <bits/stdc++.h>
#include <iterator>

using namespace std;

int main(){
    int i, j, count;
    i = j = count = 0;

    vector<int> v1{3, 4, 2, 1, 5};
    vector<int> v2{6, 8, 10, 2, 4};

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    while(i < v1.size() && j < v2.size()){
        if(v1[i] == v2[j]){
            count ++;
            i++;
            j++;
        } else{
            if(v1[i] > v2[j]){
                j++;
            } else{
                i++;
            }
        }
    }

    cout << count;

    return 0;
}

/*
OUTRA SOLUÇÃO:
    vector<int> intersection;

    set_intersection(
        v1.begin(), v1.end(),
        v2.begin(), v2.end(),
        back_inserter(intersection)
    );

    std::cout << intersection.size();
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int tam = 7; //tamanho do array
    int a[] = {4,2,5,3,5,8,3};
    sort(a,a+tam); //a.begin(), a.end() X a.rbegin(), a.rend() (decrescente)
 
    for(int i = 0; i < tam; i++){
        cout<< a[i] << " ";
    }

    string s = "monkey";
    sort(s.begin(), s.end());

    cout<< "\n" << s << "\n";

    vector<pair<int,int>> v; 
    v.push_back({1,5});
    v.push_back({2,3});
    v.push_back({1,2});
    sort(v.begin(), v.end()); //comparação: primeiro valor (caso sejam iguais, compara-se os segundos valores) - para tupla também 

    for(int i = 0; i < v.size(); i++){
        cout<< v[i].first << "," << v[i].second << "  ";
    }

    return 0;
}

/*
OBS: structs criadas não tem parâmtro de comparação, então deve-se defini-lo
struct P {
    int x, y;
    bool operator<(const P &p) { //retorna true se esse P for menor que o P passado como parâmetro
        if (x != p.x) return x < p.x; //se os inteiros x forem diferentes, retorna true se x é menor que o outro x
        else return y < p.y; //se forem iguais, retorna a comparação entre os inteiros y
    }
};

OU 
bool comp(string a, string b) {
    if (a.size() != b.size()) 
        return a.size() < b.size();
    return a < b;
}
sort(v.begin(), v.end(), comp); //definindo sua própria função de comparação e mandando como parâmetro
*/
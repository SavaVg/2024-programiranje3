#include<bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

void faktorisi(llu n, map<llu, int>& faktorizacija) {
    llu i=2;
    while (i*i<=n) {
            while (n%i==0) {
                faktorizacija[i]++;
                n /= i;
            }
            i++;
    }

    if (n!=1) faktorizacija[n]++;
}

int main(){
    llu n;
    cin >> n;

    map<llu, int> faktorizacija;
    faktorisi(n, faktorizacija);
    
    //ispis
    for (auto x: faktorizacija) {
        cout << x.first << ' ' << x.second << endl;
    }
}
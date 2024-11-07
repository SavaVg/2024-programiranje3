#include<bits/stdc++.h>

using namespace std;

vector<unsigned> sito;

void eratosten2(unsigned n){
    sito.resize(n+1);
    for (unsigned i=0; i<=n; i++) sito[i]=i;
    unsigned koren=sqrt(n);
    for (unsigned i=2; i<=koren; i++) {
        if(sito[i]==i){
            for(unsigned j=i*i; j<=n; j+=i){
                if(sito[j]==j) sito[j]=i;
            }
        }

    }
}

void rastavi(unsigned n, map<unsigned, unsigned>& rastav){
    while (n!=1) {
        rastav[sito[n]]++;
        n/=sito[n];
    }
}

int main(){
    eratosten2(100000000);
    unsigned ulaz;
    cin >> ulaz;
    map<unsigned, unsigned> rastav;
    rastavi(ulaz,rastav);
    for (auto x:rastav) cout << x.first << ": "<< x.second<<endl;
}

#include<bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

void faktorisi(llu a, map<llu,int>& fa){
    llu i=2;
    while (i*i <= a) {
        while (a%i==0) {
            fa[i]++;
            a /= i;
        }
        i++;
    }
    if (a!=1) fa[a]=1;
}

void nzd(map<llu, int>& fa, map<llu, int>& fb, map<llu, int>& fnzd){
    for (auto x: fa) if (fb[x.first]!=0) fnzd[x.first] = (fb[x.first]<=x.second ? fb[x.first] : x.second);
}

void nzs(map<llu, int>& fa, map<llu, int>& fb, map<llu, int>& fnzs){
    fnzs=fa;
    for (auto x: fb) if (x.second > fa[x.first])  fnzs[x.first] = x.second;
}

void ispisi(map<llu, int> m){
    for (auto x: m) cout << x.first << ' '<< x.second << endl;
}

int main(){
    llu n,m;
    cin >> n >> m;
    // pretpostavka je da si n i m veci od 0

    map<llu, int> fn;
    map<llu, int> fm;
    faktorisi(n, fn);
    faktorisi(m, fm);

    cout << "nzd\n";
    map<llu, int> fnzd;
    nzd(fn,fm,fnzd);
    ispisi(fnzd);

    cout << "nzs\n";
    map<llu, int> fnzs;
    nzs(fn,fm,fnzs);
    ispisi(fnzs);

}
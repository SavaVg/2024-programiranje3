#include<bits/stdc++.h>

using namespace std;

vector<unsigned> brojProstih;

void napraviSito1(unsigned n){
    brojProstih.resize(n+1,1);
    brojProstih[0]=0;
    brojProstih[1]=0;
    unsigned korenN= sqrt(n);
    for(unsigned i=2; i<=korenN;i++)
        if (brojProstih[i]==1)
         for(unsigned k=i*i;k<=n;k+=i) brojProstih[k]=0;

    for(unsigned i=2; i<=n; i++) brojProstih[i]+=brojProstih[i-1];
}

void ispisiProste1(){
    for(unsigned i=2; i<brojProstih.size();i++){
        if (brojProstih[i]!= brojProstih[i-1]) cout << i << " ";
    }
}

int main(){
    unsigned n;
    cin >> n;
    napraviSito1(n);
    ispisiProste1();
}

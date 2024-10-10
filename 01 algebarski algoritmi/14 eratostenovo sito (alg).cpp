#include<bits/stdc++.h>

using namespace std;

vector<bool> prosti;

void napraviSito(unsigned n){
    prosti.resize(n+1,true);
    prosti[0]=false;
    prosti[1]=false;
    unsigned korenN= sqrt(n);
    for(unsigned i=2; i<=korenN;i++)
        if (prosti[i])
         for(unsigned k=i*i;k<=n;k+=i) prosti[k]=false;
}

void ispisiProste(){
    for(unsigned i=0; i<prosti.size();i++){
        if (prosti[i]) cout << i << " ";
    }
}

int main(){
    unsigned n;
    cin >> n;
    napraviSito(n);
    ispisiProste();
}

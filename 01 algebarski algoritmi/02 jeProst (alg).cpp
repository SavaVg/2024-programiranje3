#include<bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

bool jeProst(llu n){
    if (n==2) return true;
    if(n==1 || n%2==0) return false;
    llu i=3;
    while(i*i<=n) {
        if (n%i==0) returne false;
        i+=2;
    }
    return true;
}

int main(){
    llu n;
    cin >> n;

    llu i=1;
    /*sporo
    while (i<=n) {
        if (n%i==0) cout << i << endl;
        i++;
    }
    */
    while (i*i<n) {
         cout << i << " " << n/i << endl;
        i++;
    }
    if (i*i==n) cout << i <<endl;
}










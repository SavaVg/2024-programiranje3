#include<bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

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
        if (n%i==0) cout << i << " " << n/i << endl;
        i++;
    }
    if (i*i==n) cout << i <<endl;
}










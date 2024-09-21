#include<bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

void faktorizacija(llu n) {
    llu i=2;
    while (n%i==0) {
        cout << i << " ";
        n /= i;
    }
    i++;
    while (i*i<=n) {
            while (n%i==0) {
                cout << i << " ";
                n /= i;
            }
            i+=2;
    }

    if (n!=1) cout << n;
}

int main(){
    llu n;
    cin >> n;

    faktorizacija(n);

}







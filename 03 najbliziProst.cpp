#include<bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

bool jeProst(llu n){
    if (n==2) return true;
    if(n==1 || n%2==0) return false;
    llu i=3;
    while(i*i<=n) {
        if (n%i==0) return false;
        i+=2;
    }
    return true;
}

int main(){
    llu n;
    cin >> n;

    if (n==1) {
            cout << "veci broj " << 2 << endl;
            return 0;
    }
    if (jeProst(n)) {
            cout << "prost broj "<< n<<endl;
            return 0;
    }

    llu manji= n-1;
    llu veci=n+1;

    
    while (true) {
        bool flagM=jeProst(manji);
        bool flagV=jeProst(veci);
        if (flagM && flagV) {
            cout << "dva broja "<< manji << " " << veci <<endl;
            return 0;
        }
        if (flagM) {
            cout << "manji broj "<< manji << endl;
            return 0;
        }
        if (flagV) {
            cout << "veci broj "<< veci << endl;
            return 0;
        }
        manji--;
        veci++;

    }
}


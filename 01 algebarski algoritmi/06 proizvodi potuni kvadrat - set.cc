#include<bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

int main(){
    llu n;
    cin >> n;

    set<llu> skup;

    for(int i=1; i<=n; i++) {
        llu ulaz;
        cin >> ulaz;
        llu k=2;
        while (k*k <= ulaz) {
            llu br=0;
            while (ulaz%k==0) {
                br++;
                ulaz /= k;
            }
            if (br%2 == 1) {
                if (skup.count(k)==1) skup.erase(k);
                else skup.insert(k);
            }

            k++;
        }
        if(ulaz!=1) {
            if (skup.count(ulaz)==1) skup.erase(ulaz);
            else skup.insert(ulaz);
        }

        if (skup.empty()) cout << "da\n";
        else cout << "ne\n";

    }

}







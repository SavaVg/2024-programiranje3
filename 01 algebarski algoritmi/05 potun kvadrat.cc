#include<bits/stdc++.h>

using namespace std;

typedef long long unsigned llu;

int main(){
    llu n;
    cin >> n;

    llu rez=1;

    llu i=2;
    llu br=0;
    while (n%i==0) {
        br++;
        n /= i;
    }
    if (br%2==1) rez *= i;

    i++;
    while (i*i<=n) {
            br=0;
            while (n%i==0) {
                br++;
                n /= i;
            }
            if (br%2==1) rez *= i;

            i+=2;
    }

    rez *= n;

    cout << rez << endl;

}







//https://www.petlja.org/sr-Latn-RS/biblioteka/r/Zbirka3/eratostenovo_sito
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000

vector<bool> prosti;

void napraviSito(int n){
    prosti.resize(n+1,true);
    prosti[0]=false;
    prosti[1]=false;
    int korenn=sqrt(n);
    for(int i=2;i*i<=n;i++)
        if(prosti[i])
            for(int j=i*i;j<=n;j+=i)
                prosti[j]=false;
}

int main(){
    unsigned a,b;
    cin >> a >> b;
    napraviSito(b);
    unsigned br=0;
    unsigned s=0;
    for(int i=a; i<=b; i++){
        if(prosti[i]){
            br++;
            s=(s+i)%MAX;
        }
    }
    cout << br << " " << s << endl;
}

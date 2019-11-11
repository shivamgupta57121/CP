#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

void soe(int n){
    //arr[100]
    vector <int> arr(n+1,0); //all to 0
    //cross means 1
    for(int i=2;i*i<=n;i++){
        if(arr[i]==0){
            for(int j=i*i;j<=n;j+=i){
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==0) cout<<i<<endl;
    }
}
int main(){
    int n=100;
    /*
    for(int i=2;i<=n;i++){
        if(isPrime(i))
            cout<<i<<endl;
    }
    */
    soe(n);
    return 0;
}

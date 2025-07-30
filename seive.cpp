#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
bool isPrime[n+1];
for(int i=0;i<=n;i++){
    isPrime[i]  =true;
}
isPrime[0] , isPrime[1] = false;
for(int i=2;i*i<=n;i++){
    if(isPrime[i])
    for(int j=i*i;j<=n;j+=i){
        isPrime[j] = false;
    }
}
cout<<  "all prime numbers are: ";
for(int i=2; i<=n;i++){
    if(isPrime){
        cout<<i<<" ";
    }
}




}

   


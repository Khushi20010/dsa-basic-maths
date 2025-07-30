#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    int gcd = 1;
int smaller = (a<b)?a:b;
for(int i=1;i<=smaller;i++){
    if(a%i==0 && b%i==0){
        gcd  =i;
    }
}
int lcm = (a*b)/gcd;
cout<<"lcm "<< lcm<<endl;
cout<<"gcd "<< gcd<<endl;
}
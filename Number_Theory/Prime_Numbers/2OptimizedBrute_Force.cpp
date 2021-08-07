// Print all  prime numbers less than n 

#include<bits/stdc++.h>
using namespace std; 
bool isPrime(int x){
    if(x==1)
    return false; 
 for(int i = 2;i*i<=x;i++)
 {
    if(x%i==0)
    return false; 
 }
 return true; 
}
void BruteForce(int n ){
    // it will take o(n*sqrt(n))
    for(int i = 2; i<n;i++){
       if(isPrime(i)==true)
       cout<<i<<" ";   
    }
}
int main(){
 int  n ; 
 cin>>n; 
 BruteForce(n); 
}
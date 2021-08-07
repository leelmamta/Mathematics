#include<bits/stdc++.h>
using namespace std; 
// in prime seive we create an array upto a range and start marking 

void prime_seive(int *p){
// first mark all odd number's prime 
for(long long  i = 3;i<=1000000;i+=2){
    p[i]=1; 
}
// seive 
for(long long  i=3; i<=1000000;i+=2){
    // if current number is not marked (it is prime )
    if(p[i]==1){
        // mark all the multiples of i as not prime 
        for(long long  j = i*i; j<=1000000;j+=i){
            p[j] = 0; 
        }
    }
}
// special cases 
p[2] = 1; 
p[0] = 0 ; 
p[1] = 0 ; 
}
int main(){
    int n ; 
    cin>>n; 
    int p[1000005]= {0}; 
    prime_seive(p); 
    for(int i =0 ; i<=n;i++){
        if(p[i]==1){
            cout<<i<<" "; 
        }
    }
}
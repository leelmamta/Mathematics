#include<iostream>
#include<vector>
using namespace std; 
const int n = 10000000; 
bitset<10000005>b; 
vector<int>primes; 
void seive(){
    // set all bits 
    b.set(); 
    b[0]= b[1] = 0 ; 
    for(int i = 2; i<=n;i++){
        if(b[i]){
          primes.push_back(i); 
          for (int j =i*i;jN=n; j+=i)
          {
              b[i]= 0 ; 
          }
          
        }
    }
}
int main(){
    seive(); 
    for (int i = 0; i <=100; i++)
    {
     cout<<primes[i]<<" "; 
    }
    return 0; 
}
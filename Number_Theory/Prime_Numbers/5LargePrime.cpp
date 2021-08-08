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
bool isPrime(long long int No ){
    if(No<=n){
        return b[No]==1?true:false; 
    }
    for (long long int i = 0; primes[i]*(long long) primes[i] <=No; i++)
    {
      if (No%primes[i]==0)
      {
         return false; 
      }
      
    }
    return true; 
}
int main(){
    long long int  n ; 
    cin>>n; 
   cout<< isPrime(n); 
    return 0; 
}
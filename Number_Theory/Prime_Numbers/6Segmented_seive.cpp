#include<iostream>
#include<vector>
using namespace std; 
const int N = 100000; 
vector<int>primes; 
int p[N] = {0};
void seive(){
    for(int i = 2; i<=N;i++){
        if(p[i]==0){
            primes.push_back(i); 
            for (int j = i; j<=N;j+=i)
            {
               p[j]= 1; 
            }
            
        }
    }
}
int main(){
    seive(); 
    int t; 
    cin>>t; 
    while (t--)
    {
       int n , m; 
       cin>>m>>n; 
       bool segment[n-m+1]; 
       for (int i = 0; i <n-m+1; i++)
       {
           segment[i]= 0 ; 
       }
       // here segment seive logic 
       for ( auto x: primes)
       {
           if (x*x>n)
           {
               break; 
           }
           int start = (m/x)*x; 
           // primes no use in the segment seive 
           if (x>=m&&x<=n)
           {
              start = x*2; 
           }
           
           // mark all multiples of x , m in the range start to n as not primes 
           for (int  i = start; i <=n; i+=x)
           {
              segment[i-m] = 1; 
           }
           // loop over range m ..n and print the primes 
           
           
       }
        for (int  i = m; i <=n; i++)
           {
              if (segment[i-m]==0 and i!=1)
              {
               cout<<i<<endl; 
              }
              
           }
           cout<<endl; 
       
    }
    
}
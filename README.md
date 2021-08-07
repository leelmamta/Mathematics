# Mathematics
## Number Theory 
### Prime Number 
 - Brute - force way - Simply checking if with  a loop from 2..... n-1 and printing it will take o(n) time in cheking 1 element and take o(n^2) for printing n prime numbers 
 - Optimized way - Here is a trick we will use if a number is not prime it means it is of form a*b= n . so Now a and b both can't be greater than sqrt(n) , Therefore, min(a,b)<=sqrt(n) . o(n*sqrt(n)) 
 - Prime seive - > a[n] = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20] are the numbers less than 21. Let's understand seive with example 
      -  create an array fill all the elements with 0 
      - leave first element bz it not prime , and from 2 print 2  and mark all the multiples of 2 as visited 
      - if the element is visited skip it else if not visited print it and mark all the multiples of that element as visited 
 
 - best optimized prime seive - mark all the even numbers as visited and handle base case for 2 , now we need to check for odd numbers only 
                                for that we will apply seive algorithm
                                
Best way to use seive is p , p^2+p , p^2+2p , p^2+3p ........

                                



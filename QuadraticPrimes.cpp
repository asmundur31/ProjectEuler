#include<iostream>
using namespace std;

int isPrime(int n) {
  if(n<=1) 
    return false; 
  if(n<=3) 
    return true; 
  if(n%2==0 || n%3==0) 
    return false; 
  for(int i=5; i*i<=n; i=i+6) 
    if(n%i==0 || n%(i+2)==0) 
      return false; 
  return true; 
}

int main() {
  int a,b;
  int max=0;
  for(int i=-999; i<1000; i++) {
    for(int j=-1000; j<1000; j++) {
      int k = 0;
      int count = 0;
      while(isPrime(k*k+i*k+j)) {
        count++;
        k++;
      }
      if(count>max) {
        max = count;
        a=i;
        b=j;
      }
    }
  }
  cout << "fjöldi frumtalna: " << max << endl;
  cout << "a " << a << endl;
  cout << "b " << b << endl; 
  cout << "margfeldi " << a*b << endl;
}
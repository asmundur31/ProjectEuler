#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
long double totient(ll n){
  double sum=n;
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      while(n%i==0)n/=i;
      sum=sum-sum/i;
    }
  }
  if(n>1) sum=sum-sum/n;
  return sum;
}
vector<int> eratosthenes(ll n) {
  vector<bool> res(n + 1, true);
  vector<int> primes(n+1);
  for(int i=0; i<=n; i++) primes[i]=i;
  res[0] = res[1] = false;
  primes[0]=primes[1]=0;
  for(ll i = 2; i * i <= n; ++i) {
    if(res[i]) {
      for(ll j = i * i; j <= n; j += i) {
        res[j] = false;
        primes[j]=0;
      }
    }
  }
  return primes;
}
int main(){
  double min=15499.0/94744;
  vector<int> primes = eratosthenes(40);
  ll n=1;
  int lastprime;
  for(int i=0; i<40; i++){
    if(primes[i]){
      n*=primes[i];
      lastprime=primes[i];
    }
    if(totient(n)/(n-1)<min) break;
  }
  n/=lastprime;
  int svar=n;
  for(int i=1; ; i++){
    svar=n*i;
    if(totient(svar)/(svar-1)<min){
      cout<<svar<<"\n";
      break;
    }
  }
}

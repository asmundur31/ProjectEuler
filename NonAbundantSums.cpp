#include<iostream>
#include<vector>
using namespace std;

vector<long> abunt;

long divSum(long n) {
  long sum = 0;
  for(long i=1; i<=n/2; i++) {
    if(n%i==0) sum+=i;
  }
  return sum;
}

void findAbunt(long n) {
  for(long i=12; i<=n; i++) {
    if(divSum(i)>i) abunt.push_back(i);
  }
}

int main() {
  int n = 28123;
  findAbunt(n);
  long sum = n*(n+1)/2;
  vector<int> getBuidTil(n+1,0);
  for(int i=0; i<abunt.size(); i++) {
    for(int j=i; j<abunt.size(); j++) {
      if(abunt[i]+abunt[j]<=n) getBuidTil[abunt[i]+abunt[j]]=1;
    }
  }
  long dragaFra = 0;
  for(int i=0; i<n+1; i++) {
    if(getBuidTil[i]) dragaFra += i;
  }
  cout << sum-dragaFra << endl;
}
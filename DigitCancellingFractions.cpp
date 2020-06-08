#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

double epsilon = 0.0000000001;

long long gcd(long long a, long long b) {
  if(b==0) return a;
  return gcd(b,a%b);
}

int main() {
  vector< pair<int,int> > brot;
  for(int a=1; a<10; a++) {
    for(int b=1; b<10; b++) {
      double gildi = 9*a*b/(10*b-a);
      if(gildi<10 && abs(gildi-round(gildi))<epsilon && (gildi*10+a)/(10*b+gildi)<1) {
        if(abs((gildi*10+a)/(10*b+gildi)-1.0*a/b)<epsilon) brot.push_back(make_pair(gildi*10+a,10*b+gildi));
      }
      gildi = 9*a*b/(10*a-b);
      if(gildi<10 && abs(gildi-round(gildi))<epsilon && (a*10+gildi)/(10*gildi+b)<1) {
        if(abs((a*10+gildi)/(10*gildi+b)-1.0*a/b)<epsilon) brot.push_back(make_pair(a*10+gildi,10*gildi+b));
      }
    }
  }
  for(int i=0; i<brot.size(); i++) {
    cout << brot[i].first << "/" << brot[i].second << endl;
  }
  long long tel = 1;
  long long nef = 1;
  for(int i=0; i<brot.size(); i++) {
    tel *= brot[i].first;
    nef *= brot[i].second;
  }
  long long g = gcd(tel,nef);
  tel /= g;
  nef /= g;
  cout << tel << "/" << nef << endl;
}
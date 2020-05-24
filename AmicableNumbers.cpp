#include<iostream>
using namespace std;
int d(int n){
  int sum=0;
  for(int i=1; i<n; i++){
    if(n%i==0) sum+=i;
  }
  return sum;
}
int main(){
  int sum=0;
  for(int i=1; i<10000; i++){
    int a=d(i);
    if(d(a)==i){
      if(i!=a){
        cout<<i<<" og "<<a<<"\n";
        sum+=i+a;
      }
    }
  }
  cout<<sum/2<<"\n";
}

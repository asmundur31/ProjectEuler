#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int d(int n){
  int count=0;
  int i=2;
  vector<bool> buin(n,false);
  while(i<=n){
    if(n%i==0 && !buin[i]){
      buin[i]=true;
      count++;
      n/=i;
      i=2;
    }
    else if(n%i==0 && buin[i]){
      n/=i;
      i=2;
    }
    else i++;
  }
  return count;
}
int main(){
  for(int i=100000; i<1000000; i++){
    if(d(i)==4 && d(i+1)==4 && d(i+2)==4 && d(i+3)==4){
      cout<<i<<"\n";
    }
  }
}

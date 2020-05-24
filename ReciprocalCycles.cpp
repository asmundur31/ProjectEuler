#include<iostream>
#include<vector>
using namespace std;
int lota(int n){
  vector<bool> sed(n,false);
  int a=1;
  int count=1;
  while(true){
    a=(10*a)%n;
    if(sed[a]) return count;
    else{
      count++;
      sed[a]=true;
    }
  }
}
int main(){
  int max=0;
  int k=0;
  for(int i=1; i<1000; i++){
    int p=lota(i);
    if(p>max){
      max=p;
      k=i;
    }
  }
  cout<<k<<" með lengd "<<max<<"\n";
}

#include<iostream>
#include<map>
using namespace std;
int stafir(int n){
  map<int,int> ord;
  ord.insert(pair<int,int>(1,3));
  ord.insert(pair<int,int>(2,3));
  ord.insert(pair<int,int>(3,5));
  ord.insert(pair<int,int>(4,4));
  ord.insert(pair<int,int>(5,4));
  ord.insert(pair<int,int>(6,3));
  ord.insert(pair<int,int>(7,5));
  ord.insert(pair<int,int>(8,5));
  ord.insert(pair<int,int>(9,4));
  ord.insert(pair<int,int>(10,3));
  ord.insert(pair<int,int>(11,6));
  ord.insert(pair<int,int>(12,6));
  ord.insert(pair<int,int>(13,8));
  ord.insert(pair<int,int>(14,8));
  ord.insert(pair<int,int>(15,7));
  ord.insert(pair<int,int>(16,7));
  ord.insert(pair<int,int>(17,9));
  ord.insert(pair<int,int>(18,8));
  ord.insert(pair<int,int>(19,8));
  ord.insert(pair<int,int>(20,6));
  ord.insert(pair<int,int>(30,6));
  ord.insert(pair<int,int>(40,5));
  ord.insert(pair<int,int>(50,5));
  ord.insert(pair<int,int>(60,5));
  ord.insert(pair<int,int>(70,7));
  ord.insert(pair<int,int>(80,6));
  ord.insert(pair<int,int>(90,6));
  int sum=0;
  if(n>99 && n%100!=0){
    sum+=10; //and og hundred bætt við
    sum+=ord[n/100]; //hundruð
    if(n%100<20) sum+=ord[n%100];
    else{
      if(n%10!=0){
        sum+=ord[n%10]; //eining
        n-=n%10;
      }
      sum+=ord[n%100]; //tugir
    }
  }
  else if(n%100==0){
    sum+=ord[n/100]+7;
  }
  else if(n>19){
    if(n%10!=0){
      sum+=ord[n%10]; //eining
      n-=n%10;
    }
    sum+=ord[n%100]; //tugir
  }
  else{
    sum+=ord[n];
  }
  return sum;
}
int main(){
  int sum=0;
  for(int i=1; i<1000; i++){
    sum+=stafir(i);
  }
  sum+=11; //one thousand bætt við
  cout<<sum<<"\n";

}

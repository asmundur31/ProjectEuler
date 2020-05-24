#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
  string tala[100];
  for(int i=0; i<100; i++) cin>>tala[i];
  stack<int> svar;
  int carry=0;
  int sum;
  for(int i=49; i>=0; i--){
    sum=carry;
    for(int j=0; j<100; j++) sum+=tala[j][i]-'0';
    carry=sum/10;
    if(i==0) svar.push(sum);
    else svar.push(sum%10);
  }
  for(int i=0; i<=svar.size(); i++){
    cout<<svar.top();
    svar.pop();
  }
  cout<<"\n";
}

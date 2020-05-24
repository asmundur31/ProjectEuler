#include<iostream>
#include<string>
using namespace std;

int main(){
  string s="";
  int i=1;
  while(s.length()<1000000){
    s+=to_string(i);
    i++;
  }
  int sum=1;
  for(int i=1; i<1000001; i*=10) sum*=(s[i-1]-'0');
  cout<<s[0]<<" "<<s[9]<<" "<<s[99]<<" "<<s[999]<<" "<<s[9999]<<" "<<s[99999]<<" "<<s[999999]<<"\n";
  cout<<sum<<"\n";
}

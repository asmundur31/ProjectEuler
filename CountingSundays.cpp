#include<iostream>
using namespace std;
int main(){
  int vikudagur=2;
  int manudur[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int ar=1901;
  int count=0;
  int svar=0;
  while(ar<2001){
    //Er hlaupár og feb
    if(count==1 && ((ar%4==0 && ar%400==0) || (ar%4==0 && ar%100!=0))){
      vikudagur+=(manudur[count]+1)%7;
    }
    else{
      vikudagur+=manudur[count]%7;
    }
    vikudagur%=7;
    if(vikudagur==6) svar++;
    count++;
    if(count==12){
      count=0;
      ar++;
    }
  }
  cout<<svar<<"\n";
}

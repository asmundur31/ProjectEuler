#include<iostream>
using namespace std;
int main(){
  int bord[20][20];
  for(int i=0; i<20; i++){
    for(int j=0; j<20; j++){
      cin>>bord[i][j];
    }
  }
  long max=0;
  long sum=1;
  int count=0;
  for(int i=0; i<20; i++){
    for(int j=0; j<20; j++){
      //beint niður
      int k=0;
      sum=1;
      count=1;
      while(i+k<20){
        sum*=bord[i+k][j];
        if(count==4){
           if(max<sum){
             cout<<i<<" "<<j<<" niður\n";
             max=sum;
           }
           break;
        }
        count++;
        k++;
      }
      //til hægri
      k=0;
      sum=1;
      count=1;
      while(j+k<20){
        sum*=bord[i][j+k];
        if(count==4){
           if(max<sum){
             cout<<i<<" "<<j<<" til hægri\n";
             max=sum;
           }
           break;
        }
        count++;
        k++;
      }
      //ská niður til hægri
      k=0;
      sum=1;
      count=1;
      while(j+k<20 && i+k<20){
        sum*=bord[i+k][j+k];
        if(count==4){
           if(max<sum){
             cout<<i<<" "<<j<<" ská til hægri\n";
             max=sum;
           }
           break;
        }
        count++;
        k++;
      }
      //ská niður til vinstri
      k=0;
      sum=1;
      count=1;
      while(j-k>0 && i+k<20){
        sum*=bord[i+k][j-k];
        if(count==4){
           if(max<sum){
             cout<<i<<" "<<j<<" ská til vinstri\n";
             max=sum;
           }
           break;
        }
        count++;
        k++;
      }
    }
  }
  cout<<max<<"\n";
}

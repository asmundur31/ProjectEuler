#include<iostream>
#include<vector>
using namespace std;

int main() {
  int peningar[] = {1,2,5,10,20,50,100,200};
  vector<int> moguleikar(201,0);
  for(int i=0; i<201; i++) {
    moguleikar[i] = 1;
  }
  for(int i=1; i<8; i++) {
    for(int j=peningar[i]; j<201; j++) {
      moguleikar[j] += moguleikar[j-peningar[i]];
    }
  }
  cout<<moguleikar[200]<<endl;
}

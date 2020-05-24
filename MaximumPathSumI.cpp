#include<iostream>
#include<vector>
#include<queue>
#include<cfloat>
#include<algorithm>
using namespace std;
typedef vector<int> vi;
typedef pair<double,int> di;
typedef vector<di> vdi;
typedef vector<vdi> vvdi;
typedef vector<double> vd;
double dijkstra(vvdi& g, int a, int b){
  vd dist(g.size(), 0);
  priority_queue<di> pq;
  dist[a] = 0;
  pq.push(di(0, a));
  while(!pq.empty()) {
    auto t = pq.top();
    pq.pop();
    if(t.first != dist[t.second]) continue;
    for(di x : g[t.second]) {
      if(dist[t.second] + x.first > dist[x.second]) {
        dist[x.second] = dist[t.second] + x.first;
        pq.push(di(dist[x.second], x.second));
      }
    }
  }
  return dist[b];
}
int main(){
  int linur=100;
  int n=linur*(linur+1)/2+2;
  double w;
  vvdi g(n, vdi());
  int count=0;
  int tel=1;
  int foreldri=1;
  for(int i = 0; i <= linur; i++) {
    for(int j=0; j<i; j++){
      cin >> w;
      if(j==0 || j==i-1){
        g[count].push_back(di(w, foreldri));
        foreldri++;
        tel++;
        if(tel%2==0) count++;
      }
      else{
        g[count].push_back(di(w, foreldri));
        g[count+1].push_back(di(w, foreldri));
        count++;
        foreldri++;
      }
    }
  }
  for(int i=0; i<linur; i++){
    g[count++].push_back(di(0, n-1));
  }
  auto res = dijkstra(g, 0, n - 1);
  cout << res << "\n";
}

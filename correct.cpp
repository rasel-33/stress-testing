#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; 
  cin >> n;
  vector<int> vt(n);
  for(int i=0;i<n;i++){
    cin >> vt[i];
  }
  sort(vt.begin(), vt.end());
  cout << vt[n-2] << endl;
  return 0;
}
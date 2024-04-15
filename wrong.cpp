#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int ar[n+1];
  for(int i=1;i<=n;i++){
    cin >> ar[i];
  }
  sort(ar, ar+n+1);
  cout << ar[n-1] << endl;
  return 0;
}
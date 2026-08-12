#include <bits/stdc++.h>
 
#define F first
#define S second
#define pb push_back
#define pf push_front
#define popf pop_front
#define popb pop_back
#define MOD 1000000007
#define MOD2 998244353
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pi pair<int,int>
 
using namespace std;
#define ll long long
int const MAX5 = 100000, MAX6 = 1000000, MAXN = 1000000000;
const int INF = 1000000000;
const int MAXB = 8005;
int n;
 
//printf("%.10lf\n",ans);
//cout<<fixed<<setprecision(20)<<ans<<endl;
//stoll string -> long long

void solve(){
  string s; cin >> s;
  string res = "";
  int n = s.length();
  bool seen1 = false, seen0 = false;
  for(int i = 0; i < n; i++){
    if(!seen1 && s[i] == '1') seen1 = true;
    else if(!seen0 && s[i] == '0') seen0 = true;
    else res.pb(s[i]);
  }   
  cout << res << endl;
}
 
int main(){
  // in & out files
  /*
  freopen("outofplace.in", "r", stdin);
  freopen("outofplace.out", "w", stdout);
*/
  // fast and furious io
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

// testcases
  int t = 1;  cin >> t;
  while(t--){
    solve();
  }
  return 0;
 
}

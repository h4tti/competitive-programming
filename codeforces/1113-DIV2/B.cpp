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
  int n, m; cin >> n >> m;
  int a[n], b[m];
  vector<pair<int,int>> ab(n+m);

  for(int i = 0; i < n; i++) cin >> a[i];//, ab.pb({a[i], 0});
  for(int i = 0; i < m; i++) cin >> b[i];//, ab.pb({b[i], 1});

  // sort(ab.begin(), ab.end());
  sort(a, a+n);
  sort(b, b+m);
  if(2*m > n){
    cout << "NO" << endl;
    return;
  }

  int i = 0;
	while (i < m && a[i] < b[i] && b[i] < a[n - m + i]) ++i;

  cout << ((i < m) ? "No" : "Yes") << endl; 

  // bool ok = (ab[0].S == 0);
  // for(int i  = 1; i < n+m; i++){
  //   if(ab[i].S == ab[i-1].S){
  //     cout << "NO" << endl;
  //     return;
  //   }
  // }

  // cout << (ok ? "YES" : "No") << endl;



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

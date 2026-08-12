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
    int n; cin >> n;
    vector<int> a(2*n + 1);
    pair<ll,ll> occ[2 * MAX5 + 20] = {}; // first/second occurence
    for(int i = 1; i <= 2*n; i++){
        cin >> a[i];
        if(occ[a[i]].F == 0) occ[a[i]].F = i;
        else occ[a[i]].S = i;
    }

    vector<ll> dp(2*n + 1, 0);

    dp[1] = 1;
    for(ll i = 2; i <= 2*n; i++){
        dp[i] = dp[i-1] + 1;
        if(occ[a[i]].F == i){
            dp[i] = dp[i-1] + 1;
        } else {
            if(occ[a[i]].F == 0) dp[i] = max(i*i, dp[i]);
            else dp[i] = max(dp[i], dp[occ[a[i]].F - 1] + (occ[a[i]].S - occ[a[i]].F + 1) * (occ[a[i]].S - occ[a[i]].F + 1));
        }
    }
    cout << dp[2*n] << endl;
    /*

    Hint 1:
        - assume between 2 occurences is a, inside 2 other ones distanced by b
        if we suppress inside ones first then score inceases by a^2 then (b-a)^2
        otherwise its b^2 but b^2 >= a^2 + (b-a)^2 so it s better (we end up in the same position after)
    



    */

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

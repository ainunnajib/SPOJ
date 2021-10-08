#include <iostream>
#include <map>
using namespace std;
typedef long long ll;

map<ll,ll> x;
map<ll,ll> y;
ll n, i, j, k, lhs, rhs;

int main(){
    cin >> n;
    ll l[n];
    for(i=0;i<n;i++) cin >> l[i];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                // ab + c = d(e+f)
                lhs = l[i]*l[j] + l[k];
                x[lhs]++;
                rhs = l[i]*(l[j] + l[k]);
                if(l[i]) y[rhs]++;
            }
        }
    }
    ll ans = 0;
    for(auto it : x) {
    	ans += x[it.first]*y[it.first];
    }
    cout << ans << endl;
}
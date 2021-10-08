#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int t, n, c, x[100005];

bool check(int d){
    int cur = x[0], pos;
    for (int i=0;i<c-1;i++){
        pos = lower_bound(x, x+n, cur+d) - x;
        if(pos<n) cur = x[pos];
        else return false;
    }
    return true;
}

int main(){
    cin >> t;
    while(t--){
        cin >> n >> c;
        memset(x, 0, sizeof(int));
        for(int i=0;i<n;i++) cin >> x[i];
        sort(x, x+n);

        int lo=0, hi=x[n-1]/(c-1)+1, mid;
        while(lo<hi-1){
            mid = lo + (hi-lo)/2;
            if(check(mid)) lo = mid;
            else hi = mid;
        }
        cout << lo << endl;
    }
}
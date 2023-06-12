#include <bits/stdc++.h>

using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

#define PI 3.1415926535897932384626433832795l 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


void solve() {
    ll x;
    cin>>x;
    if(x==1){
        cout<<"-1"<<endl;
        return;
    }
    if(x==2){
        cout<<"1 1 1"<<endl;
        return;
    }
    if(x==3){
        cout<<"2 1 1"<<endl;
        return;
    }
    /*if(x%2==0){
        cout<<x/2<<" 1 "<<(x/2)-1<<endl;
        return;
    }
    cout<<x/2<<" 1 "<<x/2 <<endl;*/
    if(x<=1000000){
        cout<<"1 1 "<<x-1<<endl;
        return;
    }
    if(x%1000000==0){
        cout<<(x/1000000)-1<<" "<<1000000<<" "<<1000000<<endl;
        return;
    }
    cout<<(x/1000000)<<" "<<1000000<<" "<<x%1000000<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}

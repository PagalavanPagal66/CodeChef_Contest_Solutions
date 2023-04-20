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
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<"Ramos"<<endl;
        return;
    }
    int ocnt=0,zcnt=0;
    for(auto i:s){
        if(i=='0')zcnt++;
        else ocnt++;
    }
    int t=min(ocnt,zcnt);
    if(t%2==0){
        cout<<"Ramos"<<endl;
        return;
    }
    cout<<"Zlatan"<<endl;
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

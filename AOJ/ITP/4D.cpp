#include <iostream>
#include <algorithm>
#include <numeric>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define YES(n) cout << ((n) ? "YES" : "NO"  ) << endl
#define Yes(n) cout << ((n) ? "Yes" : "No"  ) << endl

ll minFunc(vector<ll> vec){
    ll min = vec[0];
    for(ll i = 0;i < vec.size(); i++){
        if(min > vec[i]){
            min = vec[i];
        }
    }
    return min;
}

ll maxFunc(vector<ll> vec){
    ll max = vec[0];
    for(ll i = 0;i < vec.size(); i++){
        if(max < vec[i]){
            max = vec[i];
        }
    }
    return max;
}

ll sumFunc(vector<ll> vec){
    ll sum = 0;
    for(ll i = 0;i < vec.size(); i++){
        sum += vec[i];
    }
    return sum;
}


int main() {
    ll N;
    cin >> N;
    vector<ll> a(N);
    for (ll i = 0; i < N; ++i) cin >> a[i];

    // AOJ環境だとコンパイルエラーになる
    // ll max = *max_element(begin(a), end(a));
    // ll min = *min_element(begin(a), end(a));
    // ll sum = accumulate(begin(a), end(a), 0);

    ll max = maxFunc(a);
    ll min = minFunc(a);
    ll sum = sumFunc(a);

    cout << min << " " << max << " " << sum << endl;
    return 0;
}
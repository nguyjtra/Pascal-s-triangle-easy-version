#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll ans(ll k, ll n) {
    ll sum = 1, u = 1, g = 1;
    for (ll i = 1; i <= n; i++) {
        sum *= i;

        if (i == k)
        {
            g = sum;
        }
        if (i == (n - k))
        {
            u = sum;
        }

    }
    return sum / (g * u);
}



int main() {
    ll n;
    cin >> n;
    for (int i = 0; i <= n - 1; i++) {

        for (int j = 0; j <= i; j++) {
            cout << ans(j, i) << " ";
        }
        cout << endl;

    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

  ll factorial = 1;

  for (size_t i = 0; i < n; i++) {
    factorial = factorial * (i+1);
  }

  ll ans = factorial *2 / (n*n);

  cout << ans << endl;

}

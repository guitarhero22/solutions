#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, l = 0, a, ans = 0, cur = 0;
  cin >> n;
  for (int i = 0; i <= n; ++i) {
    if (i == n) {
      a = 1001;
    } else {
      cin >> a;
    }
    if (a - l > 1) {
      ans = max(ans, cur - 1);
      cur = 0;
    } else {
      cur++;
    }
    l = a;
  }
  ans = max(ans, cur - 1);
  cout << ans;
}

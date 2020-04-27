#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;

  long long n, sum, sum2;
  while(t > 0) {
    cin >> n;
    sum = (n * (n + 1)) / 2;
    sum2 = 0;

    for(int i = 1; i <= n; i *= 2) {
      sum2 += i;
    }

    cout << sum - sum2 * 2 << endl;
    t--;
  }

  return 0;
}

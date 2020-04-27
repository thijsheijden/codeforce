#include <iostream>
#include <numeric>
using namespace std;

int main() {
  int n;
  cin >> n;

  long arr[n];

  long j;
  long long sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> j;
    arr[i] = j;
    sum += j;
  }

  long good = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] != 0) {
      good++;
    }
    if(sum != 0) {
      good++;
    }
    cout << "Current value: " << arr[i] << endl;
    cout << "Current sum: " << sum << endl;
    sum -= arr[i];
  }

  return 0;
}

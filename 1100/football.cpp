#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  int l;
  char c = 0;

  cin >> s;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == c) {
      l++;
    } else {
      c = s[i];
      l = 1;
    }

    if(l == 7) {
      cout << "YES" << endl;
      exit(0);
    }
  }

  cout << "NO" << endl;

  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int i;
  cin >> i;

  int r;
  while(i > 0) {
    cin >> r;
    if(r == 1) {
      cout << "HARD";
      exit(0);
    }
    i--;
  }

  cout << "EASY";

  return 0;
}

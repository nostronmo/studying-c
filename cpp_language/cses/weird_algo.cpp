#include <iostream>
#include <vector>

using namespace std;

typedef long long sup;

class Solution {
public:
  vector<sup> weirdAgorithm(sup target) {
    vector<sup> result;
    while (target != 1) {
      result.push_back(target);
      if (target % 2 == 0) {
        target = target / 2;
      } else {
        target = target * 3 + 1;
      }
    }
    result.push_back(1);
    return result;
  }
};

int main() {
  int number;
  cin >> number;

  Solution sol;
  vector<sup> answer = sol.weirdAgorithm(number);

  for (sup x : answer) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}

#include <iostream>
#include <vector>

using namespace std;

typedef long long sup;

class Solution {
public:
  sup findMissingNumber(int max, vector<int> &numbers) {
    sup sum = (sup)max * (max + 1) / 2;
    sup expected = 0;
    for (sup i = 0; i < numbers.size(); i++) {
      expected += numbers[i];
    }
    return (sum - expected);
  }
};

int main() {
  int number;
  cin >> number;

  vector<int> arrays(number - 1);
  for (int i = 0; i < number - 1; i++) {
    cin >> arrays[i];
  }

  Solution sol;
  sup answer = sol.findMissingNumber(number, arrays);

  cout << answer << endl;
  return 0;
}

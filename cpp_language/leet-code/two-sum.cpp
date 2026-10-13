#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> map;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
      map[nums[i]] = i;
    }

    for (int i = 0; i < n; i++) {
      int complement = target - nums[i];
      if (map.count(complement) && map[complement] != i) {
        return {i, map[complement]};
      }
    }

    return {};
  }
};

int main() {
  vector<int> array;
  cout << "Enter the numbers: ";
  for (int i = 0; i < array.size(); i++) {
    cin >> array[i];
  }
  int target;
  cout << "Enter target value: ";
  cin >> target;

  Solution sol;
  vector<int> answer = sol.twoSum(array, target);
  cout << "Indices: ";
  for (int x : answer) {
    cout << x << "\n";
  }
  cout << endl;
  return 0;
}

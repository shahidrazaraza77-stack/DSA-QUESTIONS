#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    int n, target;
    cin >> n;              // size of vector

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
       
        cin >> nums[i];    // elements
    }
    

    cin >> target;         // target sum

    vector<int> result = twoSum(nums, target);

    cout << result[0] << " " << result[1];
    return 0;
}

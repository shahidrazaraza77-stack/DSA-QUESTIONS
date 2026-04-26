#include<iostream>
#include<vector>
#include <algorithm>
using namespace std ;



bool contain_duplicate_II(vector<int>& nums, int k) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j] && (j - i) <= k) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1,2,5,4,2,1,5};
    int k = 3;

    cout << (contain_duplicate_II(nums, k) ? "true" : "false") << endl;
    return 0;
}
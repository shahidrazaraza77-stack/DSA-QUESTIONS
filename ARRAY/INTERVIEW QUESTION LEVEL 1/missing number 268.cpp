#include <iostream>
#include <vector>
using namespace std;

int missingNum(vector<int>& arr) {
    int n = arr.size() + 1;

    // Iterate from 1 to n and check
    // if the current number is present
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }

        // If the current number is not present
        if (!found)
            return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    cout << missingNum(arr) << endl; 
    return 0;
}


// optimal aproach 


class Solution {
public:
    
    int missingNumber(vector<int>& nums) {
    int ans = nums.size();
    for (int i = 0; i < nums.size(); i++) {
        ans =ans ^ i ^ nums[i];
    }
    return ans;
}

    
};



// another method 


class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        int total = n * (n + 1) / 2;

        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }

        return total - sum;
    }
};




// another method by xor


class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        int ans = 0;

        // XOR 1 to n
        for (int i = 1; i <= n; i++) {
            ans ^= i;
        }

        // XOR array elements (normal loop)
        for (int i = 0; i < arr.size(); i++) {
            ans ^= arr[i];
        }

        return ans;
    }
};
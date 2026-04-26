#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        // Check each element one by one
        if (arr[i] == key)
            return i;
    }
    // Key not found
    return -1;
}

int main() {
    vector<int> arr = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int key = 3 ;

    int index = search(arr, key) ;
    cout << index << endl ; 
    
    return 0 ;
}


// optimal way 



class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid;

            // 🔹 Check if left half is sorted
            if (nums[left] <= nums[mid]) {
                // Target lies in left half
                if (target >= nums[left] && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            // 🔹 Right half is sorted
            else {
                // Target lies in right half
                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }

        return -1; // not found
    }
};
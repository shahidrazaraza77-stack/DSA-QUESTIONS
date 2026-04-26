#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int lo = 1, hi = n - 2; // avoid edges

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
                return mid;
            }
            else if (arr[mid] > arr[mid + 1]) {
                hi = mid - 1;  // move left
            }
            else {
                lo = mid + 1;  // move right
            }
        }

        return -1; // should never happen for valid mountain array
    }
};
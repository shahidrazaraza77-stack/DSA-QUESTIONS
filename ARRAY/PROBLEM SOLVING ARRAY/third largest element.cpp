#include <iostream>
#include <vector>
using namespace std ;

class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 3) return -1;

        int largest = -1, secondlargest = -1, thirdlargest = -1;

        // Find largest
        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        // Find second largest
        for (int i = 0; i < n; i++) {
            if (arr[i] != largest && arr[i] > secondlargest) {
                secondlargest = arr[i];
            }
        }

        // Find third largest
        for (int i = 0; i < n; i++) {
            if (arr[i] != largest && arr[i] != secondlargest && arr[i] > thirdlargest) {
                thirdlargest = arr[i];
            }
        }

        return thirdlargest;
    }
};
#include <iostream>
using namespace std;

int main() {

    int arr[] = {1,2,3,5,7,8,9,11,14,15,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x = 12;
    int lo = 0, hi = n - 1;
    int ans = n;   // default if not found

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (arr[mid] >= x) {
            ans = mid;     // possible answer
            hi = mid - 1;  // move left
        } else {
            lo = mid + 1;
        }
    }

    cout << "Lower bound index: " << ans << endl;
}

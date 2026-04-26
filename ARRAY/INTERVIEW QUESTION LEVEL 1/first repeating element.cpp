// Cpp to find first repeating element
// using Naive approach in O(n^2) Time and O(1) Space
#include <bits/stdc++.h>
using namespace std;

// Function to find the index of the first
// repeating element in a vector
int firstRepeatingElement(vector<int> &arr)
{
    int n = arr.size();

    // Nested loop to check for repeating elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return i;
            }
        }
    }

    // If no repeating element is found, return -1
    return -1;
}

int main()
{
    vector<int> arr = {10, 5, 3, 4, 3, 5, 6};
    int index = firstRepeatingElement(arr);
    if (index == -1)
        cout << "No repeating found!" << endl;
    else
        cout << "First repeating is " << arr[index] << endl;
    return 0;
}
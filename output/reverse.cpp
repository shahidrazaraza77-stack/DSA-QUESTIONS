#include <vector>
#include <iostream>
using namespace std;

vector<int> reverseVector(vector<int> num) {
    int start = 0;
    int end = num.size() - 1;

    while (start < end) {
        swap(num[start], num[end]);
        start++;
        end--;
    }

    return num;
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> num(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    num = reverseVector(num);

    cout << "Reversed vector:\n";
    for (int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }

    return 0;
}

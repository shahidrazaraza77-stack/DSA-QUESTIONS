#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i < n; i++) {

        if(arr[i] == key) {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if(found == false) {
        cout << "Element not found";
    }

    return 0;
}
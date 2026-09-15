#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}


// while loop 

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int i = n - 1;

    while (i >= 0) {
        cout << arr[i] << " ";
        i--;
    }

    return 0;
}



//  recursion

#include <iostream>
using namespace std;

void printReverse(int arr[], int n) {
    if (n == 0) {
        return;
    }

    cout << arr[n - 1] << " ";
    printReverse(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    printReverse(arr, 5);

    return 0;
}


// Two-Pointer Swapping


#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int i = 0;
    int j = n - 1;

    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
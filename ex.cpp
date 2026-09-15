#include <iostream>
#include <vector>
using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     int i;

//     if (n <= 1) {
//         cout << "Not Prime";
//         return 0;
//     }

//     for (i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             cout << "Not Prime";
//             return 0;
//         }
//     }

//     cout << "Prime";

//     return 0;
// }


// alternate 

#include <iostream>
#include <vector>
using namespace std;

vector<int> getAlternates(vector<int> &arr) {
    vector<int> v;

    for (int i = 0; i < arr.size(); i += 2) {
        v.push_back(arr[i]);
    }

    return v;
}

void print(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};

    vector<int> v = getAlternates(arr);

    print(v);

    return 0;
}
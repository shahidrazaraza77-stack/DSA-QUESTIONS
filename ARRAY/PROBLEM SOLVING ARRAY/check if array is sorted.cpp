#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& arr) {
    
    // Iterate over the array and check if 
    // every element is greater than or
    // equal to previous element.
    for (int i = 1; i < arr.size(); i++)
        if (arr[i - 1] > arr[i])
            return false;

    return true;
}

int main() {
    vector<int> arr = { 10, 20, 30, 40, 50 };
    cout << (isSorted(arr) ? "true\n" : "false\n");
    return 0;
}



// in build method 



#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isSorted(vector<int> &arr){
    
    // is_sorted() is a built-in method
    return (is_sorted(arr.begin(), arr.end()));
}

int main() {
    
    vector<int> arr = { 10, 20, 30, 40, 50 };
    if(isSorted(arr))
        cout<<"true"<<endl;
    else 
        cout<<"false"<<endl;
    return 0;
}
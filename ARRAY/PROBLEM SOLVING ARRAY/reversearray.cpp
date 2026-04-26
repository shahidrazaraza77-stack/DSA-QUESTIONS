#include <vector>

#include <iostream>
using namespace std ;

void display(vector<int>&a){
    for ( int i =0;i<a.size();i++){
        cout <<a[i]<< " "<< endl;

    }
}
int  main (){
    int n;
    cin >> n;
    vector<int>v;
    for (int i =0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
        
    }

    display(v);
     
    int i =0;
    int j=v.size()-1;
    while (i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
        
    }
    cout << " after ";

    display(v);
    

}

// 2nd method 

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr) {
    int n = arr.size();
    
    // Temporary array to store elements 
    // in reversed order
    vector<int> temp(n);
  
    // Copy elements from original array 
    // to temp in reverse order
    for(int i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];
  
    // Copy elements back to original array
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}

// 3rd method 


#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr) {
  
    // Initialize left to the beginning
    // and right to the end
    int left = 0, right = arr.size() - 1;
  
    // Iterate till left is less than right
    while(left < right) {
      
        // Swap the elements at left 
        // and right position
        swap(arr[left], arr[right]);
      
        // Increment the left pointer
        left++;
      
        // Decrement the right pointer
        right--;
    }
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}
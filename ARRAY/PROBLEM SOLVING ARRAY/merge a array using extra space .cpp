#include <iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>res(n+m);
    int i=0;     //for array 1
    int j=0;     //for array 2
    int k=0;     //for res array

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;           
        }
        else{
            res[k]=arr2[j];
            j++;
        }
        k++;
        //remaining elements
        if (i==n){ //arr1 ke sare element khatam ho chuke hai 

            while(j<m){
                res[k]=arr2[j];
                k++;
                j++;
            }
            
        }
        if (j==m){  // arr2 hai uska sara element khtam ho chuka hai 

            while(i<n){
                res[k]=arr1[i];
                k++;
                j++;
            }
        }

    }
    return res;
        
            
}


int main() {
    vector<int> arr1 = {1, 3, 5, 7, 8};
    vector<int> arr2 = {2, 4, 6, 9, 10, 12, 14};

    // calling the function
    vector<int> v = merge(arr1, arr2);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}




// new type 





#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr1, vector<int>& arr2, vector<int>& res) {
    int n = arr1.size();
    int m = arr2.size();

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            res[k++] = arr1[i++];
        } else {
            res[k++] = arr2[j++];
        }
    }

    // remaining elements of arr1
    while (i < n) {
        res[k++] = arr1[i++];
    }

    // remaining elements of arr2
    while (j < m) {
        res[k++] = arr2[j++];
    }
}
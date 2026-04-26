#include <iostream>
#include <vector>
using namespace std;


void sort01(vector<int>&arr){

    int i=0;
    int n=arr.size();
    for (int j=0;j<n;j++){
        if(arr[j]==0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp ;
            i++;
        }
    }

}
int main(){

    vector<int>arr={0,1,0,1,0,1,0,1};


    sort01(arr);

    for (int i=0;i<arr.size();i++){
        cout << arr[i]<<" ";

    }


}
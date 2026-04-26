#include<iostream>
#include<vector>
using namespace std ;

void sortColors(vector<int>& nums) {

    int n=nums.size();
    int low =0;
    int mid =0;
    int hi=n-1;
    while(mid<=hi){
        if (nums[mid]==2){
            int temp=nums[mid];
            nums[mid]=nums[hi];
            nums[hi]=temp;
            hi--;

        }
        else if (nums[mid]==0){
            int temp=nums[mid];
            nums[mid]=nums[low];
            nums[low]=temp;
            mid++;
            low++;
            }
            else{
                mid++;
        }
    }
      



}

int main(){

    vector<int>arr={1,0,2,1,0,2,0,1,2};

    sortColors(arr);

    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
        
    }
}
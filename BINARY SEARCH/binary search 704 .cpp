#include <iostream>
#include <vector>
using namespace std;



int binarysearch(vector<int>&nums, int target ){
    int lo=0;
    int hi=nums.size()-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]==target) return mid;
        else if (nums[mid]>target)hi=mid-1;
        else lo=mid+1;

    }
    return -1;

}
int main(){
    vector<int>nums={1,2,3,4,5,6,7,8,9};
    int target =5;

    int ans=binarysearch(nums,target);

    cout << ans;

}
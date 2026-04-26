#include<iostream>
#include<vector>
#include <algorithm>
using namespace std ;

bool contain_duplicate(vector<int>&nums ){
    int n=nums.size();

    for (int i=0;i<n;i++){
        for (int j = i+1;j<n;j++){
            if (nums[i]==nums[j]){
                return true;

            }
        }
    }
    return false;

}

int main(){
    vector<int>nums={1,2,5,4,2,1,};

    cout<<(contain_duplicate(nums)? " true": " false")<< endl;
    return 0 ;

}



// method 2 


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }

        return false;
    }
};
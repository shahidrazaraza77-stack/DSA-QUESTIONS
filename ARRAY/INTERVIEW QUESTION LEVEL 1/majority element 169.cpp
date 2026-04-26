#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



// bruteforce approch


int majorityelement(vector<int> nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            return nums[i];
        }
    }

    return -1; // if no majority element
}

int main() {
    vector<int> nums = {1,2,5,1,2,1,23,5,1,2};

    cout << majorityelement(nums) << endl;

    return 0;
}


// Better APPROCH


class solution{
    public:
        int majorityelement(vector<int>&nums){
            sort(nums.begin(),nums.end());
            return nums[nums.size()/2];
        }
};




// optimal aproacch



class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int candidate = nums[n/2];
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == candidate)
                count++;
        }

        if(count > n/2)
            return candidate;
        else
            return -1;
    }
};


// optimal approach


class solution{
public:
    int majorelement(vector<int>&nums){

        int count =0;
        int candidate=0;

        for (int i =0;i<nums.size();i++){
            if (count==0){
                candidate=nums[i];

            }
            if (nums[i]==candidate){
                count++;
            }
            else {
                count --;

            }
        }
        return candidate;

    }

};

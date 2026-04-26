#include <iostream>
#include <vector>

using namespace std ;

int singlenumber(vector<int>&nums){

    for(int i =0;i<nums.size();i++){

    
        int count =0;
   
        for (int j =0;j<nums.size();j++){
            if (nums[i]==nums[j]){
                count ++;
            

            }   
    
        }
        if (count==1){
            return nums[i];

        }
    }
    return -1;    

}

int main(){

    vector<int>nums={2,4,5,2,5,4,7,2,1,2,5,1,2};
   

    int ans= singlenumber(nums);

    cout<<" single number"<< ans << endl;
    return 0 ;


}



// optimal way 


class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans =0;
        for(int i=0;i<nums.size();i++){
            ans =ans^nums[i];
       
        }
        return ans;    
        
    }
};
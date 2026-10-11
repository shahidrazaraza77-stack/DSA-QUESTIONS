#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;





class Solution {
public:
    int maximumSum(vector<int>& nums) {

        int deleted=0;
        int nodeleted=nums[0];
        int ans=nums[0];

        for (int i =1;i<nums.size();i++){
            deleted=max(nodeleted,deleted+nums[i]);
            nodeleted=max(nums[i],nodeleted+nums[i]);
            ans=max(ans, max(nodeleted,deleted));
        }
        return ans ;
        
    }
};
#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;




class Solution {
  public:
    int minSubarraySum(vector<int> &arr) {
        // code here
        int current=arr[0];
        int ans=arr[0];
        
        for(int i =1;i<arr.size();i++){
            current=min(arr[i],current + arr[i]);
            ans= min (ans, current);
            
        }
        return ans;
    }
};
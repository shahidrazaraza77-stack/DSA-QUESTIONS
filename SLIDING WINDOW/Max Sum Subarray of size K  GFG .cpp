#include <iostream>
#include <vector>
using namespace std;

// 1. calculate the sum of the first k element 
// 2. slide window 
// 3. add the new element entering the window 
// 4.  subtract  the old element leaving the window 
// 5.  update the window 


class solution{
    public:
    int maxssubarray(vector<int>&nums,int k){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+nums[i];
        }
        int maxi=sum;

        for (int i=k;i<n;i++){
            sum=sum+nums[i];
            sum=sum-nums[i-k];

            maxi=max(maxi,sum);


        }

        return maxi;
    }



};

int main(){
    vector<int>nums={100,200,300,400};
    int k=2;
    solution obj;
    cout<<obj.maxssubarray(nums,k);
}
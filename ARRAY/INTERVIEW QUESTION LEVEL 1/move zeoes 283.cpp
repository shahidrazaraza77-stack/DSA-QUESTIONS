#include <iostream>
#include <vector>
using namespace std ;

void moveszeroes(vector<int>& nums){
    int j =0;

    for (int i=0;i<nums.size();i++){

        if (nums[i]!=0){
            nums[j]=nums[i];
            j++;


        }
    }

// fill the zeroes 

    while(j<nums.size()){
        nums[j]=0;
        j++;


    }
}
int main(){
    vector<int>nums={0,1,0,12,4,3};
    int n=nums.size();
    moveszeroes(nums);

    for(int i =0;i<n;i++){
        cout <<nums[i]<<" ";

    }


}





// optimal way 
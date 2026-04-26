#include<iostream>
using namespace std;
int main()
{   
    int n ;
    cout <<" enter the value of n";
    cin >>n ;

    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    int maxvalue=arr[0];

    for(int i=0;i<n;i++){
            if(arr[i]>maxvalue){

                maxvalue=arr[i];

            }

    }
    cout << " the max value is "<<maxvalue<<endl;
  

return 0;
}
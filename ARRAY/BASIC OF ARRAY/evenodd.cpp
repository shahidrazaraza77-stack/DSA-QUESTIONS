#include<iostream>
using namespace std;
int main()
{   
    int n ;
    cin >>n ;

    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    int counteven=0;
    int countodd=0;
    for(int i=0;i<n;i++){
        if (arr[i]%2==0){
            counteven ++;
        }
        else{
            countodd ++ ;
        }
    } 
    cout << counteven <<" and "<< countodd << endl<<sizeof(arr);

return 0;
}
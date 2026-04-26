#include <iostream>
using namespace std ;

int main(){
    int n;
    cout<<"enter the  size element";
    cin>>n;


    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }

    int size =sizeof(arr)/4;
    
    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    
    cout <<" modified element ";
    for (int i =0;i<size;i++){
        arr[i]+=5;
        
    }
    for (int i =0;i<size;i++){
        cout <<arr[i]<<" ";


    }


}
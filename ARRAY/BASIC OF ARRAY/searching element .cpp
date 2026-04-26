#include<iostream>
using namespace std;



int main (){
    int n ;
    cout << " enter the  size element  ";
    cin>> n;

    int arr[n];
    for (int i =0;i<n;i++){
        cin>> arr[i];

    }
    
    int size = sizeof(arr)/4;
    int target ;
    cout <<" enter the terget" ;

    cin>> target ;

    bool found = true ;

    for(int i=0;i<size;i++){
        if (arr[i]==target){
            found =true ;
        }
        break;
    } 
    if (found)
        cout <<" element is found " ;

    else 
        cout << " not sound ";    
}



#include <iostream>
using namespace std ;


void display (int arr[] , int size ){
    for (int i =0;i<size;i++){
        cout<<arr[i]<<endl;

    }
}
int main(){
    int arr[]={2,8,9,5,5,2,4};
    int size =sizeof(arr)/4;
    cout << size <<endl;

    display(arr,size);


}
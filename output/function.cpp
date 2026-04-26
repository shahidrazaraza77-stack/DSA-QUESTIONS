#include<iostream>
using namespace std;


void display (int a[],int size ){
    for (int i=0;i<size;i++ ){
        cout <<a[i];
    }
}


void change(int b[],int size ){
    b[0]=100;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size =sizeof (arr)/sizeof (arr[0]);

    cout<<size <<endl;

    display(arr,size);

    cout <<" .............."<< endl;;
    change (arr,size );
    display(arr,size);


return 0;
}
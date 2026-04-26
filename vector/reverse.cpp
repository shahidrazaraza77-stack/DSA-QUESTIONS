#include <iostream>
#include <vector>
using  namespace std ;

void reversevector(vector <int> &v){
int start = 0;
int end = v.size()-1;

while (start < end) {
    swap(v[start], v[end]);
    start++;
    end--;
}

}

void display(vector<int>v,int size){
    for (int i=0;i<size;i++){
        cout << v[i]<< " ";

    }
    cout << endl;
}




int main(){
   
    vector <int> v;
    int n;
    cout << " enter the size of vector ";
    cin>>n;

    cout<<" enter the element ";

    for (int i=0;i<n;i++){
        int q;

        cin>>q;

        v.push_back(q);
    }

    cout<<" original vector " ;
    
    display(v,n);
    
    cout<<" reverse vector " ; 
    
    reversevector(v);
    
    display(v,n);
 

    return 0;
}









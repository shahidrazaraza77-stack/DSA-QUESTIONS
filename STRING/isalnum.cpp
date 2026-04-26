#include <iostream>
using namespace  std ;

int main(){
    string s="  a man , a plan , a canal : ";
    for (int i =0;i<s.length();i++){
        if (isalnum(s[i])){
            cout <<s[i]<<" alphanumeric"<< endl;
        }
        else{
            cout<<s[i]<<" "<<" not alphanumeric "<< endl;
            
        }
    }
}




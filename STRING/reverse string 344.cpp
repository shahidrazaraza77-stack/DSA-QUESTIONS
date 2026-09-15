#include <iostream>
using namespace std;

int main() {
    string str = "apna college";

    int st = 0;
    int end = str.size() - 1;

    while (st < end) {
        swap(str[st], str[end]);
        st++;
        end--;
    }

    cout << str << endl;

    return 0;
}
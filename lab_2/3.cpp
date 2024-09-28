#include <iostream>
#include <list>
using namespace std;
int main(){
    int n;
    cin >> n;
    list<int> myList;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(i % 2 == 0){
            myList.push_back(input);
        }
    }
    for(int val:myList){
        cout << val << " ";
    }
    return 0;
}
#include <iostream>
#include <list>
using namespace std;

int main(){
    int n;
    cin >> n;

    list<int>my_list;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        my_list.push_back(input);
    }
    int data;
    int pos;
    cin >> data >> pos;
    list<int>::iterator it = my_list.begin();
    advance(it, pos);
    my_list.emplace(it, data);
    for(int val:my_list){
        cout << val << " ";
    }
    return 0;
}
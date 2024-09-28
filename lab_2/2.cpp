#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main() {
    int n, k;
    
    cin >> n >> k;

    list<string> myList;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        myList.push_back(s);
    }

    int j = 0;
    
    bool cont = true;
    list<string>::iterator it = myList.begin();
    list<string> new_list;
    while(cont) {
        if(j + k < n){
            it = myList.begin();
            advance(it, j);
            advance(it, k);
            string curr_at_k = *it;
            myList.erase(it);
            myList.push_front(curr_at_k);
            new_list.push_back(curr_at_k);
        } else {
            cont = false;
            for(int i = j; i < n; i++){
                it = myList.begin();
                advance(it, i);
                new_list.push_back(*it);
            }
        }
        j++;
    }
    for(string val:new_list){
        cout << val << " ";
    }
    return 0;
}
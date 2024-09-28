#include <iostream>
#include <list>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;

    list<int> myList;
    
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        myList.push_back(input);
                
    }

    int k;
    cin >> k;

    int number = abs(k-myList.front());
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(abs(k-myList.front()) < number) 
        {
            number = abs(k - myList.front());
            index = i;
        }
        myList.pop_front();
    }

    cout << index;
    return 0;
}
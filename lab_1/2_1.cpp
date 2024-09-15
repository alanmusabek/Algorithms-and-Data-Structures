#include <iostream>
#include <deque>
#include <stack>
using namespace std;
int main() {
    int n;
    cin >> n;

    deque<long> a;
    stack<long> y;
    for(int i = 0; i < n; i++) {
        long input;
        cin >> input;
        
        a.push_front(input);
    }

    bool found = false;
    for(int i = 0; i < a.size(); i++) {
        for(int j = i; j < a.size(); j++) {
            if(a.at(i) >= a.at(j) && i != j) {
                y.push(a.at(j));
                found = true;
                break;
            }
        }
        if(!found) {
            y.push(-1);
        }
        found = false;
    }

    for(int i = 0; i < a.size(); i++) {
        cout << y.top() << " ";
        y.pop();
    }
    return 0;
}
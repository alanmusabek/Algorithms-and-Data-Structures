#include <iostream>
#include <deque>

using namespace std;
int main() {
    deque <int> d;
    char input = ' ';
    int n;

    while(input != '!') {
        cin >> input;
        if(input == '+') {
            cin >> n;
            d.push_front(n);
        } else if (input == '-')
        {
            cin >> n;
            d.push_back(n);
        } else if (input == '*')
        {
            if(d.empty()){
                cout << "error" << endl;
            } else if (d.size() == 1) {
                cout << d.front() * 2 << endl;
                d.pop_front();
            } else {
                cout << d.front() + d.back() << endl;
                d.pop_front();
                d.pop_back();
            }
        }
    }
    return 0;
}
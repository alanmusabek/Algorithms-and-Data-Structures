#include <iostream>
#include <deque>

using namespace std;
int main() {
    string first, second;
    cin >> first >> second;
    for(int i = 0; i < first.length(); i++) {
        if(first.at(i) == '#'){
            first.erase(first.begin() + i);
            first.erase(first.begin() + (i-1));
            i--;
            i--;
        }
    }
    for(int i = 0; i < second.length(); i++) {
        if(second.at(i) == '#'){
            second.erase(second.begin() + i);
            second.erase(second.begin() + (i-1));
            i--;
            i--;
        }
    }

    if(first == second) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
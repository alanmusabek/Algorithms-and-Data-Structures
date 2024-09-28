#include <iostream>
#include <set>

using namespace std;
int main(){
    int n;
    cin >> n;
    set<string> students_name;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        students_name.insert(s);
    }
    cout << "All in all: " << students_name.size() << endl;
    cout << "Students:" << endl;
    for(const auto &val:students_name){
        cout << val << endl;
    }
    return 0;
}
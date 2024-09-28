#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;

    int Ast = 6;
    
    if(n >= -5){
        if(n + 5 > 9){
            cout << n+5 << ":00";
        } else {
            cout << "0" << n + 5 << ":00";
        }
    } else {
        cout << n + 5 + 24 << ":00";
    }
}
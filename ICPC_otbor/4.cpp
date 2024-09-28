#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;
    long long x;
    cin >> x;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        long long in;
        cin >> in;
        v.at(i) = in;
        
    }
    int ans;
    int max = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if(max < v.at(i)){
    //         max = v.at(i);
    //     }
    // }
    
    int j = 0;
    bool all_zero = false;
    while (!all_zero)
    {
        max = 0;
        j = 0;
        
        for (int i = 0; i < v.size(); i++)
        {
            if(max <= v.at(i)){
                max = v.at(i);
                j = i;
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v.at(i) << " ";
        }
        cout << endl;
        if(max - x < 0){
            v.at(j) = 0;
            x = ceil(x/2);
            ans++;
        } else {
            v.at(j) = max - x;
            x = ceil(x/2);
            ans++;
        }
        for(int i = 0; i < v.size(); i++){
            if(v.at(i) != 0){
                all_zero = false;
                break;
            } else {
                all_zero = true;
            }
        }
    }
    
    cout << ans;
}
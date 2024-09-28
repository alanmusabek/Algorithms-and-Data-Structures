#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin >> n;

    long double X;
    cin >> X;

    vector<long long> v(n);
    for(int i = 0; i < n; i++){
        long long in;
        cin >> in;
        v.at(i) = in;
    }

    // we want to use the power until it will become 1.
    // we also want to use it on the hardest task
    // we will do it until X = 1.

    long long max = 0;
    long long pos = 0;
    long long j = 0;
    while(X > 1){

        max = 0;
        pos = 0;
        
        // we want to find the hardest task in the array
        // and also know the position of it

        for(int i = 0; i < v.size(); i++){
            if(max < v.at(i)){
                max = v.at(i);
                pos = i;
            }
        }

        // we now know the max and the position
        // now we want to find the difference of the task and X

        // But first, we have to check if the hardest task is not less than zero
        // why? because if we will take X from the task it can be -4 for ex.
        // if it is less than 0 we make it zero.
        // if not then we just rewrite the element to max - x
        if(max - X < 0){
            v.at(pos) = 0;
            j++;
        } else {
            v.at(pos) = max - X;
            j++;
        }

        X = ceil(X/2);


    }

    for (int i = 0; i < v.size(); i++)
    {
        j += v.at(i);
    }

    cout << j << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
// quick discripto
// we want to add fives as always as possible since it is takes a lot of less energy
// we must add fives even if it seems impossible. In some cases it is better to add fives
// and then add ones to other numbers
// there are two cases
// adding additional five is pointless and the straightforward solution is preferrable

// function that checks if adding five is possible
bool can_four(long long a, long long b){
    // assuming that b is our maximum
    if(b - a == 4){
        return true;
    } else {
        return false;
    }
}

bool is_possible(long long a, long long b){
    // let's assume that b is the max
    if(b - a >= 5){
        return true;
    } else {
        return false;
    }
}
using namespace std;
int main() {
    long long s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;

    // we want to add fives if it is possible or if adding five will make
    // faster the equalisation
    vector<long long> v(3);

    v.at(0) = s1;
    v.at(1) = s2;
    v.at(2) = s3;
    
    long long max = 0;
    for (int i = 0; i < 3; i++)
    {
        if(v.at(i) > max){
            max = v.at(i);
        }
    }
    
    sort(begin(v), end(v), greater<>());
    int j = 0;
    while(is_possible(v.at(0), max)){
        v.at(0) += 5;
        j++;
    }
    while(is_possible(v.at(1), max)){
        v.at(1) += 5;
        j++;
    }
    
    while(is_possible(v.at(2), max)){
        v.at(2) += 5;
        j++;
    }

    if(v.at(1) == v.at(2)) {
        if(v.at(0) - v.at(1) >= 3){
                v.at(1) += 5;
                j++;
                v.at(2) += 5;
                j++;
        }
        sort(begin(v), end(v), greater<>());
        j += (v.at(0) - v.at(2));
    } else {
        if(can_four(v.at(1), v.at(0))){
        v.at(1) += 5;
        j++;
    } else if(can_four(v.at(2), v.at(0))) {
        v.at(2) += 5;
        j++;
    }
    
    sort(begin(v), end(v), greater<>());

    if(can_four(v.at(1), v.at(0))){
        v.at(1) += 5;
        j++;
    } else if(can_four(v.at(2), v.at(0))) {
        v.at(2) += 5;
        j++;
    }

    sort(begin(v), end(v), greater<>());

    while(is_possible(v.at(1), v.at(0))){
        v.at(1) += 5;
        j++;
    }
    while(is_possible(v.at(2), v.at(0))){
        v.at(2) += 5;
        j++;
    }

    if(can_four(v.at(1), v.at(0))){
        v.at(1) += 5;
        j++;
    } else if(can_four(v.at(2), v.at(0))) {
        v.at(2) += 5;
        j++;
    }
       j += (v.at(0) - v.at(1)) + (v.at(0) - v.at(2));
    }

    
    // let's see if adding five will be faster or not, but before
    cout << j << endl;   
    return 0;
}
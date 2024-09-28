#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main(){

    vector<long> v(3);
    long max = 0;
    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        long in;
        cin >> in;
        v.at(i) = in;
        if(v.at(i) > max) {
            max = v.at(i);
            j = i;
        }
    }

    long ans = 0;   
    // будем добавлять пятерки, пока мы можем
    // максимум - элемент 0 делить на 5 означает сколько раз по 5 мы сможем добавить.

    int a = (max - v.at(0)) / 5;
    int b = (max - v.at(1)) / 5;
    int c = (max - v.at(2)) / 5;

    // теперь запишем остатки каждого

    int ost1 = (max - v.at(0)) % 5;
    int ost2 = (max - v.at(1)) % 5;
    int ost3 = (max - v.at(2)) % 5;

    // если среди них оказался остаток 4, то нам легче добавить пять и добавить однерки остальным
    if(ost1 == 4){
        v.at(0) += 5;
        ans++;
        max = v.at(0);
        v.at(1) += max - v.at(1);
        ans += max - v.at(1);
        v.at(2) += max - v.at(2);
        ans += max - v.at(2);
    } else if (ost2 == 4)
    {
        v.at(1) += 5;
        ans++;
        max = v.at(1);
        v.at(0) += max - v.at(0);
        ans += max - v.at(0);
        v.at(2) += max - v.at(2);
        ans += max - v.at(2);
    } else if (ost3 == 4)
    {
        v.at(2) += 5;
        ans++;
        max = v.at(2);
        v.at(0) += max - v.at(0);
        ans += max - v.at(0);
        v.at(1) += max - v.at(1);
        ans += max - v.at(1);
        ans++;
    } else {
        ans += ost1;
        ans += ost2;
        ans += ost3;
    }
    
    cout << ans;
    return 0;
}
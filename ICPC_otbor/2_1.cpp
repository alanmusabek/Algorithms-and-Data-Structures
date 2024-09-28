

    #include <iostream>
     
    using namespace std;
    int main() {
        long n;
        cin >> n;
     
        long long dosok = n * 4;
        
        if(dosok >= 5) {
            int kirki = 0;
            while(dosok > 0) {
                dosok -= 2;
                int palok = 4;
                while (palok > 0 && dosok > 2)
                {
                    dosok -= 3;
                    palok -= 2;
                    kirki++;
                }
            }
            cout << kirki << endl;
        } else {
            cout << 0;
        }
        return 0;
    }
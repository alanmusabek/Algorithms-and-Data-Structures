#include <iostream>
#include <deque>
#include <vector>

using namespace std;

void solve(int n) {
    deque<int> deck;
    for (int i = n; i >= 1; --i) {
        deck.push_front(i);  // Insert the current card at the front
        // Now, simulate the reverse of placing `i` cards to the back:
        for (int j = 0; j < i; ++j) {
            deck.push_front(deck.back());  // Move the last card to the front
            deck.pop_back();  // Remove the card from the back
        }
    }
    
    // Output the initial arrangement of the deck
    for (int i = 0; i < n; ++i) {
        cout << deck[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    
    return 0;
}

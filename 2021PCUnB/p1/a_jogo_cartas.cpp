#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>

int main() {
    int n;
    ll ai, diff;
    bool alice_turn = true;
    vll deck;

    diff = 0;
    cin >> n;
    while (n--) {
        cin >> ai;
        deck.push_back(ai);
    }

    sort(deck.begin(), deck.end(), greater<ll>());

    for (auto elem : deck) {
        if (alice_turn) {
            diff += elem;
        } else {
            diff -= elem;
        }

        alice_turn = !alice_turn;
    }

    cout << diff << endl;

    return 0;
}

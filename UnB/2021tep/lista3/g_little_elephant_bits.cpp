#include <bits/stdc++.h>
using namespace std;

int main() {
    char tmp;
    bool passed = false;
    string res;

    do {
        tmp = getchar();
        if (tmp == '0' && !passed) {
            passed = true;
            continue;
        }

        res += tmp;
    } while (tmp != '\n' && tmp != EOF);

    if (!passed) {
        res.erase(0, 1);
    }

    cout << res;

    return 0;
}

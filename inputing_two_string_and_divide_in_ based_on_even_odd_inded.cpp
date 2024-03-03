#include <iostream>
#include <string>
#include <vector>
using namespace std;

void strdivi(const string& x) {
    for (int j = 0; j < x.size(); j++) {
        if (j == 0 || j % 2 == 0) {
            cout << x[j];
        }
    }
    cout << "  ";
    for (int j = 0; j < x.size(); j++) {
        if (j % 2 != 0) {
            cout << x[j];
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int k = 0; k < n; k++) {
        strdivi(str[k]);
    }
    return 0;
}

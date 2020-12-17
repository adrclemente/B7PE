#include <iostream>
#include <vector>

using namespace std;

int MAX_VALUE = 250;

int main() {
    vector<int> v(MAX_VALUE, 0);
    int n;
    
    while (cin >> n) ++v[n];
    
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] != 0) cout << i << "," << v[i] << endl;
    }
}

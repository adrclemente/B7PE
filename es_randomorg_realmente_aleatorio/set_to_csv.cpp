#include <iostream>

using namespace std;

int main() {
    int n; int count = 1;
    
    while (cin >> n) {
        cout << count << "," << n << endl;
        
        ++count;
    }
}

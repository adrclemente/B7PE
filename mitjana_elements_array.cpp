#include <iostream>
#include <vector>

using namespace std;

int num_vectors = 1000;
int n = 50;

int main() {
    vector<double> array(n, 0);
    double num;
    
    for(int i = 0; i < num_vectors; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> num;
            array[j] += num;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << i+1 << "," << array[i]/num_vectors << endl;
    }
}

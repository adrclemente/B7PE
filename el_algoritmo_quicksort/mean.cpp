#include <iostream>
#include <vector>

using namespace std;

int num_vectors = 100;
int max_tamany = 100;
int min_tamany = 3;

int main() {
    
    int n; char coma; double num;
    
    double sum = 0;
    
    
    for (int i = min_tamany; i <= max_tamany; ++i) {
        for (int j = 1; j <= 100; ++j) {
            cin >> n >> coma >> num;
            
            sum += num;
        }
        
        cout << n << "," << sum/100 << endl;
        sum = 0;
    }
}

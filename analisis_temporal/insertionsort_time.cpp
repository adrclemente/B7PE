#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

//g++ quicksort_numOp.cpp -o quicksort_numOp.x

int num_vectors = 100;
int n;
int NUM_OP = 0;

void insertionsort(vector<int>& V) {
    for (int i = 1; i < V.size(); ++i) {
        int j = i - 1;
        while (j >= 0 and V[j+1] < V[j]) {
            ++NUM_OP;
            swap(V[j], V[j+1]); ++NUM_OP;
            --j;
        } } }

int main() {
    cin >> n;
    
    vector<int> v(n);
    chrono::steady_clock::time_point inici = chrono::steady_clock::now();
        
    //ho fem num_vectors vegades
    for(int i = 0; i < num_vectors; ++i) {
        //inserim els elements
        for(int j = 0; j < n; ++j) {
            cin >> v[j];
        }
        //ordenem el vector, imprimim el numero d'operacions i ho resetejem

        insertionsort(v);
    }
    chrono::steady_clock::time_point final = chrono::steady_clock::now();
    chrono::duration<double,micro> temps = final - inici;
    
    cout << n << "," << temps.count() << endl;
}

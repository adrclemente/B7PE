#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

//g++ quicksort_numOp.cpp -o quicksort_numOp.x

int num_vectors = 100;
int n;

int partition (vector<int>& T, int e, int d) {
    int x = T[e];
    int i = e - 1;
    int j = d + 1;
    
    for (;;) {
        while (x < T[--j]);
        while (T[++i] < x);
        if (i >= j) return j;
        swap(T[i], T[j]);
    }
}

void quicksort(vector<int>& T, int e, int d) {
    if (e < d) {
        int q = partition(T, e, d);
        quicksort(T, e, q);
        quicksort(T, q+1, d);
    }
}

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

        quicksort(v, 0, v.size()-1);
    }
    chrono::steady_clock::time_point final = chrono::steady_clock::now();
    chrono::duration<double,micro> temps = final - inici;
    
    cout << n << "," << temps.count() << endl;
}

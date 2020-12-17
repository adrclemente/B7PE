#include <iostream>
#include <vector>

using namespace std;

//g++ quicksort_numOp.cpp -o quicksort_numOp.x

int num_vectors = 10000;
int n;
int NUM_OP = 0;

int partition (vector<int>& T, int e, int d) {
    int x = T[e];
    int i = e - 1;
    int j = d + 1;
    
    for (;;) {
        while (x < T[--j]) {++NUM_OP;}
        while (T[++i] < x) {++NUM_OP;}
        ++NUM_OP;
        if (i >= j) return j;
        swap(T[i], T[j]); ++NUM_OP;
    }
}

void quicksort(vector<int>& T, int e, int d) {
    if (e < d) {
        ++NUM_OP;
        int q = partition(T, e, d);
        quicksort(T, e, q);
        quicksort(T, q+1, d);
    }
}

int main() {
    cin >> n;
    
    vector<int> v(n);
    
    //ho fem num_vectors vegades
    for(int i = 0; i < num_vectors; ++i) {
        
        //inserim els elements
        for(int j = 0; j < n; ++j) {
            cin >> v[j];
        }
        //ordenem el vector, imprimim el numero d'operacions i ho resetejem
        quicksort(v, 0, v.size()-1);
        //cout << n << "," 
        cout << NUM_OP << endl;
        NUM_OP = 0;
    }

    cout << endl;
}

// For problem and its details: https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n;
    int q;
    cin >> n >> q;
    vector<int> a[n];
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        int o;
        for(int j = 0; j < m; j++){
            cin >> o;
            a[i].push_back(o);
            // for every i, m elements array is inserted into the array i.e a[2]={1,2,3,4} till n here i =2
        }
    }
    
    int r, s;
    for(int k = 1; k <= q; k++){
        cin >> r >> s;
        cout << a[r][s] << endl;
        // then just printing the specific position from array like if r=2, and s=2 from above O/P will be 3.
    }
    return 0;

}

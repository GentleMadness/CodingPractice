/*
https://www.hackerrank.com/challenges/variable-sized-arrays
Deal with big size array 

The first line contains two space-separated integers denoting the respective values of 
n (the number of variable-length arrays) and q (the number of queries). 
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int** array = new int*[n]; //array is a pointer array
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        array[i] = new int[k];
        for (int j = 0; j < k; j++)
            cin >> array[i][j];
    }
    // query
    for (int s = 0; s < q; s++){
        int i, j;
        cin >> i >> j;
        cout << array[i][j] << std::endl;
    }
    // deallocate the array
    for (int i = 0; i < n; i++){
        delete[] array[i];
    }
    delete[] array;
    return 0;
}
#include <iostream>
#include <cstdlib>

using namespace std;

const int N = 40;
int n = 0;
int insertionSortAR[N];
int mergeSortAR[N];

int insertionSort() {
    int count = 0;
    int key = 0;
    for (int i = 2; i <= n; i++) {
        key = insertionSortAR[i];
        int j = i - 1;
        while (j > 0 && insertionSortAR[j] > key) {
            insertionSortAR[(j + 1)] = insertionSortAR[j];
            j = j--;
            count++;
            insertionSortAR[(j + 1)] = key;
        }
    }
    return count;
}
//int mergeSort(){

//}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> insertionSortAR[i];
        cin >> mergeSortAR[i];
    }
    return insertionSort();
}
#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr){
    int n = arr.size();
    int i,key,j;
    for(int i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while( j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main() {
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    
    cout << "Before sorting:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    insertionSort(arr);
    
    cout << "After sorting:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
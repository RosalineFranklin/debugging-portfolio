#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort with a logic bug
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {  
        for (int j = 0; j < n-i-1; j++) { 
            if (arr[j] > arr[j+1]) {  
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// Selection Sort with a logic bug
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) { 
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Insertion Sort with a logic bug
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;  // 
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> data = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    printArray(data);

    vector<int> bubble = data;
    bubbleSort(bubble);
    cout << "Bubble Sorted: ";
    printArray(bubble);

    vector<int> selection = data;
    selectionSort(selection);
    cout << "Selection Sorted: ";
    printArray(selection);

    vector<int> insertion = data;
    insertionSort(insertion);
    cout << "Insertion Sorted: ";
    printArray(insertion);

    return 0;
}
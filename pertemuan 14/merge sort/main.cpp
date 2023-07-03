#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp(high - low + 1);
    int left = low;
    int right = mid + 1;
    int index = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[index] = arr[left];
            left++;
        } else {
            temp[index] = arr[right];
            right++;
        }
        index++;
    }

    while (left <= mid) {
        temp[index] = arr[left];
        left++;
        index++;
    }

    while (right <= high) {
        temp[index] = arr[right];
        right++;
        index++;
    }

    for (int i = 0; i < index; i++) {
        arr[low + i] = temp[i];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main() {
    vector<int> arr = {9, 5, 1, 8, 3, 2, 7, 4, 6};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

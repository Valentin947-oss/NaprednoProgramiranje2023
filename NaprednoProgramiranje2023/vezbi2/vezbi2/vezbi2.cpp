//Валентин Стојановски ИНКИ947  heapify selecotr
#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;  // Initialize largest as root
    int l = 2 * i + 1;  // left = 2*i + 1
    int r = 2 * i + 2;  // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

void build_heap(vector<int>& arr)
{
    int n = arr.size();
    // Build a max-heap using bottom-up heapify
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

int main() {
    vector<int> arr = { (int)'V', (int)'A', (int)'L', (int)'E', (int)'N', (int)'T', (int)'I', (int)'N', (int)'S', (int)'T', (int)'O', (int)'J', (int)'A', (int)'N', (int)'O', (int)'V', (int)'S', (int)'K', (int)'I', (int)'I', (int)'N', (int)'K', (int)'I', (int)'9', (int)'4', (int)'7' };



    build_heap(arr);
    cout << "Heapified array is: ";
    for (auto num : arr) {
        cout << num << " ";
    }
    return 0;
}
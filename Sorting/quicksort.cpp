#include <iostream>
#include <vector>

using namespace std;

int medOf3s(int a, int b, int c);
int Partition(vector<int> arr, int low, int high);

int main() {
  int pivot = medOf3s(3, 8, 10);
  cout << "Pivot: " << pivot << "\n";
  return 0;
}

void QuickSort(vector<int> arr, int low, int high) {
  if (low < high) {
    int Pivot = Partition(arr, low, high);
    QuickSort(arr, low, Pivot);
    QuickSort(arr, Pivot, high);
  }
}

int Partition(vector<int> arr, int low, int high) {
    // using median of 3s to choose the pivot
  int pivot = medOf3s(arr[0], low, high);
  for (const auto &elem : arr) {
    if (elem > pivot) {
      swap(arr, i, pivot)
    }
  }
  return pivot;
}

// TODO: change this to indices
int medOf3s(int a, int b, int c) {
  if (a > b)
    if (b > c)
      return b;
    else
      return medOf3s(a, c, b);
  else
    return medOf3s(b, a, c);
}

// TODO: define swap

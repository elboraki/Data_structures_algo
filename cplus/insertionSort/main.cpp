#include <iostream>

using namespace std;
void insertionSort(int [], int);
int main() {
  // cout << "Hello World!" << endl;
  int arr_numbers[] = {4, 3, 6, 8, 2, 1, 9};
  int length1 = sizeof(arr_numbers) / sizeof(*arr_numbers);
  insertionSort(arr_numbers, length1);
  for (int i = 0; i < length1; i++) {
    cout << arr_numbers[i] << endl;
  }
  return 0;
}

void insertionSort(int *arr, int length) {

  for (int step = 1; step < length; step++) {
    int key = step;
    int j = step - 1;

    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }



}

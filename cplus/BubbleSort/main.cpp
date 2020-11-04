#include <iostream>

using namespace std;
void bubbleSort(int *, int);
void printArray(int *,int);
int main() {
  int arr[] = {1, 5, 9, 6, 3, 2, 11, 2, 44, 55, 663, 33, 32, 1};
  bubbleSort(arr, sizeof(arr) / sizeof(*arr));
}

void bubbleSort(int arr[], int length) {
  bool flag = true;
  int i = 0;
  while (flag) {
    flag = false;
    for (int j = 1; j < length - i; j++) {
      if (arr[j - 1] > arr[j]) {
        int temp = arr[j];
        arr[j] = arr[j - 1];
        arr[j - 1] = temp;
        flag = true;
      }
    }
  }

  printArray(arr,length);
}

void printArray(int arr[],int length) {
  //int length = sizeof(arr) / sizeof(*arr);
  for (int j = 0; j < length; j++) {
    cout << arr[j] << "\t" ;
  }
  cout<<"\n";
}

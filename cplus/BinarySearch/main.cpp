#include <iostream>

using namespace std;
void binarySearch(int[], int, int);
int main() {
  int arr[] = {1, 55, 66, 99, 888, 4445};
  binarySearch(arr, sizeof(arr) / sizeof(*arr), 888);
}

void binarySearch(int arr[], int length, int number) {
  int start = 0;
  int high = length - 1;
  while (start <= high) {
    int mid = (start + high) / 2;
    if (arr[mid] == number) {
      cout << "Number is found " << mid << endl;
      return;
    } else if (arr[mid] < number) {
      start = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  cout << "Not Found" << endl;
  return;
}

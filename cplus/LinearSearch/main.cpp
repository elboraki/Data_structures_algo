#include <iostream>

using namespace std;
void linearSearch(int[], int, int);
int main() {
 // cout << "Hello World!" << endl;
  int arr[] = {1, 4, 3, 2, 9, 88, 7, 5, 23};
  int length = sizeof(arr) / sizeof(*arr);
 // cout << 'The number is found--->' + length << endl;
  linearSearch(arr, 88, length);
  return 0;
}

void linearSearch(int arr[], int number, int length) {

  for (int i = 0; i < length; i++) {
    if (arr[i] == number) {
      cout << "The number is found" << endl;
      return;
    }
  }
  cout << "Not Found" << endl;
}

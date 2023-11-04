
#include <iostream>

using namespace std;

int main() {
  int n;
  
  cin >> n;
  
  int arr[n];
  
  for(int NumberIndexInput = 0; NumberIndexInput < n; ++NumberIndexInput) {
    cin >> arr[NumberIndexInput];
  }
  for(int NumberIndexOutput = 0; NumberIndexOutput < n; ++NumberIndexOutput) {
    cout << arr[(n - 1) - NumberIndexOutput] << " ";
  }
  
  return 0;
}

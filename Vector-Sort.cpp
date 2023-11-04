
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  vector<int> Numbers;
  int n, x;
  
  cin >> n;
  
  for(int NumbersVectorInput = 0; NumbersVectorInput < n; ++NumbersVectorInput) {
    cin >> x;
    Numbers.push_back(x);
  }
  sort( Numbers.begin(), Numbers.end() );
  
  for(int NumbersVectorOutput = 0; NumbersVectorOutput < n; ++NumbersVectorOutput) {
    cout << Numbers[NumbersVectorOutput] << " ";
  }
  
  return 0;
}

#include <iostream>

using namespace std;

int MaxOfFour(double a, double b, double c, double d) {
  return max( max(a, b), max(c, d) );
}

int main() {
  double a, b, c, d;
  
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
    
  cout << MaxOfFour(a, b, c, d);
    
  return 0;
}

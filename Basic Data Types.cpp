
#include <cstdio>

using namespace std;

int main() {
  int a;
  long b;
  char ch;
  float f;
  double d;
  
  scanf("%d %ld %c %f %lf", &a, &b, &ch, &f, &d);
  
  printf("%d\n%ld\n%c\n%f\n%lf", a, b, ch, f, d);
  
  return 0;
}

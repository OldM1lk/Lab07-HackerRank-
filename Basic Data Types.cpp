
#include <cstdio>

using namespace std;

int main() {
  int a;
  long b;
  char ch;
  float f;
  double d;
  
  scanf("%d %ld %c %f %lf", &a, &b, &ch, &f, &d);
  
  printf("%d\n", a);
  printf("%ld\n", b);
  printf("%c\n", ch);
  printf("%f\n", f);
  printf("%lf", d);
  
  return 0;
}

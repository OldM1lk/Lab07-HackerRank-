
#include <stdio.h>
#include <math.h>

void update(int *a, int *b) {
  int temp1 = *a;
  int temp2 = *b;
  *a = temp1 + temp2;
  *b = abs(temp1 - temp2);
}

int main() {
  int a, b;
  
  scanf("%d %d", &a, &b);
  
  int *pa = &a;
  int *pb = &b;
  
  update(pa, pb);
  
  printf("%d\n%d", a, b);
  
  return 0;
}

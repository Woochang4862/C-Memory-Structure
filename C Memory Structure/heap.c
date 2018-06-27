#include <stdio.h>

int main() {
  // 정상적인 배열선언
  int arr[10];
  // 비 정상적인 배열선언
  int i = 0;
  scanf("%d", &i);
  int arr[i];
  return 0;
}

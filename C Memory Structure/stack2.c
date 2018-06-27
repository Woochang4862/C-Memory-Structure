#include <stdio.h>

void fct1(char, int);

int main() {
  char ch='A';
  fct1(ch, 3);
  return 0;
}

void fct1(char ch, int no) {
  if(a<=0) return;
  printf("%c\n", ch);
  no--;
  fct1(ch, no);
}

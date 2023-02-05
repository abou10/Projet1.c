#include <stdio.h>

void swap(int *a, int *b){
  int temp= *a;
  *a=*b;
  *b=temp;
}

int main(void) {
  int y=10;
  int h= 9;
  printf("avant y=%d et h =%d\n",y,h);
swap(&y,&h);
  printf("après y=%d et h=%d",y,h);

  return 0;
}
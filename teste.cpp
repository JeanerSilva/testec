#include<stdio.h>

static int function1 (int x);

int main(int argc, char const *argv[])
{
   int x = function1(4);
   int *p = &x;
   int a[2];
   a[0] = 4;
   a[1] = 9;

   printf("hello %d , %d, %d", *p, a[0], a[1]);
}

int function1 (int x) {
   return x;
}
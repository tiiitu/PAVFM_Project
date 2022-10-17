#include<stdio.h>

bool foo() {
  int *ptr = GetIntPtr();
  if (something)   {
    delete ptr;
  }
  if (!something) {
    delete ptr;
  }
}
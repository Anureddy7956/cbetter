#include<stdio.h>
int main(){
int Numbers[] = {25,89,564,34,234,745,50,75,100};
int length = sizeof(Numbers) / sizeof(Numbers[0]);
int i;

for (i = 0; i < length; i++) {
  printf("%d\n",Numbers[i]);
}
return 0;
}
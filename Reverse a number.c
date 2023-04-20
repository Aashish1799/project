#include <stdio.h>
int reverseNum(int *n){
      int t;
      t=*n;
      int rem, rev=0;
      while(t>0){
              rem-t%10;
              rev=rev*10 + rem;
              t/=10;
              return rev;
int main() {
int nl,a;
printf("Enter the digit: \n");
scanf("%d", &n1);
a=reverseNum(&n1);
printf("Reverse of the given digit is: ",a);"
return 0;

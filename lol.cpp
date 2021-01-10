#include <stdio.h.>
#include <string.h>

int main () {
 char a [] = "abcdefghijklmnopqrstuvwxyz";
 int b;
 int c;
 for (b=0;b<=25;++b){
	printf("\n");
  for  (c=0;c<=b;++c){
   printf("%c\n",a[c]);
  }
 }
}

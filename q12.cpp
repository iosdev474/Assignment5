#include <stdio.h>
#include <ctype.h>

int main () {
   int i = 0;
   char c;
   char str[100];
   char arr[100];
   gets(str);
   while(str[i]) {
      arr[i]=toupper(str[i]);
	  putchar (arr[i]);
      i++;
   }
   return 0;
}

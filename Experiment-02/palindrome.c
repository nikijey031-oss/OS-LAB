#include <stdio.h>
#include <string.h>
int main(){char s[100];int i,j,ok=1;printf("ENTER THE STRING TO CHECK PALINDROME: ");scanf("%99s",s);j=(int)strlen(s)-1;for(i=0;i<j;i++,j--)if(s[i]!=s[j]){ok=0;break;}printf("%s %s a palindrome\n",s,ok?"is":"is not");return 0;}
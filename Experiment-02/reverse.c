#include <stdio.h>
int main(){int n,r=0,d;printf("ENTER THE NUMBER: ");scanf("%d",&n);while(n){d=n%10;r=r*10+d;n/=10;}printf("REVERSE OF THE NUMBER IS %d\n",r);return 0;}
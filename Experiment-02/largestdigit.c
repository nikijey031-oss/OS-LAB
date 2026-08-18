#include <stdio.h>
int main(){int n,d,m=0;printf("ENTER THE NUMBER: ");scanf("%d",&n);while(n>0){d=n%10;if(d>m)m=d;n/=10;}printf("THE LARGEST DIGIT OF THE NUMBER: %d\n",m);return 0;}
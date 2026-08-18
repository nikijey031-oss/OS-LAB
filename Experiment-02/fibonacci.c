#include <stdio.h>
int main(){int n,i,a=0,b=1,c; printf("ENTER THE LIMIT: "); scanf("%d",&n); printf("FIBONACCI SERIES:\n"); for(i=1;i<=n;i++){c=a+b;printf("%d ",c);a=b;b=c;} printf("\n"); return 0;}
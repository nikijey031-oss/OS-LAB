#include <stdio.h>
int main(){int n,i; long long f=1; printf("ENTER THE NUMBER: "); scanf("%d",&n); for(i=1;i<=n;i++)f*=i; printf("FACTORIAL OF THE GIVEN NUMBER IS %lld\n",f); return 0;}
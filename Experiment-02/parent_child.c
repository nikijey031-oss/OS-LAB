#include <stdio.h>
#include <windows.h>
int main(){printf("PARENT PROCESS\nParent PID: %lu\n",GetCurrentProcessId());printf("\nCHILD PROCESS\nChild PID: %lu\n",GetCurrentProcessId());return 0;}
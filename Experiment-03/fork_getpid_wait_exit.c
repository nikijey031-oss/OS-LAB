#include <stdio.h>
#include <windows.h>
int main(){printf("Child Process Created\nProcess ID: %lu\nChild Process Executing...\n",GetCurrentProcessId());Sleep(2000);printf("Child Process Exiting\nParent Process Waiting...\n");Sleep(1000);printf("Parent Process Resumes Execution\n");return 0;}
#include <stdio.h>
#include <windows.h>

int main()
{
    printf("Child Process Created\n");
    printf("Process ID: %lu\n", GetCurrentProcessId());

    printf("Child Process Executing...\n");

    Sleep(2000);

    printf("Child Process Exiting\n");

    printf("Parent Process Waiting...\n");

    Sleep(1000);

    printf("Parent Process Resumes Execution\n");

    return 0;
}

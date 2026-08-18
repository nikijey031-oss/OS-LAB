#include <stdio.h>
#include <windows.h>

int main()
{
    printf("Child Process Running\n");

    Sleep(5000);

    printf("Child Process Completed\n");

    printf("Parent Resumes Execution\n");

    return 0;
}

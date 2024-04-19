#include <stdio.h>
#include "helpers/vector.h"
#include "compiler.h"

int main()
{
    int res = compile_file("./test.c", "./test", 0);
    if (res == COMPILER_FILE_COMPILED_OK)
    {
        printf("Everything ok");
    } else if (res == COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Compile failed");
    } else
    {
        printf("Unknown response");
    }

    return 0;
}
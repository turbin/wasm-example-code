#include "export2js.h"
#include <stdlib.h>
#include <stdio.h>


#define CALL_TRACE(...) do{printf("[@F=%s, ln=%d]:",__FUNCTION__,__LINE__);printf(__VA_ARGS__); printf("\n");}while(0)
int tmpfile_open(const char* fileName)
{
    CALL_TRACE("file name=%s", fileName);
    return 1;
}

int tmpfile_write(int, const char* data)
{
    CALL_TRACE("call =%s", "write");

    return 1;
}

int tmpfile_close(int fd)
{
    CALL_TRACE("call =%s", "close");
    return 0;
}
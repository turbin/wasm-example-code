#ifndef EXPORT_2_JS_H
#define EXPORT_2_JS_H

#ifndef EM_PORT_API
#   if defined(__EMSCRIPTEN__)
#       include <emscripten.h>
#       if defined(__cplusplus)
#           define EM_PORT_API(rettype) extern "C" rettype EMSCRIPTEN_KEEPALIVE
#       else
#           define EM_PORT_API(rettype) rettype EMSCRIPTEN_KEEPALIVE
#       endif
#   else
#       if defined(__cplusplus)
#           define EM_PORT_API(rettype) extern "C" rettype 
#       else
#           define EM_PORT_API(rettype) rettype
#       endif
#   endif
#endif

EM_PORT_API(int)    tmpfile_open(const char* fileName);
EM_PORT_API(int)    tmpfile_write(int, const char* data);
EM_PORT_API(int)    tmpfile_close(int fd);


#endif
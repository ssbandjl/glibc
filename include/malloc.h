#ifndef _MALLOC_H

#include <malloc/malloc.h>

# ifndef _ISOMAC
#  include <rtld-malloc.h>

struct malloc_state;
// 声明了一个结构体一个指针
typedef struct malloc_state *mstate;

# endif /* !_ISOMAC */

#endif

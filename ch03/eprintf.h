/* eprintf.h: error wrapper functions */
#include <stdlib.h>

extern void eprintf(char *, ...);
extern char *estrdup(char *);
extern void *emalloc(size_t);
extern char *progname(void);
extern void setprogname(char *);

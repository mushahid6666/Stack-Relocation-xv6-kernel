#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
int
main(int argc, char *argv[])
{
	 char *p = (char *)((640 *1024)-(5*4096));
	 printf(1,"addr of p:%s\n",*p);
      exit();

}

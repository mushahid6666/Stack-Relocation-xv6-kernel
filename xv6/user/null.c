#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"


int
main(int argc, char *argv[])
{
	char *path =NULL;
	printf(1,"%s",*path);//should cause segfault
		exit();
}

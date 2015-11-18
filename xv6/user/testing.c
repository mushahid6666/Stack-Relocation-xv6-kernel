#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
int count=9000;
void foo(){
 count--;
 if(count!=0)
 	foo();
}

int
main(int argc, char *argv[])
{

	int *a = (int *)malloc( 644900);
 	if(a==NULL)
		 printf(1,"allocation failed\n");
	*a = 10;
 	printf(1,"a = %d\n",*a);
	foo();
  	exit();
}

#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int
main(int argc, char *argv[])
{
	int i;
	for(i=0;i<10;i++){
	int *a = (int *)malloc(sizeof(int));
 	if(a==NULL)
		 printf(1,"allocation failed\n");
	*a = 10;
 	printf(1,"value of var %d = %d address =%d\n",i+1,*a,a);
	}
  	exit();
}

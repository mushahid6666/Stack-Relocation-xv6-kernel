#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
int count=10;

void foo(){
  count--;
 if(count>0)
	foo();
}
int
main(int argc, char *argv[])
{
  int *a = (int*)malloc(300*sizeof(int));
  //char *a=(char*)(18125;
   //printf(1,"%d",*a);
   *a=25;
   //foo();
	exit();
}

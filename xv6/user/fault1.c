#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"


int
main(int argc, char *argv[])
{
  
 //char *p = (char *)((640 *1024)-4096);
 char *p = (char *)((640 *1024)-(2*4096));
 printf(1,"addr of p:%d\n",p);
 printf(1,"val =%d",*p);
 /* *p = 'a';
  int a =10;
   printf(1,"adress of a %d\n",&a);
 
  int rc = fork();
  if(rc ==0){
   printf(1,"child %c\n",*p);
  }
  else if(rc>0) {
    (void)wait();
    printf(1," parent %c\n",*p);
  }
  else {
    printf(1,"failed everything \n");
  }*/
   exit();
}

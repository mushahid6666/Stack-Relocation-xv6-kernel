#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int  A(int temp){
	if(temp==10){
		printf(1,"parameter passed to A = %d address of parameter =%d\n",temp,&temp);
	}

	printf(1,"checking address of local variables in func \n");
	int a=10;
	int b=20;
	int d=30;
	 printf(1,"address of value returned by var a = %d\n",&a);
	 printf(1,"address of value returned by var b= %d\n",&b);
	 printf(1,"address of value returned by var d = %d\n",&d);

	 printf(1,"allocating array variables and checking address \n");
	 int i;
	 int c[10];
	 	 	for(i=0;i<10;i++)
	 	 		c[i]=i;
	 	 	for(i=0;i<10;i++)
	 	 				printf(1,"c[%d]=%d,address = %d\n",i,c[i],&c[i]);

	return temp+1;
}

int
main(int argc, char *argv[])
{
 int temp =A(10);
 if(temp==11){
	 printf(1,"Value returned by function A to main = %d\n",temp);
 }

  exit();
}

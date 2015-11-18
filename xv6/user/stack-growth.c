#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

void C();
void D();
void B();
void  A(){
	int a[300];
	int i;
	for(i=0;i<300;i++)
		a[i]=i;

	B();
	for(i=0;i<300;i++)
							printf(1,"address of a[%d]=%d\n",i,&a[i]);
	return;
}

void  B(){
	int b[300];
	int i;
	for(i=0;i<300;i++)
		b[i]=i;

	C();
	for(i=0;i<300;i++)
						printf(1,"address of b[%d]=%d\n",i,&b[i]);
	return;
}

void  C(){
	int c[300];
	int i;
	for(i=0;i<300;i++)
		c[i]=i;

	D();
	for(i=0;i<300;i++)
							printf(1,"address of c[%d]=%d\n",i,&c[i]);
	return;
}

void  D(){
	int d[300];
	int i;
	for(i=0;i<300;i++)
		d[i]=i;
	for(i=0;i<300;i++)
							printf(1,"address of d[%d]=%d\n",i,&d[i]);
	return;
}



/*void overflow_stack(){
	int a[1024];
	int i;
	for(i=0;i<1024;i++)
		a[i] = i;
	int b[1024];

	for(i=0;i<1024;i++)
			b[i] = i;
	for(i=0;i<1024;i++)
			printf(1,"addr-%d val-%d,",&b[i],b[i]);
	printf(1,"\n");
	printf(1,"\n");
	for(i=0;i<1024;i++)
				printf(1,"addr-%d val-%d,",&a[i],a[i]);

}*/

int
main(int argc, char *argv[])
{
	A();
  exit();
}

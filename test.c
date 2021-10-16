#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include  "unistd.h"
#include "stdbool.h"

int main(int args ,const char *argv[])
{
	//printf("%s\r\n",__func__);
	//system("mnt/d/workroot/linux/hello/hello");
	//system("ls -al /etc");
	
FILE * fp;
char buffer[1024];
//fp=popen("cat /mnt/d/workroot/linux/hello/test.c","r");
fp=popen("/mnt/d/workroot/linux/hello/hello","r");
fgets(buffer,sizeof(buffer),fp);
printf("%s",buffer);
pclose(fp);
	
return 0;
}
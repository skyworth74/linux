#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include  "unistd.h"
#include "stdbool.h"
#include "misc/hap.h"
int main(int args ,const char *argv[])
{
	char *dest=NULL;
	char src[]="12345	";
	printf("%s %d\r\n",__func__,__LINE__);
	dest=(char *)malloc(100);
	serial_char(dest, src,strlen(src));
	printf("%s\r\n",dest);
	free(dest);
	dest=NULL;
	
	return 0;
}
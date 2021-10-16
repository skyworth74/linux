#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include  "unistd.h"
#include "stdbool.h"

int serial_char(char *dest,char *src,unsigned int lens)
{
	if (NULL==dest||NULL==src){
		return -1;
	}
	while(lens){
	    if (0x0a==*src||0x0d==*src||0x09==*src){
             src++; 
		}else{
            *dest=*src;
			src++;
			dest++;
		}      		
		lens--;
		
	}
	*src='\0';
	
	return 0;
}
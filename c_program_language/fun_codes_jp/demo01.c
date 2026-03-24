/*
   demical
   hex
   binary
   all are return-word character
 */
/*
   1.loop increase 
   2.get the number's dem/hex/bin string
   3.compare the string element i and length -i
   if not equal,skip
   if all equal,compare dem/hex/bin string
   4.if all equal,return the number
 */

#include <stdio.h>
#include "../pub_lib.c"
#include <math.h>
#include <stdlib.h>

int main()
{
	int num,maxlen,demFlag,binFlag,hexFlag,octFlag;
	int demical,binary,hexademical,octal;
	char *demStr,*binStr,*hexStr,*octStr;
	demical=10;
	binary=2;
	hexademical=16;
	octal=8;

	maxlen=30;

	for (int num=101;num<=1000;num++)
	{
		demStr=numToStr(num,maxlen,demical);
		demFlag=judgeRt(demStr,strlen(demStr));
		
		binStr=numToStr(num,maxlen,binary);
		binFlag=judgeRt(binStr,strlen(binStr));

		octStr=numToStr(num,maxlen,octal);
		octFlag=judgeRt(octStr,strlen(octStr));	
		
		if( (demFlag==1) && (binFlag==1) && (octFlag==1))
			printf("%s is true(dem is %s,bin is %s,oct is %s)\n",demStr,demStr,binStr,octStr);	
		//printf("dem is %s,demFlag is %d, bin is %s, binFlag is %d,oct is %s,octFlag is %d\n",demStr,demFlag,binStr,binFlag, octStr,octFlag);	
	}
}




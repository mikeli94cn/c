#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
desc:judge an integer whether prime or not,print result on the console.
argv:pass an integer
return: 0:prime 1:composite -1:invalid input
*/
/*
int judgePrimeLoop(int num)
{
    int upper,lower,prime,composite;
    char flag;
    prime=0;
    composite=1;
	//prime is cannot be divide by numbers except 1 and itself. 
    upper= floor(sqrt((double)num));       
    //so number  is [2,sqrt(num)] , the biggest should not beyond sqrt(num)
    lower=2;                              
	//default flag is prime. if exists i can be divided by num,
	//then num is composite, flag change to composite.
    flag=prime;                             
    if(num<=0)
		//invalid input,please input a positive integer
        return -1;                              
    else
    {    
        for(int i=lower;i<=upper;i++)   //upper from 2 to sqrt(num)               
        {
            if(num%i==0)                //judge i whether can be divided by num
            {
                flag=composite;         //if divided, num is composite
                break;
            }
        }
        if(flag==prime)
            return 0;                   //prime
        else
            return 1;                   //composite              
    }
}
*/

char * numToStr(int num,int maxlen,int numRep)
{
	char *str;
	str=malloc(maxlen+1);

	for(int i=1;i<=maxlen+1;i++)
		*(str+i-1)='\0';
	
	int len=1;
	while(1==1)
	{
		if(num%numRep<=9)
			*(str+len-1)='0'+num%numRep;
		else
			*(str+len-1)='A'+num%numRep-10;
		num=num/numRep;
		if(num!=0)
			len++;
		else
			break;
	}
	
	/* reverse string*/
	for(int i=1;i<=len/2;i++)
	{
		
		//elem i exchange with elem len+1-i
		//index i-1 exchange with index len-i
		int tmp=*(str+i-1);
		*(str+i-1)=*(str+len-i);
		*(str+len-i)=tmp;
	}
	return str;
}

int judgeRt(char * str,int len)
{
	//judge return
	int flag=1;			//1:true
	for(int i=1;i<=len/2;i++)
	{
		if( *(str+i-1) !=*(str+len-i) )
		{
			flag=0;
			break;
		}
	}
	return flag;
}


/*
desc: exchange the char and its opposite position char in a char_array;
      regard as precursor of exch(char ch_arr[],int len) 
argv: char ch_arr[]: char array need to exchange position ;int len: length of ch_arr[];
      int position: the position element need to exchange position(start from 1)
return: null
*/
void exch_char(char ch_arr[],int len,int postion)
{
    char tmp=ch_arr[postion-1];
    ch_arr[postion-1]=ch_arr[len-postion];
    ch_arr[len-postion]=tmp;
}

/*
desc: reverse a char array
argv: char ch_arr[]: char array need to reverse ;int len: length of ch_arr[];
return: null
*/
void exch(char ch_arr[],int len) 
{
	for(int i=1;i<=len/2;i++)
	{
	    char tmp=ch_arr[i-1];
    	ch_arr[i-1]=ch_arr[len-i];
    	ch_arr[len-i]=tmp;

	}
}

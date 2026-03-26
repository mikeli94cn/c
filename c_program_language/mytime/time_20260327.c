#include <time.h>
#include <stdio.h>

int main(){
    time_t ts;  
    time(&ts);  //ts
    printf("timestamp is %lld\n",(long long)ts);    //print ts
    
    struct tm* tm_now;
    tm_now=localtime(&ts);  //tm
    char t_now_fmt[100];
    strftime(t_now_fmt,sizeof(t_now_fmt),"%Y-%m-%d %H:%M:%S %p %a %Z",tm_now);  //print tm
    printf("%s\n",t_now_fmt);
   
    ts=0;
    printf("ts now is %lld\n",(long long)ts);
    ts=mktime(tm_now);
    printf("tm_now convert into ts is %lld\n",(long long)ts);



}

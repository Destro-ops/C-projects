#include<stdio.h>
#include<time.h>
int main(){
    struct tm *current_time;
    char buffertime[50];
    time_t rawtime;
    time(&rawtime);
    char *string=ctime(&rawtime);
    current_time=localtime(&rawtime);
    strftime(buffertime,sizeof(buffertime),"%I:%M:%S",current_time);
    printf("%s",buffertime);

}
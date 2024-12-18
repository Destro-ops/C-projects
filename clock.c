#include<stdio.h>
#include<time.h>
int main(){
    time_t rawtime;
    time(&rawtime);
    char *string=ctime(&rawtime);
    printf("%s",string);

}
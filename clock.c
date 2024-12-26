#include<stdio.h>
#include<time.h>
#include"unistd.h"



void clear_screen(){
    #ifdef _WIN32
    system("cls");
    #endif
}

void get_time(char buffertime[50],int format){
      struct tm *current_time;
   
    time_t rawtime;
    time(&rawtime);
    if(format==1){ 
    current_time=localtime(&rawtime);
    strftime(buffertime,50,"%H:%M:%S",current_time);
    printf("%s",buffertime);
    }
    else {
        current_time=localtime(&rawtime);
    strftime(buffertime,50,"%I:%M:%S %p",current_time);
    
    }
}
void get_date(char buffer[50]){
    time_t rawtime;
    time(&rawtime);
    struct tm *current_time;
    current_time=localtime(&rawtime);
    strftime(buffer,50,"%A %B %d %Y",current_time);
   
}

int get_format(int format){
    
   printf("1. for 24 hour clock");
    printf("\n2.(default) for 12 hour clock");
    printf("\nenter format for time: ");
    printf("\n");
    scanf("%d", &format); 
    return format;
}
    

int main(){
    char buffer[50],buffer_date[50];
    int format;
    int x = get_format(format);
     
    while(1){ 
     get_time(buffer,x);
     printf("\n");
     get_date(buffer_date);
     clear_screen();
     printf("TIME: %s\t",buffer);
     printf("\n");
     printf("DATE: %s",buffer_date);
     //system("cls");
     sleep(1);
    }
}
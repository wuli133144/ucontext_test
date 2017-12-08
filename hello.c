/*************************************************************************
	> File Name: hello.c
	> Author: 
	> Mail: 
	> Created Time: 2017年12月08日 星期五 14时18分49秒
 ************************************************************************/

#include<stdio.h>



#include <ucontext.h>
#include <unistd.h>



int main(){
    
    ucontext_t context;
    getcontext(&context);
    puts("hello world");
    sleep(1);

    setcontext(&context);
    

    return 0;
}

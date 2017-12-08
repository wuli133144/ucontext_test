/*************************************************************************
	> File Name: circle.c
	> Author: 
	> Mail: 
	> Created Time: 2017年12月08日 星期五 14时14分27秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>

void p(){
    fprintf(stdout,"%s",">>>p>>>\n");
    q();

}


void q(){
   
   fprintf(stdout,"%s",">>>q>>>\n");
   p();

}


int main(void ){
  
    p();



 return 0;
}

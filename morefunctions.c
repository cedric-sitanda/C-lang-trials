#include<stdio.h>

     int function(int,int)   ;
 
        int main(){
            int result=function(5,4);
            printf("result is: %d",result);
        }

//this program declares a function but defines it later after main 
    int function(int x,int y){
        return x+y;
    }
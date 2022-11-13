#include<stdio.h>
int main(){

int age=25;
int* ptr=&age;


printf("%p\n",&age);//memory adres of the variable 
printf("%d",*ptr);//value of age
printf("%p",*ptr);//donno what this is


}//%d age will print the value of the variable directly
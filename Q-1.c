//Q.1 Alphabet Skipper
//Develop a program that prints all alphabets from 'a' to 'z' by skipping 3 alphabets using a do-while loop.


#include<stdio.h>

void main(){
        
char i='a';
        printf("\n this loop is printed by do while loop.....\n");
        do
        {
            
           printf("  %c ",i);
           i+=4;
        } while (i<='z');
        
}
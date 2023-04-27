// Online C compiler to run C program online
#include <stdio.h>
/*
Lab 1:
Write a C program where you define and call a function named (getMax) that (takes 3 values) as an input and (returns) the (greatest) of them.
*/
int getMax (int a, int b, int c);	//my prototype

int main() {
    // Write C code here
    int x = 5;
    int y = 7;
    int z = 3;
    
    int max = getMax(x,y,z);	//function call
    
    printf("The max is : %d" , max);

    return 0;
}

/* 
Function Structure
1. input
2. output
3. function name
4. function body
*/

int getMax (int a, int b, int c)
{
    int out;

    // printf( "a=%d , b=%d , c=%d\n", a, b, c);
	// a = 5 ,  b = 7 , c = 3
    // 5 > 7   &&   5 > 3
    
    if( (a > b) && (a > c) ) //a is bigger
    {
        out = a; 
    }
    else if( b > c )
    {
        out = b;
    }
    else
    {
        out = c;
    }
    
	//remember our logical error	return a; instead of return out;
    return out;
}

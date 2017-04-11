/*
A pointer in C is a way to share a memory address among different contexts (primarily functions). 
They are primarily used whenever a function needs to modify the content of a variable, of which it doesn't have ownership.

https://www.hackerrank.com/challenges/c-tutorial-pointer

You have to complete the function void update(int *a,int *b), which reads two integers as argument, 
and sets a with the sum of them, 
and b with the absolute difference of them. 

Input Format
Input will contain two integers,  and , separated by a newline.

Output Format
You have to print the updated value of  and , on two different lines.

P.S.: Input/ouput will be automatically handled. You only have to complete the void update(int *a,int *b) function.
*/

#include <iostream>
using namespace std;
void update(int *a,int *b) {
    // Complete this function 
    int c,d,sum,abs; 
    c = *a;   
    d = *b; 
    sum = c+d;
    abs= c-d;
    if(abs <0) 
        abs=-abs;
    *a = sum;
    *b = abs;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    //scanf("%d %d", &a, &b);
    update(pa, pb);
    //printf("%d\n%d", a, b);
    cout<<a<<endl<<b;
    return 0;
}
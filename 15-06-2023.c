QUESTION:

The program must accept two string values $1 and $2 as the input. The program
must print the first character in S1, then the program must print the second
character in S2, then the program must print the third character in $1, then the
program must print the fourth character in 52 and so on.

Note: Both the string values are always having the same length.

Boundary Condition(s):
1 <= Length of $1 and S2 <= 100

Input Format:
The first line contains the string S1.
The second line contains the string S2.

Output Format:
The first line contains the modified string.

Example Input/Output 1:
Input:
lemon
apple

Output:
Ipmi

ANSWER:

#include<stdio.h>
#include<stdlib.h>
int main() {
char s[100],c[100]; 
scanf("%s %s",s,c); 
int f=0,l=strlen(s); 
for(int i=0;i<l;i++){
    if(f==0){
        printf("%c",s[i]);
        f=1;
    }else{
        printf("%c",c[i]);
        f=0;
    }
}
}


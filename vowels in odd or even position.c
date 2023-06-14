QUESTION :

The program must accept a string value $ as the input. The program must print the characters which are present at the odd positions if the count of vowels in S is odd. Else the program must print the characters which are present at the even positions as the output. If there is no vowel in the string S then the program must print -1 as the output.
Boundary Condition(s):
2 <= Length of S <= 100
Input Format:
The first line contains the string S.
Output Format:
The first line contains either the characters which are present at the odd or even positions or -1.
Example Input/Output 1:
Input:
apple
Output: pl

ANSWER IN C:

#include<stdio.h>
#include<stdlib.h>
int main()
{
char s[101];
scanf("%s",s);
for(int i=0;i<l;i++)
char d=tolower(s[i]);
int c=0,1=strlen(s);
{
if(d=='a'||d=='e' | |d=='i' | | d=='o'||d=='u')
{
C++;
}
}
int i=0;
if(c%2==0&&c!=0)
{
i=i+1;
}if(c==0)
{
printf("-1");
}
else
{
for(int j=i;j<1;j=j+2)
{
printf("%c",s[j]);
}
 }


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int iValue=0;
    double iValue2=0.0;
    char str[100];
    scanf("%d %lf %[^\n]",&iValue,&iValue2,str);
   printf("%d\n",i+iValue);
   printf("%0.1lf\n",d+iValue2);
   printf("%s%s",s,str);
   
    return 0;
}

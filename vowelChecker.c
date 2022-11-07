#include <stdio.h>

int main()
{
char name[100];
int count=0;
printf("Enter your name and see how many vowels  in your name: ");
gets(name);



for (int i=0;name[i]!='\0';i++){

    if(name[i]=='a'|| name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A'|| name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U'){


        count++;
    }
}
printf("%d vowel in your name",count);



    return 0;
}

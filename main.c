#include <stdio.h>
#include <string.h>
int main() {
    printf("Let's talk\n");
    char userinp[100];
    gets(userinp);
    printf("%s to you too. What's your name?\n", userinp);
    char name[20];

    scanf("%s",name);
    if(strcmp(name,"Link")==0)
        printf("It's dangerous to go alone. Take this: c=|==>.\n");
    if(strcmp(name,"Mario")==0)
        printf("Your princess is in another castle.\n");
    if(strcmp(name,"Kirby")==0)
        printf("Poyo.\n");
    printf("Oh hi, %s. How old are you.\n",name);
    int age;
    scanf("%d",&age);
    printf("Wow. %d is quite something.\nWhat fruit do you like.",age);
    int c;
    while((c= getchar()) != '\n' && c != EOF);
    gets(userinp);
    printf("I see. I heard %s is a healty food.\nWhere do you live?(Coutry)\n", userinp);
    char country[25];
    gets(country);
    printf("I haven't been to %s, mostly because I don't have legs.\nHow many brothers and sisters do you have?\n", country);
    int nr;
    scanf("%d",&nr);
    if(nr==0)
        printf("Wow, %d, you must be very lucky.\n",nr);
    else
        printf("I don't think I could've lived with %d brothers and sisters.\n",nr);
    printf("Can you tell my name?\n");
    char cname[100];
    while((c= getchar()) != '\n' && c != EOF);
    gets(cname);
    printf("So, my name is %s and I talk with %s, who is %d years old and lives in %d.", cname,name,age,country);
    return 0;
}
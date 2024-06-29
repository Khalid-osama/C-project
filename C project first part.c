#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
/*int main()
{
    char a ='C';
    char b[]= "hi my name is khalid";
    double GPA=6.1;
    unsigned int age=100000;
    bool e= false;
    char v= -120;
    short int num= 30000;
    unsigned long long int numm =900000000 ;
    //printf("%c,welcome, your GPA is %0.1lf\n",a,GPA);
    //printf("%s,welcome,ur age is %i\n",b,age);
    //printf("%d",e);
    printf("%llu",numm);
    return 0;
}
*/
/*int main(){
  const double inin=33.3;
  int x= 6;
  int z= 5;
  x--;
  printf("%d",x);
    return 0;
}*/
/*int main(){
    int x=10;
    x%=5;
    printf("%d",x);
    return 0;
}*/
/*int main(){
   int age;
    printf("How old are you? ");
    scanf("%d",&age);
    printf("you are %d years old",age);
    return 0;
}*/
/*int main(){
    char name[10];
    printf("what is your name? ");
    scanf("%s",&name);
    printf("ur name is %s",name);
    return 0;

}*/
/*int main(){
    char name[30];
    int age;
    double GPA;
    printf("what is your name? ");
    fgets(name,30,stdin);
    name[strlen(name)-1]='\0';
    printf("How old are you? ");
    scanf("%d",&age);
    printf("what is ur GPA? ");
    scanf("%lf",&GPA);
    printf("Hello %s ur age is %d and ur GPA is %.3lf",name,age,GPA);
    return 0;
}*/

/*int main(){
    int a = round(4.14);
    double v = sqrt(9);
    double c = pow(2,5);
    int dd = floor(4.33);
    int d= fabs(-1222);
    printf("%lf\n",v);
    printf("%lf\n",c);
    printf("%d",d);
    return 0;
}*/
/*int main(){
    int age;
    printf("Enter ur age please: ");
    scanf("%d",&age);
    if(age >= 18){
        printf("you are signed up");
    }
    else if(age <=0){
        printf("you haven't been born yet or you have died sadly");
    }
    else{
        printf("you are too young to sign up");
    }
    return 0;
}*/
/*int main(){
    char grade;
    printf("please enter ur grade: ");
    scanf("%c",&grade);
    switch(grade){
        case 'A':
            printf("prefect\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Not bad kid\n");
            break;
        case 'D':
            printf("better luck next time\n");
            break;
        case 'F':
            printf("you failed\n");
            break;
        default:
        printf("please enter a vaild grade");

    }
    return 0;
}*/
/*int main(){
    char unit;
    double temp;
    printf("Is the temp in (F) or (C): ");
    scanf("%c",&unit);
    unit = toupper(unit);
    if(unit == 'C'){
        printf("Enter temp in Celsius: ");
        scanf("%lf",&temp);
        temp=(temp*9/5)+32;
        printf("Temp in farenheit is: %.1lf",temp);
    }
    else if (unit == 'F'){
        printf("Enter temp in farenheit: ");
        scanf("%lf",&temp);
        temp=((temp-32)*5)/9;
        printf("Temp in farenheit is: %.1lf",temp);
    }
    else{
        printf("%c is not a vaild unit of measurment", unit);
    }
    return 0;
} */

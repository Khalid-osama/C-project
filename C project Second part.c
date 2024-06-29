#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

/*int main(){
    double temp = 15;
    if(temp > 0 && temp <= 30){
        printf("the weather is good my friend don't worry");
    }
    else{
        printf("the weather is not bad trust me");
    }
    return 0;
}*/

/*int main(){
    double temp = -1;
    if(temp > 0 || temp <= 30){
        printf("the weather is good my friend don't worry");
    }
    else{
        printf("the weather is not bad trust me");
    }
    return 0;
}*/
/*int main(){
    bool sunny = false;
    if (!sunny){
        printf("It's cloudy and howdie!");
    }
    else{
        printf("It's sunny outside my friend!");
    }
    return 0;
}*/
/*void threaten(char name[],int age){
    printf("Hi my name is %s\n",name);
    printf("My age is %d",age);
}

int main(){
    char name[]="khalid";
    int age = 18;
    threaten(name,age);
    return 0;
}
*/

/*void threaten(char x[],int y){
    printf("Hi my name is %s\n",x);
    printf("My age is %d",y);
}

int main(){
    char name[]="khalid";
    int age = 18;
    threaten(name,age);
    return 0;
}
*/

/*double square(double x){
    return  x*x ;
}

int main(){
    double x = square(34.14);
    printf("%lf",x);

    return 0;

}*/
/*int findmax(int x, int y){
    return (x>y) ? x:y;
}
int main(){
    int max = findmax(7,4);
    printf("%d",max);
    return 0;
}
*/
/*void hello(char[], int);
int main()
{
    char name[] = "khalid";
    int age = 18;
    hello(name, age);
    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s\nyou are %d years old", name, age);
}*/
// importnant
/*int main()
{
    char firstname[] = "Khalid";
    char secondname[] = "Osama";
    //strlwr(firstname);
    //strupr(firstname);
    //strcat(firstname,secondname);
    //strncat(firstname,secondname,2);
   //strcpy(firstname,secondname);
    //strncpy(firstname,secondname,1);
    //strset(firstname,3);
    //strnset(secondname,4,2);
    //strrev(firstname);
    //int result = strlen(firstname);
    int result = strcmp(firstname,secondname);

    printf("%d",result);
}*/

/*int main()
{
    for(int i=10;i>=1;i-=2)
    {
        printf("%d\n",i);
    }
    return 0;
}*/
/*int main()
{
    char name[25];
    printf("what is ur name sir? ");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';
   while(strlen(name)==0){
    printf("you didn't enter ur name sir\n");
    printf("what is ur name sir? ");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';

   }

    printf("Hello %s",name);
    return 0;
}*/
/*int main()
{
    int number =0;
    int sum =0;

    do{
        printf("please enter a number bigger than 0: ");
        scanf("%d",&number);
        if (number > 0)
        {
            sum+=number;
        }

    }while (number>0);
    printf("sum: %d",sum);
    return 0;
}*/

/*int main()
{
    int bkam[5]; //if you don't want to assign any numbers now you can insiliaze it
    bkam[0]=1; // [index of element in array]
    int prices[]={5,3,1,2,34,4}; // array, array has fixed size
    printf("$%d",prices[2]); // slicing
    return 0;
}*/
/*int main(){
    int prices[]={2,1,4,5,3,2,7};
    for(int i = 0;i < sizeof(prices)/sizeof(prices[0]);i++)
    {
        printf("%d\n",prices[i]);
    }
    return 0;
}*/
// important++
/*int main()
{
    double prices[]={23.0,35.0,11.0,33.0,15.0,16.2};
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]);i++)
    {
        printf("$%.2lf\n",prices[i]);
    }
    return 0;
}*/
// important++
/*int main()
{

    int num[][3] = {{1, 2, 3},{7,8,9}}; // first [optional to assign number of rows]
    int rows = sizeof(num) / sizeof(num[0]);
    int columns = sizeof(num[0]) / sizeof(num[0][0]);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
}*/
/*int main()
{
    int prices[7];
    prices[0]=1;
    prices[1]=2;
    prices[2]=4;
    prices[3]=5;
    prices[4]=6;
    prices[5]=7;
    prices[6]=9;
    for(int i = 0; i< sizeof(prices)/sizeof(prices[0]);i++)
    {
        printf("$%d\n",prices[i]);
    }
    return 0;
}*/
/*int main(){
    char cars[][10]={"mustang","corvette","telsa"};
    strcpy(cars[0],"camaro");
    for(int i = 0 ; i < sizeof(cars)/sizeof(cars[0]);i++)
    {
        printf("%s\n",cars[i]);
    }
    return 0;
}*/
// int main()
//{
/*char x = 'X';
char y = 'Y';
char temp;
temp = x;
x = y;
y = temp;*/
/*char x[]="water";
char y[]="mango";
char temp[15];
strcpy(temp,x);
strcpy(x,y);
strcpy(y,temp);
printf("x = %s\n",x);
printf("y = %s\n",y);
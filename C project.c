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
// first program
/*int main(){
    const double PI=3.14159;
    double raduis;
    double cirum;
    double area;
    printf("\nEneter the radius of circle: ");
    scanf("%lf",&raduis);
    cirum= 2*PI*raduis;
    area= PI*pow(raduis,2);
    printf("circumfernce: %lf\n", cirum);
    printf("area: %lf\n", area);

    return 0;
}*/
// second program
/*int main(){
    double A;
    double B;
    double C;
    printf("Enter side A: ");
    scanf("%lf",&A);
    printf("Enter side B: ");
    scanf("%lf",&B);
    C=sqrt(pow(A,2)+pow(B,2));
    printf("Side C: %lf",C);
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


return 0;
}*/
// project++
// array sort (ascending)
/*void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
}
void printarray(int array[], int size)
{
    for(int i = 0; i < size ;i++)
    {
        printf("%d ",array[i]);
    }
}
int main()
{
    int array[] = {9, 2, 4, 6, 7, 3, 5, 1, 0, 8};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printarray(array,size);
    return 0;
}*/
// array sort (descindig)
/*void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
}
void printarray(int array[], int size)
{
    for(int i = 0; i < size ;i++)
    {
        printf("%d ",array[i]);
    }
}
int main()
{
    int array[] = {9, 2, 4, 6, 7, 3, 5, 1, 0, 8};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printarray(array,size);
    return 0;
}*/
// array sort (characters)
/*void sort(char array[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
}
void printarray(char array[], int size)
{
    for(int i = 0; i < size ;i++)
    {
        printf("%c ",array[i]);
    }
}
int main()
{
    char array[] = {'a','d','e','y','k','f'};
    int size = sizeof(array) / sizeof(array[0]);
    sort(array, size);
    printarray(array,size);
    return 0;
}*/

/*struct player
{
    char name[12];
    int score;
};

int main()
{   struct player player1;
    struct player player2;
    strcpy(player1.name,"Khalid"); // (.) is a member access operator
    player1.score = 3;
    strcpy(player1.name,"NIezigle"); // (.) is a member access operator
    player2.score=2;
    return 0;
}*/
/*typedef struct
{
    char name[24];
    char password[12];
    int id;
}user;

int main()
{
   user User1={"khalid osama","pass123",12345};
   user User2={"khalid osama","dass34123",56474};
    printf("%s\n",User1.name);
    printf("%s\n",User1.password);
    printf("%d\n",User1.id);
}
*/
/*typedef struct
{
    char Name[25];
    double GPA;
} School;

int main()
{
    School student1 = {"khalid osama", 3.2};
    School student2 = {"spedd", 4.2};
    School student3 = {"Hosam", 1.2};
    School student4 = {"mahmoud", 3.0};
    School students[]= {student1,student2,student3,student4};
    for(int i = 0 ; i < sizeof(students)/sizeof(students[0]);i++)
    {
        printf("%-12s\t",students[i].Name);
        printf("%.2lf\n",students[i].GPA);
    }
    return 0;

}*/

/*enum day
{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};
int main()
{
    enum day today = Sun;

    if (today == Sun || today == Sat)
        ;
    {
        printf("ohhhhhh yeahhhhh!!! vecation time MF!!!!!");
    }
    else
    {
        printf("FUCK");
    }
}*/

/*int main()
{
    const int MIN = 1;
    const int MAX = 200;
    int guess;
    int guesses;
    int answer;
    srand(time(0));
    answer = (rand() % MAX) + MIN;
    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!!!\n");
        }
        else
        {
            printf("Correct!!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("*********************\n");
    printf("answer: %d\n", answer);
    printf("guesess: %d\n", guesses);
    printf("*********************\n");
    return 0;
}*/
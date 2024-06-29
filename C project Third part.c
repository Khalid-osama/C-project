#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
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
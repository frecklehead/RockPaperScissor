#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int spr(char ch, char val)
{
    if (ch == 's' && val == 'p' || ch == 'p' && val == 'r' || ch == 'r' && val == 's')
    {
        return 1;
    }
    else if (ch == val)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int main()
{
    srand(time(NULL));
    char val;
    int comp = rand();
    int random, result;
    int r;
    char ch;
    r = comp % 3;
    random = r + 1;
    printf("enter character:\n1.scissors(s)\n2.rock(r)\n3.papper(p)");
    scanf("%c", &ch);
    printf("you entered:%c\n", ch);

    if (random == 1)
        val = 's';
    if (random == 2)
        val = 'r';
    if (random == 3)
        val = 'p';
    printf("the computer chose %c\n", val);
    result = spr(ch, val);

    if (result == 1)
    {
        printf("You won");
    }
    else if (result == 2)
    {
        printf("its a tie");
    }
    else
    {
        printf("You Loose");
    }
}
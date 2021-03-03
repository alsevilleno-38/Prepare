#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void process(int *a, int *b);

int main(int argc, char *argv[]) 
{    
    FILE *file = NULL;

    file = fopen("data/note.txt", "r+");
    char str[100];
    char *copy = fgets(str, 1000, file);
    

    
    // printf("%d\n", file);
     
    // if (!file)
    // {
    //     perror("fopen");
    // }
    // fclose(file);

    return 0;
    
    // getchar();
}

void process(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
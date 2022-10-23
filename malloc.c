# include <stdio.h>
//you should be include for librerie when malloc function there is
# include <stdlib.h>
int main(void)
{
    // if you use a malloc function you should be write the condition
    // because you don't know is there place in memorie or not
    // ex : 
    int *n = malloc(4);
    // condition : 
    if (n == NULL)
    {
        // Then should be to exit from program
        return 1; 
    }
    // after that if is there place in memorie then the program works
    n[0] = 1;
    n[1] = 2;
    n[2] = 3;
    n[3] = 4;
    for (int i = 0; i < 4 ; i++)
    {
        printf("%i\n", n[i]);
    }
    // if you use malloc function is important to free it with function called free()
    free(n);
}
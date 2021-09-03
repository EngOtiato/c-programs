#include <stdio.h>
#include <conio.h>
fibonacci(int term);
main()
{
    int term, counter;
    printf("enter number of terms in  fibonacci");
    scanf("%d",&terms);
    /*
    * Nth term=(N-1)th therm + (N-2)th term
    */
    printf("fibonacci series till %d terms\n",);
    for(counter=0; counter< terms; counter)
        printf("%d",fibonacci(counter));
}
getch();
return 0;
{
    /*
    *function to calculate Nth fibonacci num
    *fibonacci(N)=fibonacci(N-1)+ fibonacci
    */
    int fibonacci(int term)
    {
        if(term<2)
            return term;
        return fibonacci (term - 1)+ fibonacci (term-2)
    }

}

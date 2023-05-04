#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, f=1, s=1, tmp;
    printf("Enter number of steps: ");
    scanf("%d", &n);

    for(int i=2; i<=n; i++) {
        // fib(n) = fib(n-1) + fib(n-2);
        tmp = f+s;
        f   = s;
        s   = tmp;
    }
    if(n < 1) s = 0; //this condition deals with negative numbers and zero
    printf("Non Recursive Solution(s): %d", s);
}

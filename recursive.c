#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if(n < 1) return 0;
    if (n <= 2) return n; // 2=>2, 1=>1
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{

    int n;
    printf("Enter number of steps: ");
    scanf("%d", &n);
    printf("Recursive Solution(s): %d",fibonacci(n));
}

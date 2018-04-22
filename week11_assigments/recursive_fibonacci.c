
#include<stdio.h>
void  printFibonacci( int n)
{ 
 int f1 = 1, f2 = 1, i;
 
    if (n < 1)
        return;
 
    for (i = 1; i <= n; i++)
    {
        printf("%d ", f2);
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}
void printFibonacci(int);

int main(){

    int k,n;
    long int i=0,j=1,f;
    scanf("%d",&n);

printf("%d %d ",0,1);
printFibonacci(n);
    return 0;
}

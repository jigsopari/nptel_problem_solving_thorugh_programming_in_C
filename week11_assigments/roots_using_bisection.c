#include <stdio.h>
#include <math.h>
double myFunction(double x, double a, double b, double c)
{
  return a*x*x + b*x +c;
}
int main(void){
double a,b,c;
double leftpt, rightpt, midpt, epsilon = .0000001;
double midvalue, rtvalue, root;
scanf("%lf %lf %lf", &a, &b, &c);
scanf("%lf %lf", &leftpt, &rightpt);

do {
        midpt = (leftpt + rightpt)/2;
        rtvalue = myFunction(rightpt,a,b,c);
        midvalue = myFunction(midpt,a,b,c);
        if (rtvalue * midvalue >= 0)
                rightpt = midpt;
        else leftpt  = midpt;
} while ((rightpt - leftpt) > epsilon);

root = (rightpt+leftpt)/2;
printf("Root for equation%5.2lf*x**2+%5.2lf*x+%5.2lf is",a,b,c);
printf("%5.2lf\n",root);
return 0;
}


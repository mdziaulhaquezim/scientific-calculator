#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159265

double memory(double m);
float sine(float  x);
float cosine(float x);
float tangent(float x);
float sineh(float x);
float cosineh(float x);
float tangenth(float x);
float logten(float x);
float squareroot(float x);
float exponent(float x);
float power(float x, float y);

void main()
{
    float cal=0;
    int e,i,m;
    char n;
    float x, y, answer;
    int z;

do{
    printf("\n\n\t\tWhat do you want to do?\n");
    printf("\n\n\t\t(A) ADD  (B) Subtract  (C) Multiplication  (D) Division\n\n");
    printf("\t\t(m) Memory             (n) Number Conversion\n");
    printf("\n\n\t\t(E) sin  (F) cos   (G) tan          (H) sinh     (I) cosh\n");
    printf("\t\t(J) tanh (K) 1og10 (L) square-root  (M) exponent (N) Power\n\n\n\n\t\t");
    scanf ("%c", &n);
    cal=0;
    float multiplies=1;
    if (n>='A' && n<='D')
    {
        switch(n)
        {
            case 'A':
                printf ("\n\t\tEnter how many numbers you want to Add?\n\t\tYour Answer : ");
                scanf("%d",&e);
                printf("\t\tEnter the numbers...\n");
                for (i=0; i<e; i++)
                {
                    printf("\t\t");
                    scanf("%f", &y);
                    cal=cal+y;
                }
                printf("\n\t\tThe Sum is %f\n",cal);    break;

            case 'B':
                printf ("\n\t\tEnter Two numbers you want to Subtract!\n\t\tFirst number  : ");
                scanf("%f",&x);
                printf("\t\tSecond number : ");
                scanf("%f",&y);
                cal=x-y;
                printf("\n\t\tThe Subtract is %f\n",cal);   break;

            case 'C':
                printf("\n\t\tEnter how many numbers you want to Multiply?\n\t\t");
                scanf ("%d",&e);
                printf("\n\t\tEnter the numbers...\n");
                for(i=1; i<=e; i++)
                {
                    printf("\t\t");
                    scanf ("%f",&y);
                    multiplies=multiplies*y;
                }
                printf("\n\t\tThe multiple is %f\n", multiplies);         break;

            case 'D':
                printf("\n\t\tEnter the numbers you want to Division\n");
                printf("\t\tEnter the Dividend : ");
                scanf("%f",&x);
                printf("\t\tEnter the Divisor  : ");
                scanf("%f",&y);
                cal=x/y;
                printf("\n\n\t\t%f divided by %f and quotient is %f\n", x, y, cal); break;
        }
    }
        if (n>='E' && n<='M')
    {
        printf("\n\t\tWhat is X?\n\t\tYou inputed : ");
        scanf("%f",&x);
        switch (n)
        {
            case 'E': answer = sine(x);       break;
            case 'F': answer = cosine(x);     break;
            case 'G': answer = tangent(x);    break;
            case 'H': answer = sineh(x);      break;
            case 'I': answer = cosineh(x);    break;
            case 'J': answer = tangenth(x);   break;
            case 'K': answer = logten(x);     break;
            case 'L': answer = squareroot(x); break;
            case 'M': answer = exponent(x);   break;
        }
    }
    if (n=='N')
    {
        printf("\t\tThe X is     : ");
        scanf("%f",&x);
        printf("\t\tX's power is : ");
        scanf("%f",&y);
        answer = power(x,y);
    }
    if (n>='E' && n<='N')
    {
        printf("\n\t\tAnswer is %f\n\n\n",answer);
    }
    else if (n>='A' && n<='D')
    {
        printf("\t\t\t\t\n\n\n\n");
    }
    else
    {
        printf("\n\n\t\t\tWrong INPUT.\n\n");
    }
    fflush(stdin);
    printf("\n\tIf you want to do more operation, INPUT your choice or '0' to exit...\n\t\t\t\t\t\t\t");
    scanf("%d", &z);
    }
    while(z!=0);
    getch();
}

double memory(double m)
{
    double mem=0;
    return (mem=mem+m);
}
float sine(float x)
{
    return (sin (x*PI/180));
}
 float cosine(float x)
{
    return (cos (x*PI/180));
}
float tangent(float x)
{
    return (tan(x*PI/180));
}
float sineh(float x)
{
    return (sinh(x));
}
float cosineh(float x)
{
    return (sinh(x));
}
float tangenth(float x)
{
    return (sinh(x));
}
float logten(float x)
{
    return (log10(x));
}
float squareroot(float x)
{
    return (sqrt(x));
}
float exponent(float x)
{
    return(exp(x));
}
float power(float x, float y)
{
    return (pow(x,y));
}

#include<stdio.h>
int main ()
{
    double h[10] = {150.30,175.40,172.50,168.00,181.55,164.45,153.00,163.75,157.60,178.00};
    int i;
    double avg = 0.00;
    double sum = 0.00;
    printf("Student 1  = %.2lf cm\n",h[0]);
    printf("Student 2  = %.2lf cm\n",h[1]);
    printf("Student 3  = %.2lf cm\n",h[2]);
    printf("Student 4  = %.2lf cm\n",h[3]);
    printf("Student 5  = %.2lf cm\n",h[4]);
    printf("Student 6  = %.2lf cm\n",h[5]);
    printf("Student 7  = %.2lf cm\n",h[6]);
    printf("Student 8  = %.2lf cm\n",h[7]);
    printf("Student 9  = %.2lf cm\n",h[8]);
    printf("Student 10 = %.2lf cm\n",h[9]);
    for (i=0 ; i<10 ; i++)
        {  
            sum += h[i];
        }
        avg = sum / 10.00;
        printf ("Average Height is %.2lf cm",avg);  
       
    return  0;
}

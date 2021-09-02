#include<stdio.h>
int main ()
{
    int h[10] = {150,175,172,168,181,164,153,163,157,178};
    int i,n;
    double avg = 0.0;
    double sum = 0.0;
    printf("Student 1  = %d cm\n",h[0]);
    printf("Student 2  = %d cm\n",h[1]);
    printf("Student 3  = %d cm\n",h[2]);
    printf("Student 4  = %d cm\n",h[3]);
    printf("Student 5  = %d cm\n",h[4]);
    printf("Student 6  = %d cm\n",h[5]);
    printf("Student 7  = %d cm\n",h[6]);
    printf("Student 8  = %d cm\n",h[7]);
    printf("Student 9  = %d cm\n",h[8]);
    printf("Student 10 = %d cm\n",h[9]);
    for (i=0 ; i<10 ; ++i)
        {  
            sum += h[i];
        }
        avg = sum / 10.0;
        printf ("Average Height is %lf cm",avg);  
       
    return  0;
}
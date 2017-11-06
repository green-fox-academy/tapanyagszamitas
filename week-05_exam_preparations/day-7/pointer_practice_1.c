/*POINTER FOR NUMBERS(ARRAYS)
*Every task should be in different function, and use pointers
*1, Fill your array with numbers from 0 to N
*2, count numbers, who has hundreds place is 1 and ones place is 3 (103,113 ...) return with the count and print out in the main()
*3, sum the full!! arrays elements return with it, and print out in the main()
*4, sum the arrays elements, which has divided by 4, and return with their avarage, print out in the main()
*/
#include <stdio.h>
#include <stdlib.h>

void arr_filler(int *array_of_numbers, int n);
int weird_num_counter(int *array_of_numbers, int n, int countn);
int arr_totalsum(int *array_of_numbers, int n, int totalsum);
int arr_div4(int *array_of_numbers, int n, int dividable_by_four);


int main()
{

    int array_of_numbers[1000];

    int n = 0;
    printf("please enter the value of n. I suggest to be it bigger than 200\n");
    scanf(" %d",&n);


    arr_filler(array_of_numbers, n);


    //int countn = 0;
    //printf("\n numbers of weird numbers 1*3 = %d\n",weird_num_counter(array_of_numbers, n,countn));


    //int totalsum = 0;
    //printf( "\n\nThe total sum of the numbers in the array is  %d\n", arr_totalsum(array_of_numbers, n, totalsum));

    int dividable_by_four =0;
   printf("\n the average of numbers 0-n dividable by 4 is: %d", arr_div4(array_of_numbers, n, dividable_by_four));






    return 0;
}

void arr_filler(int *array_of_numbers, int n)
{



    int i = 0;
    for( i=0; i<=n; i++)
    {
        array_of_numbers[i]=i;
        printf(" %d",  array_of_numbers[i] );
    }
}
int weird_num_counter(int *array_of_numbers, int n,int countn)
{

    int tempn=0;


    int i = 0;
    for( i=0; i<=n; i++)
    {
        tempn = array_of_numbers[i];

        if( tempn/100%10 == 1 && tempn%10 ==3 )
        {
            printf("\n%d",array_of_numbers[i]);
            countn = countn +1;
        }
    }

    return countn;
}


int arr_totalsum(int *array_of_numbers, int n, int totalsum)
{
    int i = 0;
    for( i=0; i<=n; i++)
    {
        totalsum= totalsum + array_of_numbers[i];


    }

    return totalsum;
}

int arr_div4(int *array_of_numbers, int n, int dividable_by_four)
{
int temp =0;
int count4 =0;
int sum4= 0;
int j = 0;
for(j=1; j<=n; j++){
    temp = array_of_numbers[j];
    if(temp%4 ==0 ){
        sum4 = temp+ sum4;
        count4 = count4 +1;
    }
}

dividable_by_four= sum4/count4;

return dividable_by_four;

};

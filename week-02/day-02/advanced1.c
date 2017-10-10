#include <stdio.h>

int main()
{
    int arr[50];
    int i = 0;
    int number = 0;
    int position = 0;
    int c = 0;
    printf("please enter a number between 1 and 50 \n");
    scanf("%d", &number);

    for(i=0; i<number; i++){
    arr[i]=i;
    printf("%d\n", arr[i]);
    }
    printf("please enter a which you want to delete\n");
    scanf("%d", &position);

 if ( position >= i+1 )
      printf("Deletion not possible.\n");
   else
   {
      for ( i = position ; i < number - 1 ; i++ )
         arr[i] = arr[i+1];

      printf("array is after delete is\n");

      for( i = 0 ; i < number -1 ; i++ )
         printf("%d\n", arr[i]);
   }





    // TODO: write a program wich asks for a number, that will be the real size of the array (50 elements are allocated, that's the maximum size)
    // Then load up the array with integer values
	// print out the array
    // Then ask for a number, that will be the position, where you want the element to be deleted
    // handle the problem when trying to delete from invalid positions (e.g. negative number)
    // print out the the array after the deleting

    return 0;
}

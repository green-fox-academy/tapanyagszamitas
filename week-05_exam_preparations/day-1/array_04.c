
#include <stdio.h>
#include <stdlib.h>


int main()
{

    char array1[20]= "The";
    char array2[20]= "Quick";
    char array3[20]= "brown";
    char array4[20]= "Dog";
    char array5[20]= "jumps";
    char array6[20]= "over";
    char array7[20]= "the";
    char array8[20]= "Lazy";
    char array9[20]= "Fox";

    char array10[20]= "green";

    char *p_1;
    char *p_2;
    char *p_3;
    char *p_4;
    char *p_5;
    char *p_6;
    char *p_7;
    char *p_8;
    char *p_9;

    p_1 = array1;
    p_2 = array2;
    p_3 = array3;
    p_4 = array4;
    p_5 = array5;
    p_6 = array6;
    p_7 = array7;
    p_8 = array8;
    p_9 = array9;

    printf(" %s \n %s \n %s \n %s \n %s \n %s \n %s \n %s\n %s \n", p_1, p_2, p_3, p_4, p_5, p_6, p_7, p_8, p_9);

    int i= 0;
    for( i=0; i < 20; i++){
        array3[i]=array10[i];
        }
    printf("\n___________\n\n");
    printf(" %s \n %s \n %s \n %s \n %s \n %s \n %s \n %s\n %s \n", p_1, p_2, p_3, p_9, p_5, p_6, p_7, p_8, p_4);


    return 0;
}


/*
 * Create 9 arrays of characters, each should contain a word.
 * Let it be this: The Quick brown Dog jumps over the Lazy Fox.
 * Create an array of 9 pointers of chractrer type.
 * Make it so, that each pointer points to one of the words. Meaning to one of the original arrays You just created.
 * So You'll have a pointer pointing to each of these original arrays in an array of pointers.
 * Print them out, each in a new line using this array of pointers.
 * Now make it so, that the Fox is Green and he jumps over the lazy dog.
 * Use the existing arrays to achive this.
 * Print it out again.
 */

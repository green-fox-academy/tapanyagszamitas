/*
 * Create a structure representing the data of a book:
 *    * Title
 *    * Author
 *    * Year of publication
 *
 * Create functions for:
 *    * Creating a new book.
 *    * Changeing or setting the Title
 *    * Changeing or setting the Author
 *    * Changeing or setting the Year of publication
 *    * Getting each of these separately by a singel function each.
 *
 * IMPORTANT: The first parameter of each function should be a "Book", a variable of the type of this structure.
 *
 * Create a main where You demonstrate that each of these works and print out the necessary info.
 * IMPORTANT: You should only print from the main function. All other functions should return the info needed.
 */

 #include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Book {
    char title[30];
    char author[50];
    int publication;
} book_alias;

// takes a book and prints its members
void book_printer(book_alias book)
{
    printf("title: %s\n", book.title);
    printf("author: %s\n", book.author);
    printf("publication year: %d\n", book.publication);

}

// takes character arrays and an int to upload it to corresponding book members
// returns a book with the passed in parameters
book_alias create_new_book(char title[], char author[], int publication)
{
    book_alias new_book;

    strcpy(new_book.title, title);
    strcpy(new_book.author, author);
    new_book.publication = publication;

    return new_book;
}

// sets, resets the title of the passed in book
void title_set(book_alias *book, char new_title[])
{
    strcpy((*book).title, new_title);
}

// sets, resets the author of the passed in book
void author_set(book_alias *book, char new_author[])
{
    strcpy(book->author, new_author);
}

// sets, resets the publication year of the passed in book
void publication_set(book_alias *book, int new_publ_year)
{
    (*book).publication = new_publ_year;
}
int main()
{

    book_alias c_programming = create_new_book("Teli Berek", "Fekete Istvan", 1957);
    book_printer(c_programming);

    title_set(&c_programming, "Nyari Berek");
    book_printer(c_programming);

    author_set(&c_programming, "Joska, Pista, Sanyi");
    book_printer(c_programming);

    publication_set(&c_programming, 2017);
    book_printer(c_programming);

    return 0;
}

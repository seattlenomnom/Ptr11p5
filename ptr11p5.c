/* Source file for ptr11p5
 *
 *  A problem program from Kochan, Stephen, "Programming in C 4th ed."
 *
*/


/* includes */

#include <stdio.h>

/* defines */
#define NIX (struct entry *) 0


/* data definitions */

struct entry{
    int value;
    struct entry *next;
    struct entry *prev;
};



/* function declarations */

void printList(struct entry *p2head);


/* main */

int main(int argc, char *argv[]) {

/* create list components */

    struct entry *p2head, n1, n2, n3, n4, n5;


/* init values */

    p2head = &n1;
    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;
    n5.value = 500;

/* hook entries together to form a doubly linked list */


    n1.next = &n2;
    n1.prev = NIX;

    n2.next = &n3;
    n2.prev = &n1;

    n3.next = &n4;
    n3.prev = &n2;

    n4.next = &n5;
    n4.prev = &n3;

    n5.next = NIX;
    n5.prev = &n4;


/* print out the list forward */

    printList(p2head);








    return(0);
}

/* function defiinitions */

void printList(struct entry *p2head){

    struct entry *theEntry;

    theEntry = p2head;
    while(theEntry != NIX) {
        printf("%i ", theEntry->value);
        theEntry = theEntry->next;
    }
    printf("\n");


}


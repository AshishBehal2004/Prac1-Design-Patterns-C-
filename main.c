#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* The following are function declarations. They _declare_ that the functions
exist but they do not _define_ what the functions actually do (the definitions
appear after the main function). By declaring these functions here, they may be
called in the main before they are defined.
Note: function1 expects an int type, whereas function2 expects a pointer to an int
*/
void function1(int);

void function2(int*); //pointer to an int (*)
int main() {
    int number = 10;
    /* C1. display the contents of number to the screen */
    int* a_n = &number;
    printf("Value of number is: %d\n",number);
    /* C2. display the address of variable number to the screen */
    printf(" Address is %p\n", a_n);

    /* C3. call function1 */
    function1(number);
    /* C4. display the contents of number to the screen */

    /* C5. call function2 */
    function2(&number);
    /* C6. display the contents of number to the screen */
    //printf();
    return 0;
}
void function1(int number)
{
    /* C7. increment number by one */
    number = number + 1;
    /* C8. display the contents of number to the screen (should be 11) */
    printf("Value of number is: %d\n", number);
    int* address = &number;
    printf("Address is: %p\n", address);
    /* C9. display the address of number to the screen */

}
void function2(int* numberPtr)
{
    printf("Value of number is: %p\n", numberPtr);
    printf(" Value of number is: %d", *numberPtr);
    /* C10. display the address of number to the screen (should be the same
    address as you displayed first in main) */
    /* C11. display the value that the pointer numberPtr points to */
    /* C12. increment the value stored in number */
    /* C13. display the contents of number to the screen */
}

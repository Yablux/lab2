#include <stdio.h>
#include "askname.h"

int main(int argc, char **argv)
{
     char first[255], last[255];
     askname(first, last);/* for the test2.3.9 */
     printf("Hello, %s %s!\n", first, last);/* for the test2.3.9 */
     return 0;
}
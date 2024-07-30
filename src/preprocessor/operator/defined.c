#include <stdio.h>

#if !defined MESSAGE
#define MESSAGE "You wish!"
#endif

#if defined MESSAGE
#undef MESSAGE
#define MESSAGE "You wish new!"
#endif

#if !defined (MESSAGE1)
#define MESSAGE1 "You wish 1!"
#endif

#if defined (MESSAGE1)
#undef MESSAGE1
#define MESSAGE1 "You wish 1 new!"
#endif

#ifndef MESSAGE2
#define MESSAGE2 "You wish 2!"
#endif

#ifdef MESSAGE2
#undef MESSAGE2
#define MESSAGE2 "You wish 2 new!"
#endif

int main(void) {
    printf("Here is the message: %s\n", MESSAGE);
    printf("Here is the message1: %s\n", MESSAGE1);
    printf("Here is the message2: %s\n", MESSAGE2);
    return 0;
}

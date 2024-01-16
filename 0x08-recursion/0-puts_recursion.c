#include <stdio.h>

void _puts_recursion(char *s) {
    if (*s == '\0') {
        // Base case: end of string, print newline
        putchar('\n');
        return;
    }

    // Print current character and move to the next one
    putchar(*s);

    // Recursively call the function with the rest of the string
    _puts_recursion(s + 1);
}

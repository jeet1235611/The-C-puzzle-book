#include <stdio.h>
#define PRINT(format, x) printf(#x " = %" #format "\n", x)
int integer = 5;
char character = '5';
char *string = "5";

main() {
        PRINT(d, string); PRINT(d, character); PRINT(d, integer);
        PRINT(s, string); PRINT(c, character); PRINT(c, integer = 53);
        PRINT(d, ('5' > 5));

        {
                int x = 2;
                unsigned int ux = -2;

                PRINT(o, x); PRINT(o, ux);
                PRINT(d, x/2); PRINT(d, ux/2);
                PRINT(o, x/2); PRINT(o, ux >> 1);
                PRINT(d, x >> 1); PRINT(d, ux >> 1); //BASIC TYPES 1.2
        }
}

Output:
string = -2103144444
character = 53
integer = 5
string = 5
character = 5
integer = 53 = 5
('5' > 5) = 1
x = 2
ux = 37777777776
x/2 = 1
ux/2 = 2147483647
x/2 = 1
ux >> 1 = 17777777777
x >> 1 = 1
ux >> 1 = 2147483647

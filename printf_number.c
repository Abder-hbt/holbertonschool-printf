#include <unistd.h>

void print_number(int number)
{
int div = 1;
int value;
char C;

if (number < 0)
{
write(1, "-", 1);

if(number == -2147483648)
{
write( 1, "2147483648", 10);
return;
}

number = -number;
}

while (number / div >= 10)
{
 div *= 10;   
}

while (div > 0)
{
    value = number / div;
    C = value + '0';
    write (1, &C, 1);
    number %= div;
    div /= 10;
}

}

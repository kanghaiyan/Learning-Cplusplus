#include <iostream>

int main ()
{
    // Local variable declaration:
    int a = 10;
    // do loop execution
    do
    {
        std::cout << "value of a: " << a << std::endl;
        a = a + 1;
    }while( a < 20 );

    return 0;
}

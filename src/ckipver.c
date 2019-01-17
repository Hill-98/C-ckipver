#include <stdio.h>
#include <arpa/inet.h>
 
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        char buf[16];
        if (inet_pton(AF_INET, argv[1], buf))
            return 4;
        else if (inet_pton(AF_INET6, argv[1], buf))
            return 6;
        return 0;
    }
    else
    {
        return 1;
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _A {
    unsigned int a;
    unsigned long long b;
} A;

typedef struct _B {
    unsigned int a;
    unsigned int c;
    unsigned long long b;
} B;

#pragma pack(push, 1)
typedef struct _C {
    unsigned int a;
    unsigned long long b;
} C;
#pragma pack(pop)

void dumpMem( char * p, unsigned long length )
{
    unsigned long i = 0;
    int j = 0;
    char t[17];

    printf("Address: %x\n", p);

    do
    {
        printf("%02x ", *(p+i));
        if ( p[i] < 0x20 || p[i] > 0x7E )
        {
            t[j] = '.';
        }
        else
        {
            t[j] = p[i];
        }

        if ( ++j > 17 )
        {
            j = 0;
        }

        if ( ((i+1)%16) == 0 )
        {
            t[j] = '\0';
            printf("%s\n", t);
            j = 0;
        }
        else
        {
            if ( ((i+1)%8) == 0 )
            {
                printf("-");
            }
            else
            {
                printf(" ");
            }
        }

        i++;

    } while ( i <= length );

    printf("\n");
    return;
}


void main()
{
    int i = 0;
    A at;
    B bt;
    C ct;
    char * p;

    memset( (void *)&at, 0, sizeof(A));
    memset( (void *)&bt, 0, sizeof(B));
    memset( (void *)&ct, 0, sizeof(C));

    at.a = 'A';
    at.b = 'B';

    bt.a = 'A';
    bt.b = 'B';
    bt.c = 'C';

    ct.a = 'A';
    ct.b = 'B';

    printf("structure A\n");
    dumpMem( (char *)&at, 16);

    printf("structure B\n");
    dumpMem( (char *)&bt, 16);

    printf("structure C\n");
    dumpMem( (char *)&ct, 16);

    return;
}

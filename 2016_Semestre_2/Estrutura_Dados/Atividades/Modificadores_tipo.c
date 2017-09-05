#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("int : %d bytes\n", sizeof( int ) );
    printf("short int: %d bytes\n", sizeof( short ) );
    printf("long int: %d bytes\n", sizeof( long ) );
    printf("signet int: %d bytes\n", sizeof( signed ) );
    printf("unsigned int: %d bytes\n", sizeof( unsigned ) );
    printf("short signed: %d bytes\n", sizeof( short signed ) );
    printf("short unsigned: %d bytes\n", sizeof( short unsigned ) );
    printf("long signed: %d bytes\n", sizeof( long signed ) );
    printf("long unsigned: %d bytes\n", sizeof( long unsigned ) );
}

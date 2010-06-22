#include "defines.h"
#include "serial.h"
#include "lib.h"

int main(void)
{
    static char buf[32];

    puts("Hello world\n");

    while(1){
        puts("> ");
        gets( buf );

        /* echo foo */
        if( !strncmp(buf, "echo", 4) ){
            puts(buf + 4); /* foo */
            puts("\n");
        }else if( !strcmp(buf, "exit") ){
            break;
        }else{
            puts("unknown.\n");
        }
    }

    return 0;
}
        

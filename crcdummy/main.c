#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char c;
    unsigned long int checksum = 0;
    int i;

    if(argc<2) {
        printf("Usage: <progname> <filename> [<filename> ...]\n");
        exit(EXIT_FAILURE);
    }

    for(i=1;i<argc;i++) {
        checksum = 0;
        if( (fp=fopen(argv[i],"rb")) == NULL ) {
            printf("File: %s not found.\n", argv[i]);
        } else {

        while( !feof(fp) ) {
            checksum += fgetc(fp);
        }
        printf("%10lx\t%s\n", checksum, argv[i]);

        fclose(fp);
        }
    }

    return 0;
}

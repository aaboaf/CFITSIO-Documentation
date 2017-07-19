#include <string.h>
#include <stdio.h>
#include "fitsio.h"
/*does the same thing as open.c, but opens the file with an added filter*/
int main(int argc, char *argv[])
{
        fitsfile *fptr;

        int status = 0, nkeys, ii;
char* str = strcat(argv[1], "[col FILTERNAME]"); //Filtername is the name of the filter. This specific code will filter out a column FILTERNAME
        fits_open_file(&fptr, str, READONLY, &status);
        if(status)
                fits_report_error(stderr, status);
        return status;
}

#include <string.h>
#include <stdio.h>
#include "fitsio.h"

int main(int argc, char *argv[])
{
	fitsfile *fptr;
	//sets up a fitsfile pointer to store the header
	int status = 0; //initializes status			
	fits_open_file(&fptr, argv[1], READONLY, &status); //Opens the file described in argv[1]
							   //at the fptr pointer as read only. 
	if(status)//checks if an error occurs (status not equal to zero)
		fits_report_error(stderr, status); //reports error
	return status;
}

// ##########################################################
// # Long s rules from https://en.wikipedia.org/wiki/Long_s #
// #                   as of 09/02/2025                     #
// ##########################################################

#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <ctype.h>

FILE* destptr;
FILE* srcptr;

int main(int argc, char* argv[]){
	if(argc < 3){
		printf("Insufficient arguments!\n");
		exit(1);
	}

	srcptr = fopen(argv[1], "r");
	destptr = fopen(argv[2], "w, ccs=UTF-8");

	if(srcptr == NULL || destptr == NULL){
		printf("File failed to open!\n");
		exit(1);
	}

	do{
		char c = fgetc(srcptr);
		char nextc = fgetc(srcptr);

		if(feof(srcptr)){
			break;
		}

		int longs = 1;
		if(c != 's')
			longs = 0;
		if(nextc == ' ' || ispunct(nextc))
			longs = 0;
		if(nextc == '\'')
			longs = 0;
		if(nextc == 'f' || nextc == 'k' || nextc == 'b')
			longs = 0;

		if(longs == 1)
			fputwc(L'ſ', destptr);
		else
			fputwc((wchar_t)c, destptr);

		fseek(srcptr, -1, SEEK_CUR);
	} while(1);

	fclose(srcptr);
	fclose(destptr);

	return 0;
}

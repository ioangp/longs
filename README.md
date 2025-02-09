# longs
Simple windows command line program for adding the [long s](https://en.wikipedia.org/wiki/Long_s) to text files. Takes an input file and outputs a file with `s` replaced with `ſ` appropriately.

For example:
> We the People of the United States, in order to form a more perfect Union, establish Justice, insure domestic Tranquility, provide for the common defence, promote the general Welfare, and secure the Blessings of Liberty to ourselves and our Posterity, do ordain and establish this Constitution for the United States of America.

Becomes:

> We the People of the United States, in order to form a more perfect Union, eſtabliſh Juſtice, inſure domeſtic Tranquility, provide for the common defence, promote the general Welfare, and ſecure the Bleſſings of Liberty to ourſelves and our Poſterity, do ordain and eſtabliſh this Conſtitution for the United States of America.

Made for fun and to experiment with C.

## Usage
````
./longs.exe input.txt output.txt
````

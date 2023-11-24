#!/bin/sh

TESTLIST=$(ls *.c)
for test in $TESTLIST
do
	EXECNAME=$(echo $test | tr -d '.c')
	echo "compiling $EXECNAME..."
	DIRNAME=$(echo $EXECNAME | sed -e 's/test/ex/g')
	cc -Wall -Wextra -Werror -o $EXECNAME $test $DIRNAME/*.c -g
done

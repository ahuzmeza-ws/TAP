g++ *.cpp -o run.out

if [ -e run.out ]
then
	./run.out

	echo "----- Input file content: \n"
	cat IO_files/file.in

	echo "\n\n"

	echo "----- Output file content:\n"
	cat IO_files/file.out

	echo "\n\n"

	\rm run.out
fi


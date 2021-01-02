g++ *.cpp -o run.out

if [ -e run.out ]
then
	./run.out
	\rm run.out
fi


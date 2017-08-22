
utest:main.o StringUtilTest.o
	gcc -o $@ $^ -I ../ -L ../lib -lgtest -lmutil

.cpp.o:
	gcc -c $< -I../src 

run:
	export LD_LIBRARY_PATH=../lib;./utest

clean:
	rm -f *.o utest

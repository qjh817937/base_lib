
target=../../lib/libmutil.so

$(target): StringUtil.o
	gcc -fpic -shared -o $@ $^

.cpp.o:
	gcc -fpic -g -c $< -I../

clean:
	rm -f *.o $(target)

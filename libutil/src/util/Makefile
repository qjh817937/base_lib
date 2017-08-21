
libutil.so: StringUtil.o
	gcc -fpic -shared -o $@ $^

.cpp.o:
	gcc -fpic -c $< -I../

clean:
	rm -f *.o *.so

all:
	flex *.l
	bison -dy *.y
	g++ *.c *.cpp
	./a.out

code:
	code *.y *.l s*.cpp s*.h
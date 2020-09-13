build:
	gcc prog1.c -o prog1

clean:
	rm prog1

run:
	./prog1 ${ARGS}

help:
	make build

run: build
	clear
	./bin/main.o

build:
	clear
	gcc src/main.c -o bin/main.o && chmod +x bin/main.o

clean: 
	rm -rf ./bin/*

rebuild: clean
	make build
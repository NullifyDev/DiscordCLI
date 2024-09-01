CFLAGS = -c -g
CSOURCE = $(shell find src -name '*.c')

OBJ = $(patsubst src/%.c, bin/src/%.o, $(CSOURCE))
BIN = $(shell find bin/src -name '*.o')

run: rebuild
	clear
	chmod +x ./bin/discordcli && ./bin/discordcli
	clear

debug: rebuild
	clear
	chmod +x ./bin/discordcli
	clear

build: $(OBJ)
	clear
	gcc -o ./bin/discordcli $(OBJ)
	
bin/src/%.o: src/%.c
	clear
	gcc $(CFLAGS) -o $@ $<

clean:
	rm -rf ./bin/*
	mkdir ./bin/src
	mkdir ./bin/src/window
	mkdir ./bin/src/window/ui

rebuild: clean
	make build

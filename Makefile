CFLAGS = -g
CSOURCE = $(shell find src -name '*.c')

OBJ = $(patsubst src/%.c, bin/%.o, $(CSOURCE))

run: build
	clear
	chmod +x ./bin/discordcli && ./bin/discordcli

build: $(OBJ)
	clear
	ld -o ./bin/discordcli $(OBJ)
bin/%.o: src/%.c
	clear
	gcc $(CFLAGS) -o $@ $<

clean:
	rm -rf ./bin/*

rebuild: clean
	make build

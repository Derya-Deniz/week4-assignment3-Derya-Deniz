CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -O2
BIN = bin

# default target
all: iteration recursion search0 search1 phonebook0 phonebook1

# create bin folder if missing
$(BIN):
	mkdir -p $(BIN)

iteration: iteration.c | $(BIN)
	$(CC) $(CFLAGS) iteration.c -o $(BIN)/iteration

recursion: recursion.c | $(BIN)
	$(CC) $(CFLAGS) recursion.c -o $(BIN)/recursion

search0: search0.c | $(BIN)
	$(CC) $(CFLAGS) search0.c -o $(BIN)/search0

search1: search1.c | $(BIN)
	$(CC) $(CFLAGS) search1.c -o $(BIN)/search1

phonebook0: phonebook0.c | $(BIN)
	$(CC) $(CFLAGS) phonebook0.c -o $(BIN)/phonebook0

phonebook1: phonebook1.c | $(BIN)
	$(CC) $(CFLAGS) phonebook1.c -o $(BIN)/phonebook1

clean:
	rm -rf $(BIN)

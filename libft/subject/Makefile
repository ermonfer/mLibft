INC_DIR := include/
SRC_DIR := mandatory/
B_DIR := bonus/

SRC := $(wildcard $(SRC_DIR)*.c)
B_SRC := $(wildcard $(B_DIR)*.c)

OBJ := $(SRC:.c=.o)
B_OBJ := $(B_SRC:.c=.o)

CC = cc
CFLAGS = -Werror -Wextra -Wall -I$(INC_DIR)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(OBJ)

bonus: $(OBJ) $(B_OBJ)

.PHONY: all bonus
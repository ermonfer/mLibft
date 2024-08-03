DEPENDENCIES := subject
DEPS_OBJS := $(foreach dep, $(DEPENDENCIES), \
	$(wildcard ../$(dep)/mandatory/*.c) $(wildcard ../$(dep)/bonus/*.o))

SRC_DIR := mandatory/
INC_DIR := include/

SRC = $(wildcard $(SRC_DIR)*.c)
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include \
	$(foreach dep, $(DEPENDENCIES), -I./$(dep)/include)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(DEPS_OBJS)

$(LIBFTDIR)/$(LIBFTNAME):
	@make -C $(LIBFTDIR)

.PHONY: all

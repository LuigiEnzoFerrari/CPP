NAME=megaphone

CC=g++
CCFLAGS= -Wall -Werror -Wextra -std=c++98

SRCS=main.cpp
OBJS=$(SRCS:.cpp=.o)
OBJS_DIR=./objects
OBJS_PATH=$(addprefix $(OBJS_DIR)/, $(OBJS))

all:$(NAME)

$(NAME):$(OBJS_PATH)
	echo $(OBJS_PATH)
	$(CC) $(CFLAGS) $< -o $@

$(OBJS_DIR)/%.o:./%.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: all fclean
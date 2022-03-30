NAME=Bureuacrat

CC=c++
CCFLAGS= -Wall -Werror -Wextra -std=c++98
SANIT= -g -fsanitize=address

SRCS=main.cpp Conversion.cpp
OBJS=$(SRCS:%.cpp=%.o)
OBJS_DIR=./objects
OBJS_PATH=$(addprefix $(OBJS_DIR)/, $(OBJS))

all:$(NAME)

$(NAME):$(SRCS)
	$(CC) $(CFLAGS) $(SANIT) $(SRCS) -o $@

clean:
	$(RM) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all
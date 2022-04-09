NAME := exec

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRCSDIR := ./srcs
SRCS := main.cpp ReplaceStrings.cpp
SRCS_PATHS := $(addprefix $(SRCSDIR)/, $(SRCS))

OBJDIR := ./objs/
OBJS := $(addprefix $(OBJDIR), $(notdir $(SRCS_PATHS:.cpp=.o)))

INC := -I./include/

$(OBJDIR)%.o: ./srcs/%.cpp
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	$(RM) -r $(OBJDIR)

fclean: clean
	$(RM) -r $(NAME)

re: fclean all

.PHONY: all clean fclean re

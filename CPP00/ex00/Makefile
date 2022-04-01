NAME := exec

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address
RM := rm -rf

SRCSDIR := ./srcs
OBJDIR := ./objs

SRCS := main.cpp
OBJS := $(notdir $(SRCS:.cpp=.o))

$(OBJDIR)/%.o:	$(SRCSDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJDIR)/$(OBJS)
	$(CC) $(CFLAGS) $(OBJDIR)/$(OBJS) -o $@

$(OBJDIR)/$(OBJS): | $(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR)

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

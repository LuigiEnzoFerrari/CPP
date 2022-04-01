NAME := exec

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRCS := ./srcs/main.cpp ./srcs/Contact.cpp ./srcs/PhoneBook.cpp

OBJDIR := ./objs/
OBJS := $(addprefix $(OBJDIR), $(notdir $(SRCS:.cpp=.o)))

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

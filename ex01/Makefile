NAME	=	more_useful_fixed-point_number
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++20
SRCS	=	main.cpp \
			Fixed.cpp
OBJS	=	$(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PROXY: all clean fclean re
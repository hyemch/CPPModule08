NAME		= 	ex01

CXX 		=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

INC			=	$(addprefix -I,	./Span.hpp)

SRC			=	./main.cpp \
				./Span.cpp

OBJ			=	$(SRC:.cpp=.o)

RM			=	rm -f

all	:	$(NAME)

%.o : %.c
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

$(NAME)	:	$(OBJ)
	$(CXX) $(CXXFLAGS) $(INC) $(OBJ) -o $(NAME)

clean	:
	$(RM) $(OBJ)

fclean	: clean
	$(RM) $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re
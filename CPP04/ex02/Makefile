# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagea <lagea@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 17:00:33 by lagea             #+#    #+#              #
#    Updated: 2024/09/24 15:13:30 by lagea            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= Animal

SRC_DIR 	= src
INC_DIR		= include
OBJ_DIR 	= build

SRC 		= 	$(SRC_DIR)/main.cpp \
				$(SRC_DIR)/Animal.cpp \
				$(SRC_DIR)/Dog.cpp \
				$(SRC_DIR)/Cat.cpp \
				$(SRC_DIR)/WrongAnimal.cpp \
				$(SRC_DIR)/WrongCat.cpp \
				$(SRC_DIR)/Brain.cpp \
				
OBJ			= $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS 		= $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.d)
CC 			= c++
RM 			= rm -f
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98 -pedantic
INCS 		= -I$(INC_DIR) -I.
	
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(INCS) -MMD -MP -c $< -o $@

-include $(DEPS)

run: all
	./$(NAME)

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) -r $(OBJ_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
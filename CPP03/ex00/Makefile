# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagea <lagea@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/12 17:00:33 by lagea             #+#    #+#              #
#    Updated: 2024/09/17 19:00:07 by lagea            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 		= Claptrap

SRC_DIR 	= src
INC_DIR		= include
OBJ_DIR 	= obj

SRC 		= 	$(SRC_DIR)/main.cpp \
				$(SRC_DIR)/ClapTrap.cpp \
				
OBJ			= $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC 			= c++
RM 			= rm -f
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98 -pedantic
INCS 		= -I$(INC_DIR) -I.
	
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(INCS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) -r $(OBJ_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
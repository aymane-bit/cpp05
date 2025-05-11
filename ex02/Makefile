CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = Form

Header = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp  

all: $(TARGET)

$(TARGET): $(SRC) $(Header)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET) Garden_shrubbery

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re
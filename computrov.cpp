#include <iostream>
#include <string>
#include <vector>
#include <exception>

typedef struct s_Term {
	int		exponent;
	double	coefficient;
	s_Term(double coeff, int exp) : coefficient(coeff), exponent(exp){}
} t_term;

std::vector<t_term> tokenizer(std::string size)
{

}

void splitEquation(std::string equation, std::string *left, std::string *right)
{
	if (equation.find('=') != std::string::npos)
	{
		std::string left = equation.substr(0, equation.find('='));
		std::string right = equation.substr(equation.find('=') + 1);
	}
	else
	{
		throw std::invalid_argument("No equal sign found in equation");
	}
}

int computorv(std::string equation)
{
	std::string left;
	std::string right;
	try()
	{
		splitEquation(equation, &left, &right);
		//vettore di termini
		std::vector<t_term> leftSize = tokenizer(left);
		std::vector<t_term> rightSize = tokenizer(right);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}

}

int main(int ac, char **av)
{
	std::string equation;

	if (ac != 2)
	{
		std::cerr << "Usage: " << av[0] << " \"equation\"" << std::endl;
		return 1;
	}
	equation = av[1];
	computorv(equation);

}
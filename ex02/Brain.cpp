#include "Brain.h"

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Brain copy constructor called\n";
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copy assignment called\n";
	for (int i = 0; i < 100; ++i)
        ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}
std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return ideas[index];
	return "";
}
#ifndef BRAIN_H
#define BRAIN_H

#include "Animal.h"

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(const Brain&);
		Brain& operator=(const Brain&);
		~Brain();
		void setIdea(int, const std::string&);
    	std::string getIdea(int) const;
};

#endif
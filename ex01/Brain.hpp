#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

static const int MAX_IDEAS = 100;

class Brain
{
	private:
		std::string _ideas[MAX_IDEAS];

	public:
		Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);
		~Brain();
		std::string getIdea(int index) const;
		void setIdea(const std::string &idea, int index);
};

#endif
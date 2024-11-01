#pragma once
#include <cmath>
#include <iomanip>
#include <string>
#include <iostream>

using std::string;

class Brain{
private:
    string _ideas[100];
public:
    Brain();
    Brain(Brain const & src);
    ~Brain();
    Brain & operator = (const Brain &src);
    string getIdea(int index) const;
    void setIdea(int index, string idea);
};
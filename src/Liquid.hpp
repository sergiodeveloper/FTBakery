

// Liquid.hpp

#pragma once

#include "a02ex03_b.hpp" // Food

class Liquid: public Food
{
public:
	Liquid(double);
	
	virtual double getValor();
	
};
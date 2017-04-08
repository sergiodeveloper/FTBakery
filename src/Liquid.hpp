

// Liquid.hpp

#pragma once

#include <string>
#include "a02ex03_b.hpp" // Food

class Liquid: public Food
{
protected:
   string tipo;
   int    unidades;
	
public:
	Liquid(double);
	
	virtual double getValor();
	virtual string getDescricao() = 0;
	
};
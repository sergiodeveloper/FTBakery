/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Corona.hpp"

using namespace std;

Corona::Corona(string tipo, int unidades, double valor) : Beer(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Corona::getDescricao()
   { 
   return ("Corona" + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
/* fim de arquivo */
/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

#include <string>
#include "Beer.hpp"

using namespace std;

class Corona : public Beer
   {
   private:
      string tipo;
      float peso;
      
   public:
     Corona(string, float, double);
      virtual string getDescricao();
   };
   
/* fim de arquivo */

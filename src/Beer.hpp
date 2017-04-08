/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>

using namespace std;

class Beer
   {
   protected:
      double valor;
      
   public:
      Beer(double);
      virtual double getValor();

      virtual string getDescricao() = 0;
   };
   
/* fim de arquivo */

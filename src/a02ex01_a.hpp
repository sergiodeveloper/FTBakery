/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
*/

using namespace std;

#ifndef A02EX01_A_H
   #define A02EX01_A_H

class MyBooleanClass
   {
   private: 
      bool booleanValue;
   
   public: 
      MyBooleanClass();
      MyBooleanClass(bool);
      ~MyBooleanClass();
   
      const bool getStatus(void);
   };
      
#endif

/* fim de arquivo */

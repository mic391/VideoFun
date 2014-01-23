// static3.cpp
// compile with: /EHsc
#include <iostream>

class tablicaASCI
{
	
private:
int a;
int b;


public:
tablicaASCI();
void wyplujtablice();
		
};

tablicaASCI::tablicaASCI() //pozniej dodam zabezpieczenie albo lapanie wyjatku gdy liczby nie znajduja sie w zakresie lub tez a>b;
   {
        
        std::cout<< "podaj zakres znaków (32-256; a-b). Pierwsza liczba:"; 
        std::cin>> a;
        std::cout<< "Druga liczba:"; 
        std::cin>> b;
        
   };


void tablicaASCI::wyplujtablice()
{
    for (int i = a; i<=b; i+=4){ 
		std::cout<< " | " << (char) (i) << "==" << i << " | ";
		std::cout<< (char) (i+1) << "==" << i+1 << " | ";
		std::cout<< (char) (i+2) << "==" << i+2 << " | ";
		std::cout<< (char) (i+3) << "==" << i+3 << " | " << std::endl;
};
};

int main() {
  tablicaASCI first;
  first.wyplujtablice();
   
}


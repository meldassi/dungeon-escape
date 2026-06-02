#pragma once
#include <iostream>
#include <string>

class Personagem {
public:
	std:: string Nome; 
	int Vida;
	int Ataque;
	
	Personagem (std:: string n, int v, int a)
	    : Nome(n), Vida (v) , Ataque (a) {}
	
	    
	    
	    void apresentar() {
	    	std::cout << "Personagem: " << Nome << std :: endl ;
	    	std::cout << "Vida : " << Vida << std :: endl ;
	    	std:: cout << " Ataque:" << Ataque << std :: endl ;
	    	
		}
};

class inimigo : public Personagem {
	public
	 std::string tipo;
	 
	 inimigos(std::string n, int v, int a, std::string t)
	 : Personagem(n , v , a), tipo (t) {}
	 
	 
	 void apresentar () {
	 	std:: cout << "INIMIGO "  << nome
	               << "tipo "     << tipo
	               << "vida "     << vida
	               << "ataque "   << ataque << std::endl;
	 }
};

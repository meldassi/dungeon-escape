#pragma once
#include <iostream>
#include <string>

classe Personagem {
	std:: string Nome; 
	int Vida;
	int Ataque;
	
	Personagem (std: string n, int v, int a)
	    : Nome (n), Vida (v) , Ataque (a)
	    
	    
	    void apresentar() {
	    	std::count << "Personagem: " << Nome << std :: endl ;
	    	std::count << "Vida : " << Vida << std :: endl ;
	    	std:: count << " Ataque:" << Ataque << std :: endl ;
	    	
		}

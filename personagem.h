#prangma once
#include <iostream>
#include <string>

classe personagem {
	std:: string nome; 
	int vida;
	int ataque;
	
	personagem (std: string n, int v, int a)
	    : nome (n), vida (v) , ataque (a)
	    
	    
	    void apresentar() {
	    	std:count << "personagem: " << nome << std :: end1 ;
	    	std count << "vida : " << vida << std :: end1 ;
	    	std count << " ataque:" << ataque << std :: end1 ;
	    	
		}

#ifndef AUFGABE_2_UND_3_HPP
#define AUFGABE_2_UND_3_HPP


std::vector<int> v(100);
std::generate(v.begin(),v.end(), [](){
	return rand() % 100;
});





#endif 

//AUFGABE_2_UND_3_HPP
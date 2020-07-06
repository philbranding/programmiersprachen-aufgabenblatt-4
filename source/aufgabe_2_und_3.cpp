#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include "aufgabe_2_und_3.hpp"


std::vector<int> v(100);
std::generate(v.begin(),v.end(), [](){
	return rand() % 100;
});


std::cout << "length of array : " << v.size() << std::endl;

void printVector(const std::vector<int> &n)
{

    for (int j = 0; j < n.size(); j++ )
    {
        cout << "n[" << j << "] = " << n[j] << endl;
    }

}



int main(int argc, char *argv[]){

	return Catch::Session().run(argc,argv);
}
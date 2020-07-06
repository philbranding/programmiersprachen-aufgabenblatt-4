#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include "aufgabe_2_und_3.hpp"






TEST_CASE("EmptyTestVector","[Test if vector is Empty]"){

	std::vector<int> v1;
	REQUIRE(list1.empty()==true);

}

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

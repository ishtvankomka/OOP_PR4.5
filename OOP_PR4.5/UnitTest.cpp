#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Ellipse.hpp"
#include "Ellipse.cpp"
#include "Function.hpp"
TEST_CASE( "Arguments initialized") {
    Ellipse e(0, 2, 2);
    REQUIRE( e.f_x() == 2.0);
}

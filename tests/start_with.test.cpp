//
// Created on 7/10/21.
//

#include <catch2/catch.hpp>
#include <start_with.h>


TEST_CASE("start_with")
{
    REQUIRE(start_with("abc", "a") == true);
    REQUIRE(start_with("abc", "ab") == true);
    REQUIRE(start_with("abc", "c") == false);
    REQUIRE(start_with("abc", "") == true);
}

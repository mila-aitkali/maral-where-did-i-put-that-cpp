#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"


TEST_CASE("find char returns index or -1") {
    const char* s = "Practice coding every day";

    REQUIRE(find(s, 'c') == 3);
    REQUIRE(find(s, ' ') == 8);
    REQUIRE(find(s, 'z') == -1);
}

TEST_CASE("find substring returns index or -1") {
    const char* s = "Practice coding every day";

    REQUIRE(find(s, "coding") == 9);
    REQUIRE(find(s, "day") == 22);
    REQUIRE(find(s, "Java") == -1);
}

TEST_CASE("substring edge cases") {
    const char* s = "Practice coding every day";

    REQUIRE(find(s, "") == 0);               // empty substring
    REQUIRE(find(s, "Practice") == 0);       // at beginning
    REQUIRE(find(s, "every") == 16);         // mid-string
}
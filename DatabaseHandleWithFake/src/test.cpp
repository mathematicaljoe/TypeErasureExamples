#define CATCH_CONFIG_MAIN

#include <catch2/catch_test_macros.hpp>

#include <database/database_handle_fake.test.hpp>
#include <database/database_handle.test.hpp>
#include <database/database_view.test.hpp>

TEST_CASE( "catch is working", "[joe]" ) {
    REQUIRE( 1 == 1 );
}

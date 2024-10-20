#ifndef CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_HANDLE_FAKE_TEST_HPP
#define CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_HANDLE_FAKE_TEST_HPP

#include <database/database_handle_fake.h>
#include <catch2/catch_all.hpp>

namespace joe {

TEST_CASE( "DatabaseHandleFake put then get", "" ) {
    DatabaseHandleFake db;
    db.put("first", "a");
    CHECK(db.get("first") == "a");
}

} // namesapce joe

#endif // CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_HANDLE_FAKE_TEST_HPP

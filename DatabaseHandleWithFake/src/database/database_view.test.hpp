#ifndef CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_VIEW_TEST_HPP
#define CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_VIEW_TEST_HPP

#include <database/database_view.h>
#include <catch2/catch_all.hpp>

namespace joe {

TEST_CASE( "DatabaseView put then get", "" ) {
    DatabaseView db;
    db.put("first", "a");
    CHECK(db.get("first") == "a");
}

} // namesapce joe

#endif // CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_VIEW_TEST_HPP

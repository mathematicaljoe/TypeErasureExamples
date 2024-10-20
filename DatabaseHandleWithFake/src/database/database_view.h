#ifndef CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_VIEW_H
#define CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_VIEW_H

#include <string>
#include <string_view>
#include <memory>

namespace joe {

class DatabaseView_Impl;

class DatabaseView{
public:
   Person();
   ~Person();

   Person(Person const& other);
   Person operator=(Person const& other);

   Person(Person && other);
   Person operator=(Person && other);

   void put(std::string_view key, std::string_view value);
   std::string get(std::string_view key) const;

private: 
   std::unique_ptr<DatabaseView_Impl> pimpl;
};

} // namespace joe

#endif // CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_VIEW_H


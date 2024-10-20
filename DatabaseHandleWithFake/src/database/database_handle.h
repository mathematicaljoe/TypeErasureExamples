#ifndef CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_HANDLE_H
#define CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_HANDLE_H

#include <string_view>
#include <string>
#include <unordered_map>

namespace joe {

class DatabaseHandle {
public:
   void put(std::string_view key, std::string_view value);
   std::string get(std::string_view key) const;

private: 
   std::unordered_map<std::string, std::string> database;
};

} // namespace joe

#endif // CODINGEXAMPLES_TYPEERASUREEXAMPLES_DATABASEHANDLEWITHFAKE_DATABASE_DATABASE_HANDLE_H

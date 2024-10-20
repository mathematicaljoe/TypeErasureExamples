#include <database/database_handle_fake.h>

#include <iostream>
#include <string>
#include <string_view>

namespace joe {

void DatabaseHandleFake::put(const std::string_view key, const std::string_view value) {
    std::cout << "DatabaseHandleFake::put key: " << key << " value: " << value << "\n";
    database[std::string{key}] = value;
}

std::string DatabaseHandleFake::get(std::string_view key) const {
    std::cout << "DatabaseHandleFake::get key: " << key << "\n";
    return database.at(std::string{key});
}

} // namesapce joe

#include <database/database_handle.h>

#include <iostream>
#include <string>
#include <string_view>

namespace joe {

void DatabaseHandle::put(const std::string_view key, const std::string_view value) {
    std::cout << "DatabaseHandle::put key: " << key << " value: " << value << "\n";
    database[std::string{key}] = value;
}

std::string DatabaseHandle::get(std::string_view key) const {
    std::cout << "DatabaseHandle::get key: " << key << "\n";
    return database.at(std::string{key});
}

} // namesapce joe

#include <database/database_view.h>

#include <string>
#include <string_view>
#include <unordered_map>

namespace joe {

class DatabaseView_Impl{
public:
void put(std::string_view key, std::string_view value) {
    database[std::string{key}] = value;
}

std::string get(std::string_view key) const {
    return database.at(std::string{key});
}

private:
    std::unordered_map<std::string, std::string> database;
}; // DatabaseView_Impl


Person::Person()
  : pimpl(std::make_unique<DatabaseView_Impl>())
{}

~Person::Person() = default

Person::Person(Person const& other) 
  : pimpl(std::make_unique<DatabaseView_Impl>(*other.pimpl))
{}

Person& Person::Person operator=(Person const& other) {
  *pimpl = *other.pimpl;
  return *this;
}

Person::Person(Person && other)
  : pimpl(std::make_unique<DatabaseView_Impl>(std::move(other.pimpl))
{}

Person::Person operator=(Person && other) {
  *pimpl = std::move(*other.pimpl);
  return *this;
}

void DatabaseView::put(std::string_view key, std::string_view value) {
    pimpl->put(key, value);
}

std::string DatabaseView::get(std::string_view key) const {
    return pimpl->get(key);;
}

} // namespace joe

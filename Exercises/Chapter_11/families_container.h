#ifndef FAMILIES_CONTAINER_H
#define FAMILIES_CONTAINER_H

#include <string>
#include <vector>
#include <map>

class families_container
{
    public:
        void add_family(const std::string &name, const std::vector<std::string> &children);
        const std::map<std::string, std::vector<std::string>> &get_families() const { return families; }

    private:
        std::map<std::string, std::vector<std::string>> families;
};

#endif //FAMILIES_CONTAINER_H

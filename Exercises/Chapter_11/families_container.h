#ifndef FAMILIES_CONTAINER_H
#define FAMILIES_CONTAINER_H

#include <string>
#include <vector>
#include <map>
#include <utility>

class families_container
{
    public:
        void add_family(const std::string &name, const std::vector<std::pair<std::string, int>> &children);
        std::map<std::string, std::vector<std::pair<std::string, int>>> get_families() const { return families; }

    private:
        std::map<std::string, std::vector<std::pair<std::string, int>>> families;
};

#endif //FAMILIES_CONTAINER_H

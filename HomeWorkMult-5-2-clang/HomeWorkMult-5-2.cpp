#include <iostream>
#include <set>
#include <list>

bool comp(std::pair<int, char> a, std::pair<int, char> b) {
    return a.first > b.first;
}

int main() {
    std::string line{"Hellow World!!"};
    std::list<std::pair<int, char>> list;

    std::multiset<char> set;
    for (const auto& i: line) {
        set.emplace(i);
    }
    for (const auto& i: set) {
        list.push_back(std::make_pair(static_cast<int>(set.count(i)),i));
    }
    list.sort(comp);
    list.unique();
    for (const auto& i: list) {
        std::cout << i.second << ": ";
        std::cout << i.first << std::endl;
    }
};
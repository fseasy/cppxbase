#include "cppxbase/string/split.hpp"

#include <vector>
#include <iostream>

using namespace std;
using namespace cppxbase;

int main() {

    vector<pair<string, string>> test_list = {
        {"I have a book!", " "},
        make_pair("keep working|||COME ON", "|||"),
        make_pair("\thaha\tlala\t", "\t")
    }; 

    vector<vector<string>> target_result{
        {"I", "have", "a", "book!"},
        {"keep working", "COME ON"},
        {"", "haha", "lala", ""}
    };

    size_t i = 0UL;
    for (auto& str_and_delim : test_list) {
        auto& s = str_and_delim.first;
        auto& delim = str_and_delim.second;
        vector<string> result;
        split(s, delim, result);
        auto& target = target_result[i];
        if (target == result) {
            cout << boolalpha << true << endl;
        } else {
            cout << boolalpha << false << endl;
        }
        ++i;
    }

    return 0;
} 
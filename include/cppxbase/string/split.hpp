#ifndef CPPXBASE_STRING_SPLIT_HPP
#define CPPXBASE_STRING_SPLIT_HPP

#include <string>

namespace cppxbase {

template <typename StrT, typename ContainerT>
void split(const StrT& s, const StrT& delimiter,
           ContainerT& result_container);



// template implementation
template <typename StrT, typename ContainerT>
void split(const StrT& s, const StrT& delimiter,
           ContainerT& result_container) {
    using std::swap;
    ContainerT tmp_result_container;
    typename StrT::size_type start_pos = 0UL;
    auto delim_sz = delimiter.size();
    auto pos = s.find(delimiter);
    while (pos != StrT::npos) {
        auto count = pos - start_pos;
        StrT part = s.substr(start_pos, count);
        tmp_result_container.push_back(std::move(part));
        start_pos = pos + delim_sz;
        pos = s.find(delimiter, start_pos);
    }
    // pos == npos
    StrT part = s.substr(start_pos);
    tmp_result_container.push_back(std::move(part));
    swap(result_container, tmp_result_container);
}

} // end of namespace cppxbase

#endif
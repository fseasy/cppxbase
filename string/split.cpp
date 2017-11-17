#include <string>

namespace cppxbase {

template <typename StrT, typename ContainerT>
void split(const StrT& s, const StrT& delimiter,
           ContainerT& result_container) {
    typename StrT::size_type start_pos = 0UL;
    auto delim_sz = delimiter.size();
    auto pos = s.find(delimiter);
    while (pos != StrT::npos) {
        auto count = 
        StrT part = s.substr(start_pos, )
    }

}

}

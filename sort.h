#ifndef SORT_H
#define SORT_H

#include <functional>
#include <iterator>
#include <utility>

namespace my {

template <typename Iterator, typename Comparator>
void sort(Iterator begin, Iterator end, Comparator comp)
{
    for (auto i = begin; i != end; ++i) {

        auto min = i;

        for (auto j = std::next(i); j != end; ++j) {

            if (comp(*j, *min)) {
                min = j;
            }
        }

        if (min != i) {
            std::swap(*i, *min);
        }
    }
}

template <typename Iterator>
void sort(Iterator begin, Iterator end)
{
    my::sort(begin, end, std::less<>());
}

}

#endif // SORT_H
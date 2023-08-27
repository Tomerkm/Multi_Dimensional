#ifndef MULTI_DIMENSIONAL_
#define MULTI_DIMENSIONAL_

#include <array>


template<typename T, std::size_t I, std::size_t... J>
class MultiDimArray
{
public:
    using Nested = typename MultiDimArray<T, J...>::type;
    using type = std::array<Nested, I>;

    // Constructors
    MultiDimArray() = default;
    MultiDimArray(const MultiDimArray&) = default;
    MultiDimArray(MultiDimArray&&) = default;

    // Assignment Operator
    MultiDimArray& operator=(const MultiDimArray&) = default;
    MultiDimArray& operator=(MultiDimArray&&) = default;

    // Destructor
    ~MultiDimArray() = default;

    Nested& operator[](size_t _idx);
    const Nested& operator[](size_t _idx) const;


private:
    type m_data;

};

// Base specialization
template<typename T, std::size_t I>
class MultiDimArray<T, I>
{

public:
    using type = std::array<T, I>;

    // Constructors
    MultiDimArray() = default;
    MultiDimArray(const MultiDimArray&) = default;
    MultiDimArray(MultiDimArray&&) = default;

    // Assignment Operator
    MultiDimArray& operator=(const MultiDimArray&) = default;
    MultiDimArray& operator=(MultiDimArray&&) = default;

    // Destructor
    ~MultiDimArray() = default;

    T& operator[](size_t _idx);
    const T& operator[](size_t _idx) const;

private:
    type m_data;
};

#include "../imp/multi_dimensional.hpp"

#endif
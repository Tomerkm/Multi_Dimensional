#include "../headers/multi_dimensional.h"


template<typename T, std::size_t I, std::size_t... J>
typename MultiDimArray<T, I, J ...>::Nested& MultiDimArray<T, I, J ...>::operator[](size_t _idx)
{
	return m_data[_idx];
}

template<typename T, std::size_t I, std::size_t... J>
const typename MultiDimArray<T, I, J ...>::Nested& MultiDimArray<T, I, J ...>::operator[](size_t _idx) const
{
	return m_data[_idx];
}

template<typename T, std::size_t I>
T& MultiDimArray<T, I>::operator[](size_t _idx)
{
	return m_data[_idx];
}

template<typename T, std::size_t I>
const T& MultiDimArray<T, I>::operator[](size_t _idx) const
{
	return m_data[_idx];
}
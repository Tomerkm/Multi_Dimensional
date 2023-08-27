#include <gtest/gtest.h>

#include "../multi_dimensional_arr/headers/multi_dimensional.h"

// Demonstrate indexs overload
TEST(Index, SetVal) 
{
	const size_t size = 3;
	MultiDimArray<int, size> mat;

	for (size_t i = 0; i < size ; ++i)
	{
		mat[i] = i;

		// Expect equality.
		EXPECT_EQ(mat[i], i);
	}
	
}


// Demonstrate indexs overload
TEST(Index, SetVal2D)
{
	const size_t size = 3;
	MultiDimArray<int, size, size> mat;

	for (size_t i = 0; i < size ; ++i)
	{
		for (size_t j = 0; j < size ; ++j)
		{
			mat[i][j] = i * j;

			// Expect equality.
			EXPECT_EQ(mat[i][j], i * j);
		}
		
	}
}

// Demonstrate indexs overload
TEST(Index, SetVal4D)
{
	const size_t size = 3;
	MultiDimArray<char, size, size, size, size> mat;

	for (size_t i = 0 ; i < size ; ++i)
	{
		for (size_t j = 0 ; j < size ; ++j)
		{
			for (size_t k = 0 ; k < size ; ++k)
			{
				for (size_t q = 0 ; q < size ; ++q)
				{
					mat[i][j][k][q] = i * j * k * q;

					// Expect equality.
					EXPECT_EQ(mat[i][j][k][q], i * j * k * q);
				}

			}
		}

	}
}



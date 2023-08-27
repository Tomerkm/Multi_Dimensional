# Multi Dimensional

## Goals:
  -   A convenient and fast way to define a multidimensional array.
  -   Using STD:array which let you fast access.

## Examples

Here are some examples to give you an idea how to use the class.

Example 1:

```cpp

	const size_t size = 3;
	MultiDimArray<int, size> mat;

	for (size_t i = 0; i < size ; ++i)
	{
		mat[i] = i;

		// Expect equality.
		EXPECT_EQ(mat[i], i);
	}

```

Example 2:

```cpp

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

```

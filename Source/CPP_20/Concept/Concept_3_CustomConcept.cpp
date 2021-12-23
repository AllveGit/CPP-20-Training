#include "Concept_3_CustomConcept.h"

#include <iostream>
#include <concepts>

// Custom concept test

template <typename T>
concept customsigned_integral = std::integral<T> && static_cast<T>(-1) < static_cast<T>(0);

template <typename T>
concept customunsigned_integral = std::integral<T> && !customsigned_integral<T>;

template <typename T>
requires customsigned_integral<T>
void CustomSignedTypeTest(T InParam)
{
	std::cout << InParam << std::endl;
}

template <typename T>
requires customunsigned_integral<T>
void CustomUnsignedTypeTest(T InParam)
{
	std::cout << InParam << std::endl;
}

#pragma region TestExecute
void Concept3TestExecute::Execute()
{
	std::cout << "Test : Concept_3_CustomConcept" << std::endl;
}
#pragma endregion
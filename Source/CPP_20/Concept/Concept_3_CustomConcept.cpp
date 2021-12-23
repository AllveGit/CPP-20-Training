#include "Concept_3_CustomConcept.h"

#include <iostream>
#include <concepts>

/*
	자체 정의한 Concept 사용하는 방법 

	⭕	템플릿 메타프로그래밍(TMP)를 이용하여 자신만의 Concept을 정의할 수 있다.
	⭕	Concept과 Concept을 합칠수도 있다.
	⭕	여기서 구현한 Concept은 양수만 포함되는 정수타입만 템플릿으로 받을 수 있도록 제한한 concept이다.
 */

template <typename T>
concept customsigned_integral = std::integral<T> && static_cast<T>(-1) < static_cast<T>(0);
template <typename T>
concept customunsigned_integral = std::integral<T> && !customsigned_integral<T>;

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

	CustomUnsignedTypeTest((unsigned int)1);
	CustomUnsignedTypeTest((unsigned int)2);
	CustomUnsignedTypeTest((unsigned int)3);
	CustomUnsignedTypeTest((unsigned int)4);

	//CustomUnsignedTypeTest(-1); -> Error!
	//CustomUnsignedTypeTest(-2); -> Error!
	//CustomUnsignedTypeTest(-3); -> Error!
	//CustomUnsignedTypeTest(-4); -> Error!
}
#pragma endregion
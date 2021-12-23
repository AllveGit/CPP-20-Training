/*
	// Detail : https://github.com/jacking75/edu_com2us_cpp20_Training/blob/main/concept.md

	Concept이란 C#의 Generic과 같이 템플릿에 제약조건을 걸어주는 새로운 기능이다.
	TMP를 이용하여 템플릿으로 오는 타입이 제약조건에 부합하는지 확인한다.
	std에 기본 정의되어 있는 것들이 다량 있지만, concept을 이용하여 자신만의 제약조건을 정의할수도 있다.
*/

#include "Concept_1_HowToUse.h"
#include <iostream>

/*
	Concept 사용 방법(전부 같은 의미)

	☝ 템플릿 타입을 정수형으로 제한하는 Concept를 사용 (std::integral)
 */


// 1) Requires Clause
template<typename T>
requires std::integral<T>
void IntegerTypeTest1(T InInteger)
{
	std::cout << InInteger << std::endl;
}

// 2) Trailing Requires Clause
template<typename T>
void IntegerTypeTest2(T InInteger) requires std::integral<T>
{
	std::cout << InInteger << std::endl;
}

// 3) Constrained Template Parameter
template<std::integral T>
void IntegerTypeTest3(T InInteger)
{
	std::cout << InInteger << std::endl;
}

// 4) Abbreviated Function Template
void IntegerTypeTest4(std::integral auto InInteger)
{
	std::cout << InInteger << std::endl;
}

#pragma region TestExecute
void Concept1TestExecute::Execute()
{
	std::cout << "Test : Concept_1_HowToUse" << std::endl;

	IntegerTypeTest1(1);
	IntegerTypeTest2(2);
	IntegerTypeTest3(3);
	IntegerTypeTest4(4);

	// Error List
	// IntegerTypeTest1(1.0f); -> Error!
	// IntegerTypeTest2(2.0f); -> Error!
	// IntegerTypeTest3(3.0f); -> Error!
	// IntegerTypeTest4(4.0f); -> Error!

	// IntegerTypeTest1(new int[4]); -> Error!
	// IntegerTypeTest2(new int[4]); -> Error!
	// IntegerTypeTest3(new int[4]); -> Error!
	// IntegerTypeTest4(new int[4]); -> Error!
}
#pragma endregion
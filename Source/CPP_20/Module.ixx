/*
	Microsoft Docs : https://docs.microsoft.com/ko-kr/cpp/cpp/modules-cpp?view=msvc-170
	Detail : https://openmynotepad.tistory.com/78
	Reference : https://velog.io/@kjh3865/%EB%B9%8C%EB%93%9C%EC%BB%B4%ED%8C%8C%EC%9D%BC-%EC%8B%A4%ED%96%89-%EA%B3%BC%EC%A0%95

	기존 빌드
	1) 전처리
	- #include, #define 같은 전처리문들을 처리
	2) 컴파일
	오브젝트파일 .obj를 생성하는 단계
	3) 링킹
	.lik 파일을 생성하며 심볼을 통해 어셈블리 정보를 연결하는 단계

	단계를 거치기에 빌드속도가 너무 느리며, 심볼이 중복으로 정의되고 매크로 인식에 따른 다른 결과가 출력되기도 함.

	Module
	- 딱 한번만 import됨, import 순서는 상관X
	- 한번만 import되기에 심볼 중복 정의가 안됨
	- .h .cpp 분리하여 관리할 필요가 없어짐
*/

// global module fragment : 모듈 단위를 컴파일하기전에 먼저 컴파일해야할 비모듈 코드가 있다는 것을 컴파일러에 알리는 선언
module;

#include <iostream>

export module Module;

// sub module
export import Module.SubModule; // 서브모듈 : 디테일하게 파고들어 import 가능
export import ModulePartition; // 파티션 : 무조건 상위의 module을 import해야 파티션 모듈들을 쓸 수 있음 

/* Module을 사용하는 방법 */

// 1) 함수 앞에 export
export int Add1(int a, int b)
{
	return a + b;
}

// 2) export용 블록
export
{
	int Add2(int a, int b)
	{
		return a + b;
	}
}

// 3) export용 namespace
export namespace ExAddTest
{
	int Add3(int a, int b)
	{
		return a + b;
	}
}

export namespace Test
{
	void ProcessModuleTest()
	{
		std::cout << "==========  Module ==========" << std::endl;

		SubModuleFunc();
		ModulePartitionTest1();
		ModulePartitionTest2();

		std::cout << "=============================" << std::endl << std::endl;
	}
}
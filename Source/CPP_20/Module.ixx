
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
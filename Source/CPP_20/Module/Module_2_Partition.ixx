module;

#include <iostream>
#include "../TestExecute/ITestExecute.h"

export module Module_2_Partition;   // 파티션 : 무조건 상위의 module을 import해야 파티션 모듈들을 쓸 수 있음
								  
// Partition
export import: Part1;
export import: Part2;

export
{
	class Module2TestExecute : public ITestExecute
	{
	public:
		Module2TestExecute() = default;
		virtual ~Module2TestExecute() = default;

		virtual void Execute() override
		{
			std::cout << "Test : Module_2_Partition" << std::endl;

			ModulePartitionPart1Test();
			ModulePartitionPart2Test();
		}
	};
}
module;

#include <iostream>
#include "../TestExecute/ITestExecute.h"

export module Module_2_Partition;

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
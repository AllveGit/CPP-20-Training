module;

#include <iostream>
#include "../TestExecute/ITestExecute.h"

export module Module_3_PartitionImpl;

export
{
	class Module3TestExecute : public ITestExecute
	{
	public:
		Module3TestExecute() = default;
		virtual ~Module3TestExecute() = default;

		virtual void Execute() override
		{
			std::cout << "Test : Module_3_PartitionImpl" << std::endl;

		}
	};
}
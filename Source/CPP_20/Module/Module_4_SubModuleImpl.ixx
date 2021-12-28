module;

#include <iostream>
#include "../TestExecute/ITestExecute.h"

export module Module_4_SubModuleImpl;

export
{
	// Interface Unit
	const char* GetImplPart1Str();
	const char* GetImplPart2Str();

	class Module4TestExecute : public ITestExecute
	{
	public:
		Module4TestExecute() = default;
		virtual ~Module4TestExecute() = default;

		virtual void Execute() override
		{
			std::cout << "Test : Module_4_SubModuleImpl" << std::endl;

			std::cout << GetImplPart1Str() << std::endl;
			std::cout << GetImplPart2Str() << std::endl;
		}
	};
}
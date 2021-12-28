module;

#include <iostream>
#include "../TestExecute/ITestExecute.h"

export module Module_3_SubModule; // ������ : �������ϰ� �İ��� import ����

export import Module_3_SubModule.Sub1;
export import Module_3_SubModule.Sub2;

export
{
	class Module3TestExecute : public ITestExecute
	{
	public:
		Module3TestExecute() = default;
		virtual ~Module3TestExecute() = default;

		virtual void Execute() override
		{
			std::cout << "Test : Module_3_SubModule" << std::endl;

			SubModulePart1Test();
			SubModulePart2Test();
		}
	};
}
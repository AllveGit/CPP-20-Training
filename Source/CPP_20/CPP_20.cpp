#include <exception>

#include "TestExecute/TestExecuteFactory.h"
#include "TestExecute/ITestExecute.h"
#include "TestExecute/TestType.h"

int main()
{
	if (ITestExecute* testExecute = TestExecuteFactory::CreateTestExecute(ETestType::Module2))
	{
		testExecute->Execute();

		delete testExecute;
		testExecute = nullptr;
	}
}
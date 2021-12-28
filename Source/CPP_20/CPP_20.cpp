#include <exception>

#include "TestExecute/TestExecuteFactory.h"
#include "TestExecute/ITestExecute.h"
#include "TestExecute/TestType.h"

int main()
{
	if (ITestExecute* testExecute = TestExecuteFactory::CreateTestExecute(ETestType::Coroutine1))
	{
		testExecute->Execute();

		delete testExecute;
		testExecute = nullptr;
	}
}
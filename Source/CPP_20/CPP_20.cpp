﻿#include <exception>

#include "TestExecute/TestExecuteFactory.h"
#include "TestExecute/ITestExecute.h"
#include "TestExecute/TestType.h"

int main()
{
	if (ITestExecute* testExecute = TestExecuteFactory::CreateTestExecute(ETestType::Concept3))
	{
		testExecute->Execute();

		delete testExecute;
		testExecute = nullptr;
	}
}
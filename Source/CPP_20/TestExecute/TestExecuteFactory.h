#pragma once

#include "TestType.h"
#include "ITestExecute.h"

class TestExecuteFactory
{
public:
	static ITestExecute* CreateTestExecute(ETestType InTestType);
};
#pragma once

class ITestExecute
{
public:
	ITestExecute() = default;
	virtual ~ITestExecute() = default;

	virtual void Execute() = 0;
};
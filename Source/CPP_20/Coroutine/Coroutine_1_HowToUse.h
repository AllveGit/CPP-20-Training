#pragma once
#include "../TestExecute/ITestExecute.h"

class Coroutine1TestExecute : public ITestExecute
{
public:
	Coroutine1TestExecute() = default;
	virtual ~Coroutine1TestExecute() = default;

	virtual void Execute() override;
};
#pragma once
#include "../TestExecute/ITestExecute.h"

class Ranges1TestExecute : public ITestExecute
{
public:
	Ranges1TestExecute() = default;
	virtual ~Ranges1TestExecute() = default;

	virtual void Execute() override;
};
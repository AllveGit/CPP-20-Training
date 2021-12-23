#include "TestExecuteFactory.h"

#include "../Concept/Concept_1_HowToUse.h"
#include "../Concept/Concept_2_Example.h"
#include "../Concept/Concept_3_CustomConcept.h"

import Module_1_HowToExport;

ITestExecute* TestExecuteFactory::CreateTestExecute(ETestType InTestType)
{
	switch (InTestType)
	{
	case ETestType::Concept1:
		return new Concept1TestExecute();
	case ETestType::Concept2:
		return new Concept2TestExecute();
	case ETestType::Concept3:
		return new Concept3TestExecute();
	case ETestType::Module1:
		return new Module1TestExecute();
	default:
		return nullptr;
	}
}
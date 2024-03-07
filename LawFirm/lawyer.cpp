#include "lawyer.h"

Lawyer::Lawyer() : Employee() {}

int Lawyer::getCases()
{
    return caseInProgress;
}

void Lawyer::setCases(int newCaseInProgress)
{
    caseInProgress = newCaseInProgress;
}

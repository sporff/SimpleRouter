#include "pch.h"
#include "BasicConveyor.h"


BasicConveyor::BasicConveyor(std::string id)
	: ConveyorBase(id)
{
}

BasicConveyor::~BasicConveyor()
{
}

// std::shared_ptr<BasicConveyor> BasicConveyor::make_BasicConveyor(std::string id)
// {
// 	return std::make_shared<BasicConveyor>(id);
// }

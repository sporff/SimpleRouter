#include "pch.h"
#include "ConveyorBase.h"


ConveyorBase::ConveyorBase(std::string id)
{
	m_id = id;
}

ConveyorBase::~ConveyorBase()
{
}

std::string ConveyorBase::getId()
{
	return m_id;
}

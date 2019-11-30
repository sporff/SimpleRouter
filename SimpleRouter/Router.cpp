#include "pch.h"
#include "Router.h"


Router::Router()
{
}


Router::~Router()
{
}

ConveyorBaseSharedPtr Router::addConveyor(ConveyorBaseSharedPtr newConveyor)
{
	if (newConveyor == nullptr || newConveyor->getId().empty())
	{
		return nullptr;
	}

	m_conveyors.insert(std::make_pair(newConveyor->getId(), newConveyor));
	return newConveyor;
}

ContainerSharedPtr Router::addContainer(ContainerSharedPtr newContainer)
{
	if (newContainer == nullptr || newContainer->getId().empty())
	{
		return nullptr;
	}

	m_containers.insert(std::make_pair(newContainer->getId(), newContainer));
	return newContainer;
}

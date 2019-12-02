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

/*
ConveyorBaseSharedPtr ConveyorBase::addConnection(ConveyorBaseSharedPtr newConnection)
{
	// sanity check input for null or empty string id
	if (newConnection == nullptr || newConnection->getId().empty())
		return nullptr;

	// make sure it doesn't already exist
	auto foundConnection = m_connections.find(newConnection->getId());
	if (foundConnection != m_connections.end())
		return nullptr;

	m_connections.insert( std::make_pair(newConnection->getId(), newConnection));
	return newConnection;
}

bool ConveyorBase::removeConnection(std::string removeConnectionName)
{
	// sanity check input for null or empty string id
	if (removeConnectionName.empty())
		return false;

	auto removeCount = m_connections.erase(removeConnectionName);
	if (removeCount == 0)
		return false;

	return true;
}

ConveyorBaseSharedPtr ConveyorBase::getConnection(std::string getConnectionName)
{
	// sanity check input for null or empty string id
	if (getConnectionName.empty())
		return nullptr;

	auto foundConnection = m_connections.find(getConnectionName);
	if (foundConnection == m_connections.end())
		return nullptr;

	return foundConnection->second;
}*/

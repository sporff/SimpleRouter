#include "pch.h"
#include "BasicConveyor.h"


BasicConveyor::BasicConveyor(std::string id)
	: ConveyorBase(id)
	, m_connections{nullptr, nullptr, nullptr, nullptr}
{
}

BasicConveyor::~BasicConveyor()
{
}

bool BasicConveyor::setConnection(Direction dir, ConveyorBaseSharedPtr newConn)
{
	if (newConn == nullptr || newConn->getId().empty())
		return false;

	if (dir < 0 || dir >= 4)
		return false;

	m_connections[dir] = newConn;
	return true;
}

bool BasicConveyor::unsetConnection(Direction dir)
{
	if (dir < 0 || dir >= 4)
		return false;

	m_connections[dir] = nullptr;
}

bool BasicConveyor::isSynchronous(std::string conv1, std::string conv2)
{

}

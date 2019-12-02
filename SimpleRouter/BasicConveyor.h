#pragma once
#include "ConveyorBase.h"

class BasicConveyor;
using BasicConveyorSharedPtr = std::shared_ptr<BasicConveyor>;

class BasicConveyor :
	public ConveyorBase
{
public:
	enum Direction {
		North=0,
		East=1,
		South=2,
		West=3
	};
	BasicConveyor(std::string id);
	~BasicConveyor();

	bool setConnection(Direction dir, ConveyorBaseSharedPtr newConn);
	bool unsetConnection(Direction dir);

	virtual bool isSynchronous(std::string conv1, std::string conv2);

private:
	ConveyorBaseSharedPtr m_connections[4];
};
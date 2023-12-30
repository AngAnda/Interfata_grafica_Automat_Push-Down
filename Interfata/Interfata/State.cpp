#include "State.h"

State::State(QPoint p, int value): 
	m_coord(p), 
	m_value(value), 
	m_type(StateType::normal)
{
}

QPoint State::GetCoordinate() 
{
	return m_coord;
}

QString State::GetName() const
{
	return "q" + QString::number(m_value);
}

StateType State::GetStateType() const
{
	return m_type;
}

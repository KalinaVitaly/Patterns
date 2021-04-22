#include "Component.h"

void Component::SetParent(Component* _parent)
{
	parent = _parent;
}

Component* Component::GetParent()
{
	return parent;
}

bool Component::IsComposite() const
{
	return false;
}


#pragma once
#include <list>
#include "Component.h"
#include "storage.h"
class Composite final : public Component
{
public:

	void AddComponent(Component* component) override;
	void RemoveComponent(Component* component) override;
	bool IsComposite() const override;
protected:
	std::list<Component*> childrens;
};


#pragma once
#include <iostream>
#include <memory>

class Component
{
public:
	Component() = default;
	virtual ~Component() = default;
public:
	void SetParent(Component* _parent);
	Component* GetParent();
public:
	virtual void OutputInformation() = 0;
	virtual void AddComponent(Component* component) {};
	virtual void RemoveComponent(Component* component) {};
	virtual bool IsComposite() const;
	virtual void ToString() = 0;
	virtual size_t GetBaggageWeight() const { std::cout << "Component\n"; return 1; };
protected:
	Component* parent;
};


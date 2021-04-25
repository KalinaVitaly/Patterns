#pragma once
#include <list>
#include <memory>
#include <iostream>
#include "Component.h"
#include "storage.h"

class Composite : public Component
{
public:
	Composite() = default;
	~Composite() override = default;
public:
	void AddComponent(Component* component) override;
	void RemoveComponent(Component* component) override;
	bool IsComposite() const override;
	void ToString() override {};
	void OutputInformation() override;
	virtual size_t GetBaggageWeight() const override { std::cout << "Composite\n"; return 1; };
	size_t GetTotalWeight() const;
protected:
	std::list<std::shared_ptr<Component>> children;
};


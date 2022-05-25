// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	currentHealthBar = 0;
	health = 0;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UHealthComponent::PostInitProperties()
{
	Super::PostInitProperties();

	Setup();
}

void UHealthComponent::Setup()
{
	currentHealthBar = healthBars.Num();
	if (currentHealthBar > 0)
	{
		health = healthBars[currentHealthBar - 1];
	}
	else
	{
		health = -1;
	}
}

#if WITH_EDITOR
void UHealthComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Setup();

	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif

UFUNCTION(BlueprintPure, Category = "Health")
float UHealthComponent::GetPercentHealth()
{
	return health / (healthBars[currentHealthBar - 1]);
}

UFUNCTION(BlueprintPure, Category = "Health")
float UHealthComponent::GetMaxHealth()
{
	return healthBars[currentHealthBar - 1];
}

UFUNCTION(BlueprintCallable, Category = "Health")
float UHealthComponent::SetHealth(float paraHealth)
{
	health = paraHealth;
	CheckOverHealth();
	return health;
}

UFUNCTION(BlueprintCallable, Category = "Health")
TArray<float> UHealthComponent::SetHealthBars(TArray<float> newBars)
{
	healthBars = newBars;
	if (currentHealthBar > healthBars.Num())
	{
		SetHealthBarNumber(healthBars.Num());
	}
	return healthBars;
}

UFUNCTION(BlueprintCallable, Category = "Health")
float UHealthComponent::SetMaxHealth(float paraHealth)
{
	healthBars[currentHealthBar - 1] = paraHealth;
	return healthBars[currentHealthBar - 1];
}

UFUNCTION(BlueprintCallable, Category = "Health")
int UHealthComponent::SetHealthBarNumber(int num)
{
	if (num < 1) {
		return false;
	}
	currentHealthBar = num;
	if (currentHealthBar > healthBars.Num())
	{
		currentHealthBar = healthBars.Num();
	}
	return currentHealthBar;
}

UFUNCTION(BlueprintCallable, Category = "Health")
float UHealthComponent::TakeDamage(float damage)
{
	health -= damage;
	return health;
}

UFUNCTION(BlueprintCallable, Category = "Health")
float UHealthComponent::TakeCurrentPercentDamage(float percent)
{
	health -= (percent * health);
	return health;
}

UFUNCTION(BlueprintCallable, Category = "Health")
float UHealthComponent::TakeMaxPercentDamage(float percent)
{
	health -= (percent * healthBars[currentHealthBar - 1]);
	return health;
}

UFUNCTION(BlueprintCallable, Category = "Health")
float UHealthComponent::HealHealth(float heal)
{
	health += heal;
	CheckOverHealth();
	return health;
}

UFUNCTION(BlueprintCallable, Category = "Health")
float UHealthComponent::HealCurrentPercentHealth(float percent)
{
	health += (percent * health);
	return health;
}

UFUNCTION(BlueprintCallable, Category = "Health")
float UHealthComponent::HealMaxPercentHealth(float percent)
{
	health += (percent * healthBars[currentHealthBar - 1]);
	CheckOverHealth();
	return health;
}

UFUNCTION(Blueprintcallable, Category = "Health")
bool UHealthComponent::CheckDeath()
{
	if (!BreakHealthBar())
	{
		if (health <= 0)
		{
			return true;
		}
	}
	return false;
}

UFUNCTION(Blueprintcallable, Category = "Health")
bool UHealthComponent::BreakHealthBar()
{
	if (health <= 0)
	{
		if (currentHealthBar == 1)
		{
			return false;
		}
		else
		{
			currentHealthBar--;
			health = healthBars[currentHealthBar - 1];
		}
		return true;
	}
	return false;
}

UFUNCTION(Blueprintcallable, Category = "Health")
float UHealthComponent::CheckOverHealth()
{
	if (health > healthBars[currentHealthBar - 1])
	{
		health = healthBars[currentHealthBar - 1];
	}
	return health;
}

UFUNCTION(Blueprintcallable, Category = "Health")
bool UHealthComponent::IsDead()
{
	if (currentHealthBar == 1 && health <= 0)
	{
		return true;
	}
	return false;
}
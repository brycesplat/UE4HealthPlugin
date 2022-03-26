// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HEALTHPLUGIN_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Health")
		float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		TArray<float> healthBars;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Health")
		int currentHealthBar;

	void PostInitProperties();

	UFUNCTION(BlueprintCallable, Category = "Health")
		void Setup();

	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent);

	UFUNCTION(BlueprintPure, Category = "Health")
		float GetPercentHealth();

	UFUNCTION(BlueprintPure, Category = "Health")
		float GetMaxHealth();

	UFUNCTION(BlueprintCallable, Category = "Health")
		float SetHealth(float paraHealth);

	UFUNCTION(BlueprintCallable, Category = "Health")
		TArray<float> SetHealthBars(TArray<float> newBars);

	UFUNCTION(BlueprintCallable, Category = "Health")
		float SetMaxHealth(float paraHealth);

	UFUNCTION(BlueprintCallable, Category = "Health")
		int SetHealthBarNumber(int num);

	UFUNCTION(BlueprintCallable, Category = "Health")
		float TakeDamage(float damage);

	UFUNCTION(BlueprintCallable, Category = "Health")
		float TakeCurrentPercentDamage(float percent);

	UFUNCTION(BlueprintCallable, Category = "Health")
		float TakeMaxPercentDamage(float percent);

	UFUNCTION(BlueprintCallable, Category = "Health")
		float HealHealth(float heal);

	UFUNCTION(BlueprintCallable, Category = "Health")
		float HealCurrentPercentHealth(float percent);

	UFUNCTION(BlueprintCallable, Category = "Health")
		float HealMaxPercentHealth(float percent);

	UFUNCTION(Blueprintcallable, Category = "Health")
		bool CheckDeath();

	UFUNCTION(Blueprintcallable, Category = "Health")
		bool BreakHealthBar();

	UFUNCTION(Blueprintcallable, Category = "Health")
		float CheckOverHealth();

	UFUNCTION(Blueprintcallable, Category = "Health")
		bool IsDead();
};

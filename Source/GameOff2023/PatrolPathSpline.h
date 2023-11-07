// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "PatrolPathSpline.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, ClassGroup = Utility, meta = (BlueprintSpawnableComponent))
class GAMEOFF2023_API UPatrolPathSpline : public USplineComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spline)
		float WaitTime = 1.5f;
public:
	UFUNCTION(BlueprintGetter, Category = Editor)
		float GetWaitTime() const;
	UFUNCTION(BlueprintSetter, Category = Editor)
		void SetWaitTime(float Value);
};

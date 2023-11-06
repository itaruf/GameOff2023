// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolPathSpline.h"

float UPatrolPathSpline::GetWaitTime() const
{
	return WaitTime;
}

void UPatrolPathSpline::SetWaitTime(float Value)
{
	WaitTime = Value;
}

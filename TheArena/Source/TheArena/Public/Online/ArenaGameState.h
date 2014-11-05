// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaPlayerState.h"
#include "GameFramework/GameState.h"
#include "ArenaGameState.generated.h"

/** ranked PlayerState map, created from the GameState */
typedef TMap<int32, TWeakObjectPtr<AArenaPlayerState> > RankedPlayerMap;

UCLASS()
class AArenaGameState : public AGameState
{
	GENERATED_UCLASS_BODY()

public:

	/** number of teams in current game */
	UPROPERTY(Transient, Replicated)
	int32 NumTeams;

	/** accumulated score per team */
	UPROPERTY(Transient, Replicated)
	TArray<int32> TeamScores;

	/** time left for warmup / match */
	UPROPERTY(Transient, Replicated)
	int32 RemainingTime;

	/** is timer paused? */
	UPROPERTY(Transient, Replicated)
	bool bTimerPaused;

	/** gets ranked PlayerState map for specific team */
	void GetRankedMap(int32 TeamIndex, RankedPlayerMap& OutRankedMap) const;

	void RequestFinishAndExitToMainMenu();
	
};

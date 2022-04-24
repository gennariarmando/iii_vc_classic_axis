#pragma once
#include "plugin.h"


#define GINPUT_COMPILE_CROSSCOMPATIBLE_VERSION
#include "GInputAPI.h"


class ClassicAxis {
public:
	class IGInputPad* pXboxPad;
	bool isAiming;
	bool wasPointing;
	bool wasCrouching;

public:
	ClassicAxis();
	bool IsAbleToAim(CPed* ped);
	bool IsWeaponPossiblyCompatible(CPed* ped);
	bool IsTypeMelee(CPed* ped);
	bool IsTypeTwoHanded(CPed* ped);
};

extern ClassicAxis classicAxis;

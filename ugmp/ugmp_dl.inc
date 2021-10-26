#if defined UGMP_DL_INCLUDED
	#endinput
#endif
#define UGMP_DL_INCLUDED
#pragma library UGMP_DL

#define ALLOCATE_DYNAMICALLY				INVALID_MODEL

//// Basic
#define MINFO_FLAG_NONE						0
#define MINFO_FLAG_DRAWLAST					(1 << 2) | (1 << 3)
#define MINFO_FLAG_ADDITIVE					(1 << 3)
#define MINFO_FLAG_NOZWRITE					(1 << 6)
#define MINFO_FLAG_NOSHADOWS				(1 << 7)
#define MINFO_FLAG_NOBACKFACECULLING		(1 << 21)

//// Clumps
#define MINFO_FLAG_DOOR						(1 << 5)

//// Atomics
#define MINFO_FLAG_WETROADS					(1 << 0)
#define MINFO_FLAG_CODEGLASS				(1 << 9)
#define MINFO_FLAG_ARTISTGLASS				(1 << 10)
#define MINFO_FLAG_GARAGEDOOR				(1 << 11)
#define MINFO_FLAG_DAMAGEABLE				(1 << 12)
#define MINFO_FLAG_TREE						(1 << 13)
#define MINFO_FLAG_PALMTREE					(1 << 14)
#define MINFO_FLAG_NOFLYERCOLLIDE			(1 << 15)
#define MINFO_FLAG_TAG						(1 << 20)
#define MINFO_FLAG_NOCOVER					(1 << 22)
#define MINFO_FLAG_WETONLY					(1 << 23)
#define MINFO_FLAG_MOVINGBANNER				(1 << 24)
#define MINFO_FLAG_RESERVED1				(1 << 25)
#define MINFO_FLAG_RESERVED2				(1 << 26)
#define MINFO_FLAG_CRUSHERCRANE				(1 << 27)
#define MINFO_FLAG_CRUSHERBODY				(1 << 28)
#define MINFO_FLAG_CRUSHERLID				(1 << 29)

//// Misc
#define MAX_REDIRECT_HOSTNAME				128
#define MAX_PEDSTAT_NAME					20
#define MAX_ANIMGRP_NAME					20
#define MAX_ANIMFILE_NAME					12
#define MAX_ANIMBLOCK_NAME					16
#define MAX_HANDLING_NAME					16
#define MAX_GAME_NAME						32
#define MAX_CDIMAGE_NAME					40

//// Data file types
#define DATAFILE_VEHICLEAUDIOSETS			0
#define DATAFILE_CARCOLSETS					1
#define DATAFILE_CARMODSETS					2
#define DATAFILE_PEDCOLSETS					3

///////////////////////////// NATIVES
//// Adding models
native AddAtomicModel(modelid, modelname[], txdname[], Float:drawdistance, modelflags);
native AddTimeModel(modelid, modelname[], txdname[], Float:drawdistance, modelflags, timeon, timeoff);
native AddAnimatedClumpModel(modelid, modelname[], txdname[], animblockname[], Float:drawdistance, modelflags);
native AddPedModel(modelid, modelname[], txdname[], pedstatname[], pedtype, animgrpname[], animfilename[], carmask, flags, radio1, radio2);
native AddVehicleModel(modelid, modelname[], txdname[], vehicletype, handlingname[], gamename[], animblockname[], vehicleclass, freq, flags, comprules, wheelmodelid, Float:wheelscalefront, Float:wheelscalerear, wheelupgradeclass = -1);
//native AddWeaponModel(modelid, modelname[], txdname[], animblockname[], Float:drawdistance); disabled until we have weapon DL working!!!!!

//// IDE & IPLs & Cdimages & Data files
native AddCdImage(filename[]);
native AddIDE(filename[]);
native AddIPL(filename[], Float:fOffsetX = 0.0, Float:fOffsetY = 0.0, Float:fOffsetZ = 0.0);
native AddDataFile(filename[], filetype);
native GetCdImageID(filename[]);
native GetIdeID(filename[]);
native GetIplID(filename[]);
native GetDataFileID(filename[]);
native RemoveCdImage(fileid);
native RemoveIDE(fileid);
native RemoveIPL(fileid);
native RemoveDataFile(fileid);

//// Misc
native GetPlayerNetModelID(playerid, modelname[]);
native IsAtmModelValidForPlayer(playerid, modelid);
native IsTimeModelValidForPlayer(playerid, modelid);
native IsAClmpNetModelValidForPlayer(playerid, modelid);
native IsPedNetModelValid(modelid);
native IsVehicleNetModelValid(modelid);
native IsWeaponNetModelValid(modelid);
native RedirectDownloadsTo(hostname[]);

///////////////////////////// CALLBACKS
forward OnAddModelCompleted(playerid, modelname[], modelid);
forward OnPlayerStartedDownloading(playerid);
forward OnPlayerFinishedDownloading(playerid);
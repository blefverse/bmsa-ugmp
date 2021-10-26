#if defined UGMP_MODELS_INCLUDED
	#endinput
#endif
#define UGMP_MODELS_INCLUDED
#pragma library UGMP_MODELS

#define MAX_MODEL_NAME						40
#define INVALID_MODEL 						-1
#define INVALID_WEAPON_TYPE 				0xFFFF

#define VEHICLE_TYPE_AUTOMOBILE				0
#define VEHICLE_TYPE_MTRUCK					1
#define VEHICLE_TYPE_HEAVY_INDUSTRIAL		2
#define VEHICLE_TYPE_HELI					3
#define VEHICLE_TYPE_PLANE					4
#define VEHICLE_TYPE_BOAT					5
#define VEHICLE_TYPE_HOVERCRAFT				6
#define VEHICLE_TYPE_ATV					7
#define VEHICLE_TYPE_TRAIN					8
#define VEHICLE_TYPE_BIKE					9
#define VEHICLE_TYPE_TRIKE					10
#define VEHICLE_TYPE_QUAD					11
#define VEHICLE_TYPE_BMX					12
#define VEHICLE_TYPE_TRAILER				13

#define VEHICLE_CLASS_NORMAL				0
#define VEHICLE_CLASS_POORFAMILY			1
#define VEHICLE_CLASS_RICHFAMILY			2
#define VEHICLE_CLASS_EXECUTIVE				3
#define VEHICLE_CLASS_WORKER				4
#define VEHICLE_CLASS_BIG					5
#define VEHICLE_CLASS_TAXI					6
#define VEHICLE_CLASS_MOPED					7
#define VEHICLE_CLASS_MOTORBIKE				8
#define VEHICLE_CLASS_LEISUREBOAT			9
#define VEHICLE_CLASS_WORKERBOAT			10
#define VEHICLE_CLASS_BICYCLE				11
#define VEHICLE_CLASS_IGNORE				-1

#define CARMODTYPE_UGMP_FRONT_BUMPER		14
#define CARMODTYPE_UGMP_REAR_BUMPER			15
#define CARMODTYPE_FRONT_BULLBAR			16
#define CARMODTYPE_BACK_BULLBAR				17
#define CARMODTYPE_SIDESKIRT_LEFT			18
#define CARMODTYPE_SIDESKIRT_RIGHT			19
#define CARMODTYPE_MISC1					20
#define CARMODTYPE_MISC2					21
#define CARMODTYPE_MISC3					22

#define VEHICLE_DONT_MODIFY					0
#define VEHICLE_MODIFY_AS_NORMAL_VEHICLE	1
#define VEHICLE_MODIFY_AS_LOWRIDER			2
#define VEHICLE_MODIFY_AS_STREETRACER		3

#define PED_TYPE_PLAYER1					0
#define PED_TYPE_PLAYER2					1
#define PED_TYPE_PLAYER_NETWORK				2
#define PED_TYPE_PLAYER_UNUSED				3
#define PED_TYPE_CIVMALE					4
#define PED_TYPE_CIVFEMALE					5
#define PED_TYPE_COP						6
#define PED_TYPE_GANG1						7
#define PED_TYPE_GANG2						8
#define PED_TYPE_GANG3						9
#define PED_TYPE_GANG4						10
#define PED_TYPE_GANG5						11
#define PED_TYPE_GANG6						12
#define PED_TYPE_GANG7						13
#define PED_TYPE_GANG8						14
#define PED_TYPE_GANG9						15
#define PED_TYPE_GANG10						16
#define PED_TYPE_DEALER						17
#define PED_TYPE_MEDIC						18
#define PED_TYPE_FIREMAN					19
#define PED_TYPE_CRIMINAL					20
#define PED_TYPE_BUM						21
#define PED_TYPE_PROSTITUTE					22
#define PED_TYPE_SPECIAL					23
#define PED_TYPE_MISSION1					24
#define PED_TYPE_MISSION2					25
#define PED_TYPE_MISSION3					26
#define PED_TYPE_MISSION4					27
#define PED_TYPE_MISSION5					28
#define PED_TYPE_MISSION6					29
#define PED_TYPE_MISSION7					30
#define PED_TYPE_MISSION8					31

///////////////////////////// NATIVES
//// Vehicle models
native IsValidVehicleModel(modelid);
native GetNumVehicleModels();
native GetValidVehicleModelAt(index);
native GetValidVehicleModelAtEx(index, &modelid, &vehtype, &modifyas, name[], namelen = sizeof(name));
native GetRandomVehicleModel();

//// Ped models
native IsValidPedModel(modelid);
native GetNumPedModels();
native GetValidPedModelAt(index);
native GetRandomPedModel();

//// Weapon types + models
native GetWeaponHighestParentType(weapontype);
native GetNumWeaponModels();
native GetValidWeaponModelAt(index);
native GetValidWeaponTypeAt(index);
native IsValidWeaponType(weapontype);
native IsValidWeaponModel(modelid);
native GetRandomWeaponModel();
native GetRandomWeaponType();
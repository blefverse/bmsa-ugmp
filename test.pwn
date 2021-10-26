main(){}

#include <a_samp>
#include <ugmp>

new TestVeh;

public OnGameModeInit() {
    TestVeh = AddStaticVehicleEx(411, 5, 5, 5, 5, 10, 20, -1);
}

public OnVehicleResprayAtGarage(playerid, vehicleid, color1, color2, color3, color4) {
    if (vehicleid == TestVeh && color1 == 3 && color2 == 4) return SendClientMessage(playerid, -1, "It's the true color. You are cool!");
    return true;
}

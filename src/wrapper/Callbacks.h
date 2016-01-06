/**
* Copyright (C) 2005-2014 SA-MP Team
* Copyright (C) 2011-2015 MK124 & 123marvin123
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#ifndef __CALLBACKS_H__
#define __CALLBACKS_H__
#include <map>
#include <iostream>
#include "samp.h"
#include <jni.h>

// Plugin Callbacks
bool OnLoadPlugin();
void OnUnloadPlugin();
void OnAmxLoad(AMX *amx);
void OnAmxUnload(AMX *amx);
void OnProcessTick();

// SA:MP Callbacks
cell n_OnGameModeInit(AMX* amx, cell* params);
cell n_OnGameModeExit(AMX* amx, cell* params);
cell n_OnPlayerConnect(AMX* amx, cell* params);
cell n_OnPlayerDisconnect(AMX* amx, cell* params);
cell n_OnPlayerSpawn(AMX* amx, cell* params);
cell n_OnPlayerDeath(AMX* amx, cell* params);
cell n_OnVehicleSpawn(AMX* amx, cell* params);
cell n_OnVehicleDeath(AMX* amx, cell* params);
cell n_OnPlayerText(AMX* amx, cell* params);
cell n_OnPlayerCommandText(AMX* amx, cell* params);
cell n_OnPlayerRequestClass(AMX* amx, cell* params);
cell n_OnPlayerEnterVehicle(AMX* amx, cell* params);
cell n_OnPlayerExitVehicle(AMX* amx, cell* params);
cell n_OnPlayerStateChange(AMX* amx, cell* params);
cell n_OnPlayerEnterCheckpoint(AMX* amx, cell* params);
cell n_OnPlayerLeaveCheckpoint(AMX* amx, cell* params);
cell n_OnPlayerEnterRaceCheckpoint(AMX* amx, cell* params);
cell n_OnPlayerLeaveRaceCheckpoint(AMX* amx, cell* params);
cell n_OnRconCommand(AMX* amx, cell* params);
cell n_OnPlayerRequestSpawn(AMX* amx, cell* params);
cell n_OnObjectMoved(AMX* amx, cell* params);
cell n_OnPlayerObjectMoved(AMX* amx, cell* params);
cell n_OnPlayerPickUpPickup(AMX* amx, cell* params);
cell n_OnVehicleMod(AMX* amx, cell* params);
cell n_OnEnterExitModShop(AMX* amx, cell* params);
cell n_OnVehiclePaintjob(AMX* amx, cell* params);
cell n_OnVehicleRespray(AMX* amx, cell* params);
cell n_OnVehicleDamageStatusUpdate(AMX* amx, cell* params);
cell n_OnUnoccupiedVehicleUpdate(AMX* amx, cell* params);
cell n_OnPlayerSelectedMenuRow(AMX* amx, cell* params);
cell n_OnPlayerExitedMenu(AMX* amx, cell* params);
cell n_OnPlayerInteriorChange(AMX* amx, cell* params);
cell n_OnPlayerKeyStateChange(AMX* amx, cell* params);
cell n_OnRconLoginAttempt(AMX* amx, cell* params);
cell n_OnPlayerUpdate(AMX* amx, cell* params);
cell n_OnPlayerStreamIn(AMX* amx, cell* params);
cell n_OnPlayerStreamOut(AMX* amx, cell* params);
cell n_OnVehicleStreamIn(AMX* amx, cell* params);
cell n_OnVehicleStreamOut(AMX* amx, cell* params);
cell n_OnDialogResponse(AMX* amx, cell* params);
cell n_OnPlayerTakeDamage(AMX* amx, cell* params);
cell n_OnPlayerGiveDamage(AMX* amx, cell* params);
cell n_OnPlayerClickMap(AMX* amx, cell* params);
cell n_OnPlayerClickTextDraw(AMX* amx, cell* params);
cell n_OnPlayerClickPlayerTextDraw(AMX* amx, cell* params);
cell n_OnPlayerClickPlayer(AMX* amx, cell* params);
cell n_OnPlayerEditObject(AMX* amx, cell* params);
cell n_OnPlayerEditAttachedObject(AMX* amx, cell* params);
cell n_OnPlayerSelectObject(AMX* amx, cell* params);
cell n_OnPlayerWeaponShot(AMX* amx, cell* params);
cell n_OnIncomingConnection(AMX* amx, cell* params);
cell n_OnTrailerUpdate(AMX *amx, cell* params);
cell n_OnActorStreamIn(AMX* amx, cell* params);
cell n_OnActorStreamOut(AMX* amx, cell* params);
cell n_OnPlayerGiveDamageActor(AMX* amx, cell* params);
cell n_OnVehicleSirenStateChange(AMX* amx, cell* params);

// AMX Callbacks

int CallRegisteredFunction(AMX* amx, std::string functionName, jobjectArray parameters);
int OnAmxVehicleCreated(int vehicleid, int modelid, float x, float y, float z, float angle, int interiorid, int worldid, int color1, int color2, int respawn_delay, int addsiren);
int OnAmxDestroyVehicle(int vehicleid);
int OnAmxSampObjectCreated(int objectId, int modelid, float x, float y, float z, float rX, float rY, float rZ, int worldid, int interiorid, float render_distance);
int OnAmxSampObjectDestroyed(int objectId);
int OnAmxAttachObjectToVehicle(int objectId, int vehicleId, float x, float y, float z, float rX, float rY, float rZ);
int OnAmxAttachObjectToPlayer(int objectId, int playerId, float x, float y, float z, float rX, float rY, float rZ);
int OnAmxAttachObjectToObject(int objectId, int other_object_Id, float x, float y, float z, float rX, float rY, float rZ);
int OnAmxCreatePlayerObject(int playerid, int modelid, float x, float y, float z, float rX, float rY, float rZ, float drawdistance, int worldid, int interiorid, int returnedValue);
int OnAmxDestroyPlayerObject(int playerid, int objectid);
int OnAmxSetPlayerAttachedObject(int playerid, int index, int modelid, int bone, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int materialcolor1, int materialcolor2);
int OnAmxRemovePlayerAttachedObject(int playerid, int index);
int OnAmxDestroyPickup(int pickupid);
int OnAmxCreatePickup(int model, int type, float posX, float posY, float posZ, int virtualworld, int id);
int OnAmxAddStaticPickup(int model, int type, float posX, float posY, float posZ, int virtualworld);

int OnAmxCreateLabel(char* text, int color, float posX, float posY, float posZ, float drawDistance, int virtualworld, int testLOS, int id);
int OnAmxDeleteLabel(int id);
int OnAmxAttachLabelToPlayer(int id, int playerid, float offsetX, float offsetY, float offsetZ);
int OnAmxAttachLabelToVehicle(int id, int vehicleid, float offsetX, float offsetY, float offsetZ);
int OnAmxUpdateLabel(int id, int color, char* text);

int OnAmxCreatePlayerLabel(int playerid, char* text, int color, float posX, float posY, float posZ, float drawDistance, int attachedPlayer, int attachedVehicle, int testLOS, int id);
int OnAmxDeletePlayerLabel(int playerid, int id);
int OnAmxUpdatePlayerLabel(int playerid, int id, int color, char* text);

int OnAmxCreateMenu(char* title, int columns, float x, float y, float col1Width, float col2Width, int id);
int OnAmxDestroyMenu(int id);
int OnAmxSetMenuColumnHeader(int id, int column, char* text);

int OnAmxGangZoneCreate(float minX, float minY, float maxX, float maxY, int id);
int OnAmxGangZoneDestroy(int id);
int OnAmxGangZoneShowForPlayer(int playerid, int zone, int color);
int OnAmxGangZoneShowForAll(int zone, int color);
int OnAmxGangZoneHideForPlayer(int playerid, int zone);
int OnAmxGangZoneHideForAll(int zone);
int OnAmxGangZoneFlashForPlayer(int playerid, int zone, int flashColor);
int OnAmxGangZoneFlashForAll(int zone, int flashColor);
int OnAmxGangZoneStopFlashForPlayer(int playerid, int zone);
int OnAmxGangZoneStopFlashForAll(int zone);

int OnAmxSetSkillLevel(int playerid, int skill, int level);

int OnAmxSetPlayerMapIcon(int playerid, int iconid, float x, float y, float z, int markertype, int color, int style);
int OnAmxRemovePlayerMapIcon(int playerid, int iconid);

int OnAmxShowPlayerDialog(int playerid, int dialogid, int style, char* caption, char* info, char* button1, char* button2);
int OnAmxSetPlayerWorldBounds(int playerid, float minX, float minY, float maxX, float maxY);
int OnAmxSetPlayerWeather(int playerid, int weatherid);
int OnAmxSetPlayerCheckpoint(int playerid, float x, float y, float z, float size);
int OnAmxDisablePlayerCheckpoint(int playerid);
int OnAmxSetPlayerRaceCheckpoint(int playerid, int type, float x, float y, float z, float nextX, float nextY, float nextZ, float size);
int OnAmxDisablePlayerRaceCheckpoint(int playerid);
int OnAmxTogglePlayerSpectating(int playerid, int toggle);
int OnAmxPlayerSpectatePlayer(int playerid, int target, int mode);
int OnAmxPlayerSpectateVehicle(int playerid, int target, int mode);
int OnAmxEnableStuntBonusForPlayer(int playerid, int toggle);
int OnAmxStartRecording(int playerid, int type, char* recordName);
int OnAmxStopRecording(int playerid);
int OnAmxToggleControllabel(int playerid, int toggle);

int OnAmxTextDrawCreate(float x, float y, char* text, int id);
int OnAmxTextDrawDestroy(int id);
int OnAmxTextDrawSetString(int id, char* text);
int OnAmxTextDrawShowForPlayer(int playerid, int id);
int OnAmxTextDrawHideForPlayer(int playerid, int id);
int OnAmxTextDrawShowForAll(int id);
int OnAmxTextDrawHideForAll(int id);

int OnAmxCreatePlayerTextDraw(int playerid, float x, float y, char* text, int id);
int OnAmxPlayerTextDrawDestroy(int playerid, int id);
int OnAmxPlayerTextDrawSetString(int playerid, int id, char* text);
int OnAmxPlayerTextDrawShow(int playerid, int id);
int OnAmxPlayerTextDrawHide(int playerid, int id);

int OnAmxAddVehicleComponent(int vehicleid, int componentid);
int OnAmxLinkVehicleToInterior(int vehicleid, int interiorid);
int OnAmxChangeVehicleColor(int vehicleid, int color1, int color2);

int OnAmxCreateActor(int actorid, int modelid, float x, float y, float z, float rotation);
int OnAmxDestroyActor(int actorid);

int RestartShoebill();

cell invokeCallback(AMX*, std::string, cell*, bool&);
void overridePointer(AMX*, const AMX_NATIVE_INFO *, int);
int StartShoebill();
bool shouldCancelCallback(std::string, cell);

bool hookCallback(std::string name, std::string types);
bool unhookCallback(std::string name);
std::map<std::string, std::string>::iterator getIterator(std::string name);
std::map<std::string, std::string>::const_iterator getEnd();

int* callHookedCallback(AMX *amx, std::string name, cell* params);
#endif

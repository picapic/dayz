#if defined _GLABAL_INC_
	#endinput
#endif

#define _GLOBAL_INC_

#include<a_samp>
#include"defines.inc"

new gMysql;

new gPlayerPasswordRequest[MAX_PLAYERS];
new gPlayerPasswordCheckCount[MAX_PLAYERS];

new gPlayersID[MAX_PLAYERS];

new gInventoryMenuShow[MAX_PLAYERS];
new gObjectsMenuShow[MAX_PLAYERS];
new gVehicleMenuShow[MAX_PLAYERS];

new gHideMapZone;

new Float:gNonCheaters[MAX_PLAYERS][3];

new gVehicleDataShow[MAX_PLAYERS];

new PlayerText:gTdInventory[MAX_PLAYERS][6][18]; 		//���������� ���� ���������
new PlayerText:gTdObject[MAX_PLAYERS][6][18]; 			//���������� ���� ��������
new PlayerText:gTdVehicle[MAX_PLAYERS][MAX_INVENTORY_ON_VEHICLE][18];	 		//���������� ���� ����������
new PlayerText:gTdMenu[MAX_PLAYERS][TD_COUNT]; 			//�������������� ���������� ����
new PlayerText:gTdDataVehicle[MAX_PLAYERS][TD_COUNT_VEHICLE]; 	//���������� ������ ����������
new PlayerText:gStatisticData[MAX_PLAYERS][TD_STATISTIC_DATA];	//���������� ���������� ������

new gIndex[MAX_PLAYERS][6]; 		//�������� ��������� ��� ������ ������ ���������
new gRotate[MAX_PLAYERS][6]; 		//���������� ������ (������� ��� ���)
new gIndexObject[MAX_PLAYERS][6]; 	//�������� ��������� ������� (���, ������� �����)
new gRotateObject[MAX_PLAYERS][6]; 	//�������� ������ ������� (������� ��� ���)
new gIndexVehicle[MAX_VEHICLES][MAX_INVENTORY_ON_VEHICLE]; 	//�������� ��������� ������� (���, ������� �����)
new gRotateVehicle[MAX_VEHICLES][MAX_INVENTORY_ON_VEHICLE]; 	//�������� ������ ������� (������� ��� ���)

new gTimerid; 			//������ ���������� ���������
new gTimeridUpdateSensors; 	//������ ���������� ��������
new gTimeridSaveSensors; 	//������ ���������� �������� � ������� ��������� � ��
new gTimeridUpdateVehicles; 	//������ ���������� ��������� ���� ����
new gTimerNonCheaters;		//������ ������ �������

new gUnoccupiedUpdateTimer;	//������ ���������� ��������� ��������� ����
new gUpdateWeaponTimer; //������ ���������� ���������� ��������

new gInv[MAX_PLAYERS][6]; 	//�������� ������������� ������ � samp-����
new gInvThing[MAX_PLAYERS][6]; 	//�������� id ����
new gObj[MAX_PLAYERS][6]; 	//�������� ������������� ������ � samp-����
new gObjThing[MAX_PLAYERS][6]; 	//�������� id �������
new gVehMod[MAX_VEHICLES][MAX_INVENTORY_ON_VEHICLE]; 	//�������� ������������� ������ � samp-����
new gVehObj[MAX_VEHICLES][MAX_INVENTORY_ON_VEHICLE]; 	//�������� id �������� ��������� ����������

new gVeh[MAX_VEHICLES][VEHICLE_BUFFER_DATA_NUMBER]; //�������� ������ � ������������ ��������� � ���� 
			   //0-id �������
			   //1-���-�� �����
			   //2-���������
			   //3-���������� �������
			   //4-�������� �� ���������
			   //5-������ �������
			   //6-����� ����

new gUnoccupiedVehData[MAX_VEHICLES]; //�������� "�������" ����
new gWeaponUpdate[MAX_PLAYERS]; //�������� �������, ��� ������� ��������� ���������� ���������� ��������

new gPlayerWeapon[MAX_PLAYERS][2]; //������ id �������-������ � ���������� ���������� ��������

new gHealth[MAX_PLAYERS];
new gHunger[MAX_PLAYERS];
new gThirst[MAX_PLAYERS];
new gWound[MAX_PLAYERS];
new gKiller[MAX_PLAYERS];
new gScores[MAX_PLAYERS];

new gPlayerLang[MAX_PLAYERS][4]; //���� ������� ������
new gAllLangs[2][4]={"en","ru"};
new gLangsNumber;


#pragma unused gIndex
#pragma unused gKiller
#pragma unused gScores
#pragma unused gTdObject
#pragma unused gLangsNumber
#pragma unused gIndexObject
#pragma unused gIndexVehicle
#pragma unused gTdDataVehicle
#pragma unused gVehicleDataShow
#pragma unused gVehicleMenuShow
#pragma unused gUpdateWeaponTimer
#pragma unused gInventoryMenuShow
#pragma unused gTimeridUpdateSensors
#pragma unused gTimeridUpdateVehicles
#pragma unused gPlayerPasswordCheckCount
#pragma unused gPlayerPasswordRequest
#pragma unused gUnoccupiedUpdateTimer
#pragma unused gTimeridSaveSensors
#pragma unused gUnoccupiedVehData
#pragma unused gTimerNonCheaters
#pragma unused gObjectsMenuShow
#pragma unused gStatisticData
#pragma unused gRotateVehicle
#pragma unused gRotateObject
#pragma unused gWeaponUpdate
#pragma unused gNonCheaters
#pragma unused gTdInventory
#pragma unused gHideMapZone
#pragma unused gPlayerLang
#pragma unused gTdVehicle
#pragma unused gAllLangs
#pragma unused gTimerid
#pragma unused gTdMenu

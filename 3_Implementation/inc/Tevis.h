/** 
* @file Tevis.h
* Tevis signalling of trucks that enter and exit the warehouse
*
*/
#ifndef __TEVIS_H__
#define __TEVIS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  Adds truck records
* @param[in] truckid 
* @param[in] truckmodel
* @param[in] truckRegNo
* @param[in] carryingCargo
* @param[in] drivenBy
* @param[in] arrivalTime
*/
void addTrkRec(int *truckID,char *truckModel,int *truckRegNo,char *carryingCargo,char *drivenBy,int *arrivalTime);
/**
*  Displays truck records
* @param[in] truckid 
* @param[in] truckmodel
* @param[in] truckRegNo
* @param[in] carryingCargo
* @param[in] drivenBy
* @param[in] arrivalTime
*/
void viewData(int *truckID,char *truckModel,int *truckRegNo,char *carryingCargo,char *drivenBy,int *arrivalTime);
#endif  /* #define __TEVIS_H__ */

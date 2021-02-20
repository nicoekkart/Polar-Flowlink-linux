#ifndef __PARSE_DATA_H
#define __PARSE_DATA_H

typedef struct {
	int id;
	char md5[15];
	int duration;
	long starttime;
	int fatburn;
	int fitness;
	int calories;
	int avgHr;
	int maxHr;
} sTraining;

typedef struct {
	float weight;
	int height;
	long birthdate;
	int sex;
	int activity;
	int vo2max;
	int HRMax;
	long editdate;
} sUserData;

#include "database.h"

int hex2int(int i);
int parseCommand1(unsigned char *buf, int bufsize);
int parseUserData(unsigned char *buf, int bufsize, PGconn *db);
int parseTrainingData(unsigned char *buf, int bufsize, PGconn *db);
int parseVO2maxMeasurements(unsigned char *buf, int bufsize);
int parseActiveProgram(unsigned char *buf, int bufsize);
#endif
